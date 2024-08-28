/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t umi_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "umi",
    .marketname = "Xiaomi Mi 10",
    .model = "Mi 10",
    .build_fingerprint = "Xiaomi/umi_global/umi:13/TKQ1.221114.001/V816.0.5.0.TJBCNXM:user/release-keys",
    .nfc = true,
};

void vendor_load_properties() {
    set_variant_props(umi_info);
    set_dalvik_heap();
}
