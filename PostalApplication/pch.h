#pragma once

#ifndef PCH_H
#define PCH_H

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Исключение редко используемых компонентов из заголовков Windows
#include <windows.h>

#include "resource.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "framework.h"
#include "Client.h"
#include "Newspaper.h"
#include "PostOffice.h"
#include "PrintingHouse.h"

#endif //PCH_H
