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
 * \file test_internal.h
 * \brief
 * Header file with definition of test parameters for test_policyStore.c
 *
 * @Author Dejan Nedic
 *
 * \notes
 *
 * \history
 * 04.09.2018. Initial version.
 ****************************************************************************/

char demo_test[] = {""};

// lock: "531565B8F40ECA5AAC55FEE6664A233E2D0312856B777D875EB9ACC4F85D1E99"
// unlock"45C88599131156AED16B48FB6A57B8211F24B92877076164AC5D143A81730645"
char lock_Minh[] 			= {0x53, 0x15, 0x65, 0xB8, 0xF4, 0x0E, 0xCA, 0x5A, 0xAC, 0x55, 0xFE, 0xE6, 0x66, 0x4A, 0x23, 0x3E, 0x2D, 0x03, 0x12, 0x85, 0x6B, 0x77, 0x7D, 0x87, 0x5E, 0xB9, 0xAC, 0xC4, 0xF8, 0x5D, 0x1E, 0x99};

char unlock_Minh[] 			= {0x45, 0xC8, 0x85, 0x99, 0x13, 0x11, 0x56, 0xAE, 0xD1, 0x6B, 0x48, 0xFB, 0x6A, 0x57, 0xB8, 0x21, 0x1F, 0x24, 0xB9, 0x28, 0x77, 0x07, 0x61, 0x64, 0xAC, 0x5D, 0x14, 0x3A, 0x81, 0x73, 0x06, 0x45};

char honk_Minh[] 			= {0x50, 0x86, 0x7C, 0xC9, 0x32, 0x54, 0x92, 0x04, 0x92, 0xFC, 0xE0, 0xBF, 0x8D, 0xAD, 0xEA, 0x3A, 0xD8, 0xC7, 0xC8, 0x91, 0xA6, 0x3B, 0x83, 0x09, 0xE4, 0xA9, 0x28, 0xAF, 0x5D, 0x2C, 0xE2, 0xA0};

char alarm_on_Minh[]       	= {0x34, 0xF3, 0xC3, 0x1C, 0x66, 0xD7, 0xE9, 0xE7, 0x58, 0x6E, 0xAA, 0XD8, 0x9C, 0xC8, 0x58, 0x67, 0x68, 0x97, 0x33, 0x88, 0x59, 0x93, 0x83, 0x85, 0xF5, 0xDB, 0x56, 0x05, 0x26, 0x60, 0x44, 0xA1};

char alarm_off_Minh[]    	= {0x34, 0xF3, 0xC3, 0x1C, 0x66, 0xD7, 0xE9, 0xE7, 0x58, 0x6E, 0xAA, 0XD8, 0x9C, 0xC8, 0x58, 0x67, 0x68, 0x97, 0x33, 0x88, 0x59, 0x93, 0x83, 0x85, 0xF5, 0xDB, 0x56, 0x05, 0x26, 0x60, 0x44, 0xA2};

