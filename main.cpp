#include <wdk/wdk.hpp>

extern "C" win::ntstatus DriverEntry(win::DRIVER_OBJECT*, win::UNICODE_STRING*) {
    return win::ntstatus::success;
}
