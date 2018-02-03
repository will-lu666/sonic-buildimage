BFN_WNC_PLATFORM = bfnplatformwnc_1.0.0_amd64.deb
$(BFN_WNC_PLATFORM)_URL = "https://github.com/YaoTien/download/raw/master/sonic/sde/7_0_0_18/bfnplatformwnc_1.0.0_amd64.deb"

SONIC_ONLINE_DEBS += $(BFN_WNC_PLATFORM) # $(BFN_SAI_DEV)
$(BFN_SAI_DEV)_DEPENDS += $(BFN_WNC_PLATFORM)
