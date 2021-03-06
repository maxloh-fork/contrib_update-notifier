/*
 * Copyright 2016 Red Hat, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * File:   jsonio.hpp
 * Author: alex
 *
 * Created on October 20, 2016, 11:00 PM
 */

#ifndef UPDATE_CHECKER_JSONIO_HPP
#define	UPDATE_CHECKER_JSONIO_HPP

#include "Config.hpp"
#include "JsonRecord.hpp"

namespace checker {

JsonRecord read_from_file(const std::string& filepath, uint32_t max_read_bytes);

void write_to_file(const JsonRecord& json, const std::string& filepath);

} // namespace

#endif	/* UPDATE_CHECKER_JSONIO_HPP */

