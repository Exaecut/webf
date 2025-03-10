/*
* Copyright (C) 2019-2022 The Kraken authors. All rights reserved.
* Copyright (C) 2022-present The WebF authors. All rights reserved.
*/

const cookieStorage = {};

// @TODO Persisent cookie and Session cookie support
export const cookie = {
  get: () => {
    const output: string[] = [];
    for (let cookieName in cookieStorage) {
      output.push(cookieName + '=' + cookieStorage[cookieName]);
    }
    return output.join('; ');
  },
  set: (str: String) => {
    const cookieStr = str.toString().trim();
    let key: string;
    let value: string = '';

    if (cookieStr.indexOf('=') === -1) {
      key = '';
      value = cookieStr;
    } else {
      const idx = cookieStr.indexOf('=');
      key = cookieStr.substr(0, idx);

      // Only allow to set a single cookie at a time
      // Find first cookie value if multiple cookie set
      const regResult = cookieStr.match(/^[^=]*=([^;]*)/);
      if (regResult != null) {
        value = regResult[1];
        if (key === '' && value === '') {
          return;
        }
      }
    }

    cookieStorage[key] = value;
  }
};
