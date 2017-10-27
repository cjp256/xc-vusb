//
// Copyright (c) Citrix Systems, Inc.
//
/// @file DevicePdo.h Device PDO definitions
//

//
/// Context for the Device PDO.
//
//
typedef struct _USB_DEVICE_PDO_CONTEXT
{
    WDFDEVICE                 WdfDevice;
    WDFDEVICE                 Parent;
    WDFQUEUE                  ParentQueue;
} USB_DEVICE_PDO_CONTEXT, *PUSB_DEVICE_PDO_CONTEXT;
//
// This macro will generate an inline function called DeviceGetContext
// which will be used to get a pointer to the device context memory
// in a type safe manner.
//
WDF_DECLARE_CONTEXT_TYPE_WITH_NAME(USB_DEVICE_PDO_CONTEXT, DeviceGetDevicePdoContext)


NTSTATUS
DevicePdoQueueInitialize(
    _In_ WDFDEVICE hDevice);
