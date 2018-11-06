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
 * @file common/encode.h
 * @author pearxiang(pearxiang@126.com)
 * @date 2018/11/06 14:53:31
 * @brief 
 *  
 **/
#ifndef COMMON_ENCODE_H
#define COMMON_ENCODE_H

#include "common/type.h"

namespace xlion {

class Encode {
public:
    static uint32_t encocde(const std::string& str);
    static property_id_t encodePropertyName(const std::string& propertyName);
    static property_value_t encodePropetyValue(const std::string& propertyValue);
};

}
#endif  // COMMON/ENCODE_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
