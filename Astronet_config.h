/**
 * @file Astronet_config.h
 *
 * Astronet configuration file
 */


#ifndef __ASTRONET_CONFIG_H__
#define __ASTRONET_CONFIG_H__

#define __ASTRONET_MAX_INBOUND_BUFFER 10 //!< Max is 255
#define __ASTRONET_MAX_OUTBOUND_BUFFER 10 //!< Max is 255
#define __ASTRONET_MAX_HISTORY_SIZE 5
#define __ASTRONET_PAYLOAD_SIZE 32
#define __ASTRONET_RETRY_MAX_NUMBER 5
#define __ASTRONET_RETRY_DELAY 35
#define __ASTRONET_TRANSIT_TIMEOUT 1000 //!< value in milliseconds
#define __ASTRONET_MAX_NEIGHBORS_MEMORY 10 //!< maximum number of neighbor nodes to communicate
#define __ASTRONET_NODE_HANDSHAKE_COMMAND 0xFFFF
#define __ASTRONET_BLIND_NODE_ADDRESS 0xFF
#define __ASTRONET_BASE_NODE_ADDRESS 0x00
#define __ASTRONET_EEPROM_NODE_ADDRESS_START 0
#define __ASTRONET_EEPROM_PIN_ADDRESS_START 2
#define __ASTRONET_DEFAULT_PIN_NUMBER 0x00FF00FF00FF00FF // 64bit
#define __ASTRONET_ACK_TYPE_DIVIDER 0x7F
#define __ASTRONET_REQUEST_TRANSFER_PACKET_TYPE 0xFF

#endif // __ASTRONET_CONFIG_H__