/*
char lock_Laur[] =   {0x7D, 0x9C, 0xE1, 0xBA, 0xFD, 0xC6, 0xC7, 0x3C, 0x21, 0x42, 0xC2, 0x95, 0x6E, 0x0A, 0x71, 0xB6, 0xD5, 0x20, 0x99, 0xE5, 0x44, 0x2A, 0xB5, 0x10, 0x01, 0x08, 0x29, 0x1C, 0x5F, 0x69, 0xA1, 0xDB};

char unlock_Laur[] = {0xB1, 0xB1, 0x7A, 0xB0, 0xAD, 0x78, 0xA7, 0x4E, 0x46, 0x16, 0xD4, 0xE9, 0x17, 0xDD, 0xE0, 0xBD, 0x54, 0x8E, 0xF6, 0x5B, 0xAD, 0xAA, 0x6E, 0xE6, 0x0E, 0x10, 0x3B, 0xC8, 0x3C, 0xA8, 0x15, 0x10};

char trunk_Laur[] =  {0xE8, 0xF0, 0x81, 0xA6, 0xC3, 0xCB, 0xBC, 0xB4, 0xC1, 0xD2, 0x20, 0x36, 0x5D, 0x03, 0xA8, 0xC0, 0x3C, 0x7C, 0xC6, 0xA9, 0x23, 0xBE, 0x11, 0xC8, 0xAE, 0xE3, 0x0A, 0xD5, 0x49, 0xAF, 0x51, 0x25};

char lock_Leif[] =   {0xF5, 0x55, 0xAD, 0xB4, 0x81, 0xBF, 0xA9, 0x05, 0x1F, 0xA0, 0xC9, 0x2D, 0x6E, 0x4F, 0x29, 0xF2, 0xD2, 0x32, 0x08, 0x48, 0x25, 0xA1, 0xC8, 0x36, 0x58, 0x42, 0x61, 0x3E, 0xD9, 0xA9, 0xE9, 0x78};

char unlock_Leif[] = {0x15, 0xB2, 0x49, 0x33, 0x8A, 0x19, 0x83, 0xE5, 0x64, 0x4D, 0x87, 0xC8, 0x8F, 0x90, 0x1D, 0x0F, 0xD8, 0x57, 0x3E, 0xEB, 0x63, 0x90, 0x17, 0x97, 0x9A, 0x6B, 0x82, 0x65, 0x1C, 0xFA, 0xAB, 0x64};

char trunk_Leif[] =  {0x77, 0xC7, 0x6E, 0x19, 0x4D, 0x19, 0x88, 0x3F, 0x63, 0xC8, 0x68, 0x7F, 0x25, 0x78, 0xCD, 0x30, 0x27, 0x20, 0x35, 0x1A, 0x0A, 0xB1, 0x97, 0x4D, 0x69, 0x40, 0xFD, 0x94, 0x7A, 0x4B, 0x7F, 0x3E};

char lock_Mich[] =   {0xF8, 0xC0, 0x63, 0x3D, 0x79, 0xE0, 0x44, 0x50, 0x1F, 0xCA, 0xE8, 0x98, 0x2D, 0x41, 0x65, 0xEB, 0xB3, 0x45, 0x94, 0x68, 0x60, 0xEA, 0x4B, 0x0F, 0x04, 0xD1, 0xDD, 0xEF, 0xB4, 0xCC, 0xFE, 0xEC};

char unlock_Mich[] = {0x48, 0x98, 0x7D, 0xBD, 0x75, 0xA7, 0x18, 0xB6, 0xAC, 0xD0, 0x8D, 0xDD, 0xCD, 0xD1, 0x91, 0x4F, 0x23, 0x2B, 0x93, 0x44, 0xF0, 0x79, 0xE1, 0xCB, 0x8E, 0xE3, 0xF7, 0xE1, 0x37, 0x0E, 0x87, 0x3E};

char trunk_Mich[] =  {0xB5, 0x98, 0xF0, 0x0D, 0x86, 0x67, 0xDD, 0xB3, 0x6E, 0xEA, 0xF8, 0xD6, 0x1D, 0x0F, 0x05, 0xD6, 0x9C, 0xDF, 0x4B, 0xC7, 0xEF, 0x3E, 0x6E, 0xBA, 0xC1, 0xCA, 0x97, 0xC5, 0x1B, 0x63, 0xD8, 0x97};
*/

char demo_pol1[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol2[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol3[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol4[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol5[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol6[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol7[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol8[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol9[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol0[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
/*
char demo_pol10[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol20[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol30[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol40[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol50[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol60[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol70[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol80[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol90[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
char demo_pol00[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
*/

char policy_1[1224] = {0};
char policy_2[1224] = {0};
char policy_3[1224] = {0};
char policy_4[1224] = {0};
char policy_5[1224] = {0};
char policy_6[1224] = {0};
char policy_7[1224] = {0};
char policy_8[1224] = {0};
char policy_9[1224] = {0};
char policy_0[1224] = {0};
/*
char policy_10[1224] = {0};
char policy_20[1224] = {0};
char policy_30[1224] = {0};
char policy_40[1224] = {0};
char policy_50[1224] = {0};
char policy_60[1224] = {0};
char policy_70[1224] = {0};
char policy_80[1224] = {0};
char policy_90[1224] = {0};
char policy_00[1224] = {0};
*/

//char demo_pol6[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
//char demo_pol7[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
//char demo_pol8[] =   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

//char* demo_pol_store[] = {demo_pol1, demo_pol2, demo_pol3, demo_pol4, demo_pol5, demo_pol6, demo_pol7, demo_pol8, demo_pol9, demo_pol0, demo_pol10, demo_pol20, demo_pol30, demo_pol40, demo_pol50, demo_pol60, demo_pol70, demo_pol80, demo_pol90, demo_pol00};
char* demo_pol_store[] = {demo_pol1, demo_pol2, demo_pol3, demo_pol4, demo_pol5, demo_pol6, demo_pol7, demo_pol8, demo_pol9, demo_pol0};

static int pol_store_counter = 0;

//char* pol_store[] = {policy_1, policy_2, policy_3, policy_4, policy_5, policy_6, policy_7, policy_8, policy_9, policy_0, policy_10, policy_20, policy_30, policy_40, policy_50, policy_60, policy_70, policy_80, policy_90, policy_00};
char* pol_store[] = {policy_1, policy_2, policy_3, policy_4, policy_5, policy_6, policy_7, policy_8, policy_9, policy_0};

