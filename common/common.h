#pragma once

#define LOGURU_WITH_STREAMS 1
#include <loguru.hpp>

#define LOGI LOG_S(INFO)
#define LOGW LOG_S(WARNING)
#define LOGE LOG_S(ERROR)
#define LOGF LOG_S(FATAL)

using OpenNI2SizeType = uint32_t;
static const unsigned OpenNI2ServerDefaultPort = 3344;
