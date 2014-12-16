/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.9 at Mon Dec 15 21:45:46 2014. */

#include "types.pb.h"

const uint32_t TxInputType_sequence_default = 4294967295u;
const InputScriptType TxInputType_script_type_default = InputScriptType_SPENDADDRESS;


const pb_field_t HDNodeType_fields[7] = {
    PB_FIELD2(  1, UINT32  , REQUIRED, STATIC  , FIRST, HDNodeType, depth, depth, 0),
    PB_FIELD2(  2, UINT32  , REQUIRED, STATIC  , OTHER, HDNodeType, fingerprint, depth, 0),
    PB_FIELD2(  3, UINT32  , REQUIRED, STATIC  , OTHER, HDNodeType, child_num, fingerprint, 0),
    PB_FIELD2(  4, BYTES   , REQUIRED, STATIC  , OTHER, HDNodeType, chain_code, child_num, 0),
    PB_FIELD2(  5, BYTES   , OPTIONAL, STATIC  , OTHER, HDNodeType, private_key, chain_code, 0),
    PB_FIELD2(  6, BYTES   , OPTIONAL, STATIC  , OTHER, HDNodeType, public_key, private_key, 0),
    PB_LAST_FIELD
};

const pb_field_t CoinType_fields[5] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, CoinType, coin_name, coin_name, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC  , OTHER, CoinType, coin_shortcut, coin_name, 0),
    PB_FIELD2(  3, UINT32  , OPTIONAL, STATIC  , OTHER, CoinType, address_type, coin_shortcut, 0),
    PB_FIELD2(  4, UINT64  , OPTIONAL, STATIC  , OTHER, CoinType, maxfee_kb, address_type, 0),
    PB_LAST_FIELD
};

const pb_field_t MultisigRedeemScriptType_fields[3] = {
    PB_FIELD2(  1, BYTES   , REPEATED, STATIC  , FIRST, MultisigRedeemScriptType, pubkeys, pubkeys, 0),
    PB_FIELD2(  2, BYTES   , REPEATED, STATIC  , OTHER, MultisigRedeemScriptType, signatures, pubkeys, 0),
    PB_LAST_FIELD
};

const pb_field_t TxInputType_fields[8] = {
    PB_FIELD2(  1, UINT32  , REPEATED, STATIC  , FIRST, TxInputType, address_n, address_n, 0),
    PB_FIELD2(  2, BYTES   , REQUIRED, STATIC  , OTHER, TxInputType, prev_hash, address_n, 0),
    PB_FIELD2(  3, UINT32  , REQUIRED, STATIC  , OTHER, TxInputType, prev_index, prev_hash, 0),
    PB_FIELD2(  4, BYTES   , OPTIONAL, STATIC  , OTHER, TxInputType, script_sig, prev_index, 0),
    PB_FIELD2(  5, UINT32  , OPTIONAL, STATIC  , OTHER, TxInputType, sequence, script_sig, &TxInputType_sequence_default),
    PB_FIELD2(  6, ENUM    , OPTIONAL, STATIC  , OTHER, TxInputType, script_type, sequence, &TxInputType_script_type_default),
    PB_FIELD2(  7, MESSAGE , OPTIONAL, STATIC  , OTHER, TxInputType, multisig, script_type, &MultisigRedeemScriptType_fields),
    PB_LAST_FIELD
};

const pb_field_t TxOutputType_fields[5] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC  , FIRST, TxOutputType, address, address, 0),
    PB_FIELD2(  2, UINT32  , REPEATED, STATIC  , OTHER, TxOutputType, address_n, address, 0),
    PB_FIELD2(  3, UINT64  , REQUIRED, STATIC  , OTHER, TxOutputType, amount, address_n, 0),
    PB_FIELD2(  4, ENUM    , REQUIRED, STATIC  , OTHER, TxOutputType, script_type, amount, 0),
    PB_LAST_FIELD
};

const pb_field_t TxOutputBinType_fields[3] = {
    PB_FIELD2(  1, UINT64  , REQUIRED, STATIC  , FIRST, TxOutputBinType, amount, amount, 0),
    PB_FIELD2(  2, BYTES   , REQUIRED, STATIC  , OTHER, TxOutputBinType, script_pubkey, amount, 0),
    PB_LAST_FIELD
};

