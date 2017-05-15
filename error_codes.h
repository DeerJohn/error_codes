#ifndef __MY_ERROR_CODES_H
#define __MY_ERROR_CODES_H

// коды ошибок
enum {
	E_SUCCESS = 0,
	E_BAD_ARGUMENT,			// неверный агрумент
	E_INVALID_FILE,			// некорректный файл
	E_CANNOT_OPEN_FILE,		// проблема открытия файла
	E_OTHER				// прочие
};

#endif
