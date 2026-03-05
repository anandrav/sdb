#ifndef DEFINE_REGISTER
#error "This file is intended for textual inclusion with the\
    DEFINE_REGISTER macro defined"
#endif

#define GPR_OFFSET(reg) (offsetof(user, regs) + offsetof(user_regs_struct, reg))

#define DEFINE_GPR_64(name,dwarf_id) \
    DEFINE_REGISTER(name, dwarf_id, 8, GPR_OFFSET(name),\
    register_type::gpr, register_format::uint)

#define DEFINE_GPR_32(name,super) \
    DEFINE_REGISTER(name, -1, 4, GPR_OFFSET(super),\
    register_type::sub_gpr, register_format::uint)

#define DEFINE_GPR_16(name,super) \
    DEFINE_REGISTER(name, -1, 2, GPR_OFFSET(super),\
    register_type::sub_gpr, register_format::uint)

#define DEFINE_GPR_8H(name,super) \
    DEFINE_REGISTER(name, -1, 1, GPR_OFFSET(super) + 1,\
    register_type::sub_gpr, register_format::uint)

#define DEFINE_GPR_8L(name,super) \
    DEFINE_REGISTER(name, -1, 1, GPR_OFFSET(super),\
    register_type::sub_gpr, register_format::uint)

DEFINE_GPR_64(rax, 0),
DEFINE_GPR_64(rdx, 1),
DEFINE_GPR_64(rcx, 2),
DEFINE_GPR_64(rbx, 3),
DEFINE_GPR_64(rsi, 4),
DEFINE_GPR_64(rdi, 5),
DEFINE_GPR_64(rbp, 6),
DEFINE_GPR_64(rsp, 7),
DEFINE_GPR_64(r8, 8),
DEFINE_GPR_64(r9, 9),
DEFINE_GPR_64(r10, 10),
DEFINE_GPR_64(r11, 11),
DEFINE_GPR_64(r12, 12),
DEFINE_GPR_64(r13, 13),
DEFINE_GPR_64(r14, 14),
DEFINE_GPR_64(r15, 15),
DEFINE_GPR_64(rip, 16),
DEFINE_GPR_64(eflags, 49),
DEFINE_GPR_64(cs, 51),
DEFINE_GPR_64(fs, 54),
DEFINE_GPR_64(gs, 55),
DEFINE_GPR_64(ss, 52),
DEFINE_GPR_64(ds, 53),
DEFINE_GPR_64(es, 50),

DEFINE_GPR_64(orig_rax, -1),

DEFINE_GPR_32(esi, rsi), DEFINE_GPR_32(edi, rdi),
DEFINE_GPR_32(ebp, rbp), DEFINE_GPR_32(esp, rsp),
DEFINE_GPR_32(r8d, r8), DEFINE_GPR_32(r9d, r9),