const pb_field_t TransactionType_fields[8] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, TransactionType, version, version, 0),
    PB_FIELD2(  2, MESSAGE , REPEATED, STATIC  , OTHER, TransactionType, inputs, version, &TxInputType_fields),
    PB_FIELD2(  3, MESSAGE , REPEATED, STATIC  , OTHER, TransactionType, bin_outputs, inputs, &TxOutputBinType_fields),
    PB_FIELD2(  4, UINT32  , OPTIONAL, STATIC  , OTHER, TransactionType, lock_time, bin_outputs, 0),
    PB_FIELD2(  5, MESSAGE , REPEATED, STATIC  , OTHER, TransactionType, outputs, lock_time, &TxOutputType_fields),
    PB_FIELD2(  6, UINT32  , OPTIONAL, STATIC  , OTHER, TransactionType, inputs_cnt, outputs, 0),
    PB_FIELD2(  7, UINT32  , OPTIONAL, STATIC  , OTHER, TransactionType, outputs_cnt, inputs_cnt, 0),
    PB_LAST_FIELD
};

const pb_field_t TxRequestDetailsType_fields[3] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, TxRequestDetailsType, request_index, request_index, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, TxRequestDetailsType, tx_hash, request_index, 0),
    PB_LAST_FIELD
};

const pb_field_t TxRequestSerializedType_fields[4] = {
    PB_FIELD2(  1, UINT32  , OPTIONAL, STATIC  , FIRST, TxRequestSerializedType, signature_index, signature_index, 0),
    PB_FIELD2(  2, BYTES   , OPTIONAL, STATIC  , OTHER, TxRequestSerializedType, signature, signature_index, 0),
    PB_FIELD2(  3, BYTES   , OPTIONAL, STATIC  , OTHER, TxRequestSerializedType, serialized_tx, signature, 0),
    PB_LAST_FIELD
};

typedef struct {
    bool wire_in;
} wire_in_struct;

static const pb_field_t wire_in_field = 
      PB_FIELD2(50002, BOOL    , OPTEXT, STATIC  , FIRST, wire_in_struct, wire_in, wire_in, 0);

const pb_extension_type_t wire_in = {
    NULL,
    NULL,
    &wire_in_field
};

typedef struct {
    bool wire_out;
} wire_out_struct;

static const pb_field_t wire_out_field = 
      PB_FIELD2(50003, BOOL    , OPTEXT, STATIC  , FIRST, wire_out_struct, wire_out, wire_out, 0);

const pb_extension_type_t wire_out = {
    NULL,
    NULL,
    &wire_out_field
};

typedef struct {
    bool wire_debug_in;
} wire_debug_in_struct;

static const pb_field_t wire_debug_in_field = 
      PB_FIELD2(50004, BOOL    , OPTEXT, STATIC  , FIRST, wire_debug_in_struct, wire_debug_in, wire_debug_in, 0);

const pb_extension_type_t wire_debug_in = {
    NULL,
    NULL,
    &wire_debug_in_field
};

typedef struct {
    bool wire_debug_out;
} wire_debug_out_struct;

static const pb_field_t wire_debug_out_field = 
      PB_FIELD2(50005, BOOL    , OPTEXT, STATIC  , FIRST, wire_debug_out_struct, wire_debug_out, wire_debug_out, 0);

const pb_extension_type_t wire_debug_out = {
    NULL,
    NULL,
    &wire_debug_out_field
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
STATIC_ASSERT((pb_membersize(TxInputType, multisig) < 65536 && pb_membersize(TransactionType, inputs[0]) < 65536 && pb_membersize(TransactionType, bin_outputs[0]) < 65536 && pb_membersize(TransactionType, outputs[0]) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_HDNodeType_CoinType_MultisigRedeemScriptType_TxInputType_TxOutputType_TxOutputBinType_TransactionType_TxRequestDetailsType_TxRequestSerializedType)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for TxRequestSerializedType.serialized_tx is too large. Define PB_FIELD_16BIT to fix this.
#endif


