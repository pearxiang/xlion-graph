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
 * @file common/type.h
 * @author pearxiang(pearxiang@126.com)
 * @date 2018/11/06 14:30:37
 * @brief 
 *  
 **/
#ifndef COMMON_TYPE_H
#define COMMON_TYPE_H

namespace xlion {

typedef uint32_t vertex_id_t;
typedef uint32_t property_id_t;
typedef uint32_t property_value_t;

#define STRING_NULL ""
#define VERTEX_ID_NULL static_cast<vertex_id_t>(-1)
#define VERTEX_ID_DEL static_cast<vertex_id_t>(-2)
#define PROPERTY_ID_NULL static_cast<property_id_t>(-1)
#define PROPRTY_ID_DEL static_cast<property_id_t>(-2)
#define PROPRTY_VALUE_NULL static_cast<property_value_t>(-1)
#define PROPERY_VALUE_DEL static_cast<property_value_t>(-2)

} //end namespace xlion

#endif  // COMMON/TYPE_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
