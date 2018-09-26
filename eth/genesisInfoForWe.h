/*
	This file is part of cpp-ethereum.

	cpp-ethereum is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	cpp-ethereum is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with cpp-ethereum.  If not, see <http://www.gnu.org/licenses/>.
*/
/**
 * @file: genesisInfoForWe.h
*  @author toxotguo
 * @date 2018
 */

#pragma once

#include <string>
#include <libdevcore/FixedHash.h>

using namespace std;

static dev::h256 const c_genesisStateRootForWe;
static std::string const c_genesisJsonForWe = std::string() +
    R"E(
{
"nonce": "0x0",
"difficulty": "0x0",
"mixhash": "0x0",
"coinbase": "0x0",
"timestamp": "0x0",
"parentHash": "0x0",
"extraData": "0x0",
"gasLimit": "0x13880000000000",
"alloc": {}
}
)E";

static std::string const c_configJsonForWe = std::string() +
R"E(
{
       "sealEngine": "PBFT",
        "systemproxyaddress":"0x0",
        "listenip":"0.0.0.0",
  	"cryptomod":"0",
        "rpcport": "8545",
        "p2pport": "30303",
        "channelPort": "30304",
        "wallet":"./data/keys.info",
        "keystoredir":"./data/keystore/",
        "datadir":"./data/",
        "vm":"interpreter",
        "db_topic":"DB",
        "networkid":"12345",
        "logverbosity":"4",
        "coverlog":"OFF",
        "eventlog":"ON",
  	"statlog":"OFF",
        "logconf":"./log.conf"
}
)E";
