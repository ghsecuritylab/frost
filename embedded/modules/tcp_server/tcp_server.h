/*
 * This file is part of the Frost distribution
 * (https://github.com/xainag/frost)
 *
 * Copyright (c) 2019 XAIN AG.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/****************************************************************************
 * \project Decentralized Access Control
 * \file tcp_server.h
 * \brief
 * Header for tcp_server module
 *
 * @Author Djordje Golubovic
 *
 * \notes
 *
 * \history
 * 07.11.2019. Initial version.
 ****************************************************************************/

#ifndef _TCP_SERVER_H_
#define _TCP_SERVER_H_

#include "vehicle_dataset.h"

int TCPServer_start(int port, VehicleDataset_state_t* state);
void TCPServer_stop();

#endif
