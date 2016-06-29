/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.9.2 at Mon Jun 27 18:32:31 2016. */

#include "exchange.pb.h"



const pb_field_t ExchangeAddress_fields[4] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, ExchangeAddress, address, address, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, ExchangeAddress, dest_tag, address, 0),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, ExchangeAddress, rs_address, dest_tag, 0),
    PB_LAST_FIELD
};

const pb_field_t ExchangeRequest_fields[7] = {
    PB_FIELD2(  1, UINT64  , OPTIONAL, STATIC  , FIRST, ExchangeRequest, withdrawal_amount, withdrawal_amount, 0),
    PB_FIELD2(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, ExchangeRequest, withdrawal_address, withdrawal_amount, &ExchangeAddress_fields),
    PB_FIELD2(  3, STRING  , OPTIONAL, STATIC  , OTHER, ExchangeRequest, withdrawal_coin_type, withdrawal_address, 0),
    PB_FIELD2(  4, STRING  , OPTIONAL, STATIC  , OTHER, ExchangeRequest, deposit_coin_type, withdrawal_coin_type, 0),
    PB_FIELD2(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, ExchangeRequest, return_address, deposit_coin_type, &ExchangeAddress_fields),
    PB_FIELD2(  6, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeRequest, api_key, return_address, 0),
    PB_LAST_FIELD
};

const pb_field_t ExchangeResponse_fields[7] = {
    PB_FIELD2(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, ExchangeResponse, request, request, &ExchangeRequest_fields),
    PB_FIELD2(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, ExchangeResponse, deposit_address, request, &ExchangeAddress_fields),
    PB_FIELD2(  3, UINT64  , OPTIONAL, STATIC  , OTHER, ExchangeResponse, deposit_amount, deposit_address, 0),
    PB_FIELD2(  4, UINT32  , OPTIONAL, STATIC  , OTHER, ExchangeResponse, expiration, deposit_amount, 0),
    PB_FIELD2(  5, UINT32  , OPTIONAL, STATIC  , OTHER, ExchangeResponse, quoted_rate, expiration, 0),
    PB_FIELD2(  6, BYTES   , OPTIONAL, STATIC  , OTHER, ExchangeResponse, signature, quoted_rate, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
STATIC_ASSERT((pb_membersize(ExchangeRequest, withdrawal_address) < 65536 && pb_membersize(ExchangeRequest, return_address) < 65536 && pb_membersize(ExchangeResponse, request) < 65536 && pb_membersize(ExchangeResponse, deposit_address) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_ExchangeAddress_ExchangeRequest_ExchangeResponse)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
STATIC_ASSERT((pb_membersize(ExchangeRequest, withdrawal_address) < 256 && pb_membersize(ExchangeRequest, return_address) < 256 && pb_membersize(ExchangeResponse, request) < 256 && pb_membersize(ExchangeResponse, deposit_address) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_ExchangeAddress_ExchangeRequest_ExchangeResponse)
#endif


