// jailbreak.h from openpwnage

#ifndef jailbreak_h
#define jailbreak_h

bool unsandbox8(mach_port_t tfp0, uint32_t kernel_base, bool untether_on);
bool is_pmap_patch_success(task_t tfp0, uintptr_t kernel_base);
bool isA5orA5X(void);

#endif /* jailbreak_h */