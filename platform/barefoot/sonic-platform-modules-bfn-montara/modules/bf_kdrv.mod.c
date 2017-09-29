#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2ab9dba5, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe77d4e63, __VMLINUX_SYMBOL_STR(generic_access_phys) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x6a0750ca, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x79ae72b6, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x51089bed, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x6d36dc13, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x3924302, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xfbf6264d, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x15318589, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xc75bded5, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x6adf1c95, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xaf9536f7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4586ad91, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0xaf71098e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x845bc056, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xd8e612f2, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0xc86e7856, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x5e100d7a, __VMLINUX_SYMBOL_STR(pci_intx_mask_supported) },
	{ 0xd481330a, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xa568c37e, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1f1824d8, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xf4f2721e, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xa5bed252, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xf32f71a0, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x9de9dc13, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xfa9f96c, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x98e34bd, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xbb704422, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5268a83d, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x83730f75, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xee166bd7, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb5ea1f19, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x7a0e174e, __VMLINUX_SYMBOL_STR(pci_cfg_access_unlock) },
	{ 0x1b357412, __VMLINUX_SYMBOL_STR(pci_cfg_access_lock) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x60ab2199, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8e663bd9, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd3d199d8, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xc715d9e0, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x20705009, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8733c9e1, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdcdc8b1c, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xf13d21b9, __VMLINUX_SYMBOL_STR(pci_check_and_mask_intx) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001D1Cd00000001sv*sd*bc*sc*i*");
