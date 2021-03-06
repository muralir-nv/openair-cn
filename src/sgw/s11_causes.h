/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under 
 * the Apache License, Version 2.0  (the "License"); you may not use this file
 * except in compliance with the License.  
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*! \file s11_causes.h
* \brief
* \author Sebastien ROUX, Lionel Gauthier
* \company Eurecom
* \email: lionel.gauthier@eurecom.fr
*/
#ifndef FILE_S11_CAUSES_SEEN
#define FILE_S11_CAUSES_SEEN

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SGWCauseMapping_e {
  uint8_t value;
  /* Displayable cause name */
  char    *name;
  /* Possible cause in message? */
  unsigned create_session_response:1;
  unsigned create_bearer_response:1;
  unsigned modify_bearer_response:1;
  unsigned delete_session_response:1;
} SGWCauseMapping_t;

char *sgw_cause_2_string(uint8_t cause_value);

#ifdef __cplusplus
}
#endif

#endif /* FILE_S11_CAUSES_SEEN */
