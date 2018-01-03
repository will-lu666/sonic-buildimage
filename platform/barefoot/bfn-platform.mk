BFN_PLATFORM = bfnplatform_1.0.0_amd64.deb
$(BFN_PLATFORM)_URL =	"https://www.dropbox.com/s/pname82eqzwbrcd/bfnplatform_1.0.0_amd64.deb?dl=0"

SONIC_ONLINE_DEBS += $(BFN_PLATFORM) # $(BFN_SAI_DEV)
$(BFN_SAI_DEV)_DEPENDS += $(BFN_PLATFORM)
