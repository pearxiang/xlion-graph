/***************************************************************************
 * 
 * Copyright (c) 2018 pearxiang@126.com. All Rights Reserved
 * Licensed under the Apache License, Version 2.0 (the "License"); 
 * you may not use this file except in compliance with the License. 
 * You may obtain a copy of the License at
 *    http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 **************************************************************************/
 
 /**
 * @file common/encode.cpp
 * @author pearxiang(pearxiang@126.com)
 * @date 2018/11/06 14:56:19
 * @brief 
 *  
 **/

#include "common/encode.h"
#include "city.h"

namespace kg {

uint32_t Encode::encode(const std::string& str) {
    return CityHash32(str.c_str(), str.size());
}

property_id_t Encoder::encodePropertyName(const std::string& propertyName) {
    uint32_t hash = CityHash32(propertyName.c_str(), propertyName.size());
    return static_cast<property_id_t>(hash);
}

property_value_t Encoder::encodePropertyValue(const std::string& propertyValue) {
    uint32_t hash = CityHash32(propertyValue.c_str(), propertyValue.size());
    return static_cast<property_value_t>(hash);
}

}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
