// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include <lwpb/lwpb.h>

#include "test_struct_map_pb2.h"

// 'StructTest' field descriptors
const struct lwpb_field_desc lwpb_fields_test_structtest[] = {
    {
        .number = 1,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_INT32,
        .opts.flags = 0,
        .msg_desc = 0,
#if LWPB_FIELD_NAMES
        .name = "field_int32",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.int32 = 0,
#endif
    },
    {
        .number = 2,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_INT64,
        .opts.flags = 0,
        .msg_desc = 0,
#if LWPB_FIELD_NAMES
        .name = "field_int64",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.int64 = 0,
#endif
    },
    {
        .number = 3,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_BOOL,
        .opts.flags = 0,
        .msg_desc = 0,
#if LWPB_FIELD_NAMES
        .name = "field_bool",
#endif
#if LWPB_FIELD_DEFAULTS
        1,
#endif
    },
    {
        .number = 4,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_ENUM,
        .opts.flags = 0,
        .msg_desc = 0,
#if LWPB_FIELD_NAMES
        .name = "field_enum",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.int32 = 1,
#endif
    },
    {
        .number = 5,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_STRING,
        .opts.flags = 0,
        .msg_desc = 0,
#if LWPB_FIELD_NAMES
        .name = "field_string",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.string = "",
#endif
    },
    {
        .number = 6,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_BYTES,
        .opts.flags = 0,
        .msg_desc = 0,
#if LWPB_FIELD_NAMES
        .name = "field_bytes",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.string = "",
#endif
    },
    {
        .number = 7,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_MESSAGE,
        .opts.flags = 0,
        .msg_desc = test_StructTest_Nested1,
#if LWPB_FIELD_NAMES
        .name = "nested1",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.null = 0,
#endif
    },
    {
        .number = 8,
        .opts.label = LWPB_REPEATED,
        .opts.typ = LWPB_MESSAGE,
        .opts.flags = 0,
        .msg_desc = test_StructTest_Nested2,
#if LWPB_FIELD_NAMES
        .name = "nested2",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.null = 0,
#endif
    },
};

// 'Nested1' field descriptors
const struct lwpb_field_desc lwpb_fields_test_structtest_nested1[] = {
    {
        .number = 1,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_INT32,
        .opts.flags = 0,
        .msg_desc = 0,
#if LWPB_FIELD_NAMES
        .name = "field_int32",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.int32 = 0,
#endif
    },
    {
        .number = 2,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_INT64,
        .opts.flags = 0,
        .msg_desc = 0,
#if LWPB_FIELD_NAMES
        .name = "field_int64",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.int64 = 0,
#endif
    },
};

// 'Nested2' field descriptors
const struct lwpb_field_desc lwpb_fields_test_structtest_nested2[] = {
    {
        .number = 1,
        .opts.label = LWPB_REQUIRED,
        .opts.typ = LWPB_STRING,
        .opts.flags = 0,
        .msg_desc = 0,
#if LWPB_FIELD_NAMES
        .name = "field_string",
#endif
#if LWPB_FIELD_DEFAULTS
        .def.string = "",
#endif
    },
};

// Message descriptors
const struct lwpb_msg_desc lwpb_messages_test[] = {
    {
        .num_fields = 8,
        .fields = lwpb_fields_test_structtest,
#if LWPB_MESSAGE_NAMES
        .name = "StructTest",
#endif
    },
    {
        .num_fields = 2,
        .fields = lwpb_fields_test_structtest_nested1,
#if LWPB_MESSAGE_NAMES
        .name = "Nested1",
#endif
    },
    {
        .num_fields = 1,
        .fields = lwpb_fields_test_structtest_nested2,
#if LWPB_MESSAGE_NAMES
        .name = "Nested2",
#endif
    },
};

// Service descriptors
const struct lwpb_service_desc lwpb_services_test[] = {
};
