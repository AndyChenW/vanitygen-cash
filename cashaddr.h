// Copyright (c) 2017 Pieter Wuille
// Copyright (c) 2017 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CASHADDR_H
#define CASHADDR_H
#include <cstdint>
#include <string>
#include <vector>

//namespace cashaddr {

/**
 * Encode a cashaddr string. Returns the empty string in case of failure.
 */
extern std::string CashAddrEncode(const int isMainNet, /*const std::vector<unsigned char> &payload*//*unsigned char payload[20]*/unsigned char *payload, unsigned int type);
//}
#endif