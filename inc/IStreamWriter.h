﻿#pragma once

#include "Bulk.h"
#include "Metrics.h"

#include <ctime>
#include <string>
#include <vector>

namespace bulk {

/**
 * @brief Интерфейс для классов выводящих блок команд в поток.
 */
class IStreamWriter {
  public:
    virtual ~IStreamWriter() = default;

    /**
     * @brief Запись блока команд в поток.
     * @param bulk - блок команд.
     */
    virtual void write(const Bulk& bulk) = 0;

    /**
     * @brief Дать метрики работы потоков.
     * @return метрики.
     */
    virtual Metrics& get_metrics() = 0;
};

} // namespace bulk.
