//
// Copyright (c) 2003, 2013, Oracle and/or its affiliates. All rights reserved.
// DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
//
// This code is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License version 2 only, as
// published by the Free Software Foundation.
//
// This code is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// version 2 for more details (a copy is included in the LICENSE file that
// accompanied this code).
//
// You should have received a copy of the GNU General Public License version
// 2 along with this work; if not, write to the Free Software Foundation,
// Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
//
// Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
// or visit www.oracle.com if you need additional information or have any
// questions.
//
//

// Machine Generated File.  Do Not Edit!

#include "precompiled.hpp"
#include "adfiles/ad_x86_64.hpp"

#ifndef PRODUCT
void UniverseOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("$$univ");
}
void UniverseOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("$$univ");
}
#endif

#ifndef PRODUCT
void sRegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void sRegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void sRegFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void sRegDOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegDOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void sRegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
}
void sRegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
}
#endif

#ifndef PRODUCT
void immIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI1Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI1Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_M1Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI_M1Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI2Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI2Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI8Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI8Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI16Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI16Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immU31Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immU31Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_32Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI_32Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_64Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI_64Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
void immPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immP0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
void immP0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immNOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
void immNOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immNKlassOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
void immNKlassOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immN0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
void immN0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immP31Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
void immP31Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  if (_c0) _c0->dump_on(st);
}
#endif

#ifndef PRODUCT
void immLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immL8Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL8Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immUL32Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immUL32Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immL32Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL32Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immL0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immL1Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL1Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immL_M1Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL_M1Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immL10Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL10Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immL_127Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL_127Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immL_32bitsOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL_32bitsOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immF0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%f", _c0);
}
void immF0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%f", _c0);
}
#endif

#ifndef PRODUCT
void immFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%f", _c0);
}
void immFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%f", _c0);
}
#endif

#ifndef PRODUCT
void immD0Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%f", _c0);
}
void immD0Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%f", _c0);
}
#endif

#ifndef PRODUCT
void immDOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%f", _c0);
}
void immDOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%f", _c0);
}
#endif

#ifndef PRODUCT
void immI_16Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI_16Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_24Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI_24Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_255Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI_255Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immI_65535Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#%d", _c0);
}
void immI_65535Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#%d", _c0);
}
#endif

#ifndef PRODUCT
void immL_255Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL_255Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void immL_65535Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
void immL_65535Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print("#" INT64_FORMAT, (int64_t)_c0);
}
#endif

#ifndef PRODUCT
void rRegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rRegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rax_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("RAX");
}
void rax_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("RAX");
}
#endif

#ifndef PRODUCT
void rbx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("RBX");
}
void rbx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("RBX");
}
#endif

#ifndef PRODUCT
void rcx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("RCX");
}
void rcx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("RCX");
}
#endif

#ifndef PRODUCT
void rdx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("RDX");
}
void rdx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("RDX");
}
#endif

#ifndef PRODUCT
void rdi_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("RDI");
}
void rdi_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("RDI");
}
#endif

#ifndef PRODUCT
void no_rcx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void no_rcx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void no_rax_rdx_RegIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void no_rax_rdx_RegIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void any_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void any_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rRegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rRegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rRegNOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rRegNOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void no_rax_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void no_rax_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void no_rbp_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void no_rbp_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void no_rax_rbx_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void no_rax_rbx_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rax_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rax_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rax_RegNOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rax_RegNOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rbx_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rbx_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rsi_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rsi_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rdi_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rdi_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void r15_RegPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void r15_RegPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rRegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rRegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void no_rax_rdx_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void no_rax_rdx_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void no_rax_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void no_rax_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void no_rcx_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void no_rcx_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rax_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("RAX");
}
void rax_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("RAX");
}
#endif

#ifndef PRODUCT
void rcx_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rcx_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rdx_RegLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void rdx_RegLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void rFlagsRegOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("RFLAGS");
}
void rFlagsRegOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("RFLAGS");
}
#endif

#ifndef PRODUCT
void rFlagsRegUOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("RFLAGS_U");
}
void rFlagsRegUOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("RFLAGS_U");
}
#endif

#ifndef PRODUCT
void rFlagsRegUCFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("RFLAGS_U_CF");
}
void rFlagsRegUCFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("RFLAGS_U_CF");
}
#endif

#ifndef PRODUCT
void regFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void regFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void regDOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void regDOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void indirectOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void indirectOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indOffset8Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" (8-bit)]");
}
void indOffset8Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" (8-bit)]");
}
#endif

#ifndef PRODUCT
void indOffset32Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" (32-bit)]");
}
void indOffset32Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" (32-bit)]");
}
#endif

#ifndef PRODUCT
void indIndexOffsetOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void indIndexOffsetOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indIndexOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void indIndexOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indIndexScaleOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
void indIndexScaleOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indIndexScaleOffsetOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c1);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
void indIndexScaleOffsetOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c1);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indPosIndexScaleOffsetOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c1);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
void indPosIndexScaleOffsetOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c1);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indCompressedOopOffsetOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[R12 + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << 3 + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw("] (compressed oop addressing)");
}
void indCompressedOopOffsetOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[R12 + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << 3 + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw("] (compressed oop addressing)");
}
#endif

#ifndef PRODUCT
void indirectNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void indirectNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indOffset8NarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" (8-bit)]");
}
void indOffset8NarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" (8-bit)]");
}
#endif

#ifndef PRODUCT
void indOffset32NarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" (32-bit)]");
}
void indOffset32NarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" (32-bit)]");
}
#endif

#ifndef PRODUCT
void indIndexOffsetNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void indIndexOffsetNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c0);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indIndexNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void indIndexNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indIndexScaleNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
void indIndexScaleNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indIndexScaleOffsetNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c1);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
void indIndexScaleOffsetNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c1);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void indPosIndexScaleOffsetNarrowOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c1);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
void indPosIndexScaleOffsetNarrowOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" + ");
  st->print("#" INT64_FORMAT, (int64_t)_c1);
  st->print_raw(" + ");
  { char reg_str[128];
    ra->dump_register(node->in(idx+1),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw(" << ");
  st->print("#%d", _c0);
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void stackSlotPOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void stackSlotPOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void stackSlotIOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void stackSlotIOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void stackSlotFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void stackSlotFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void stackSlotDOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void stackSlotDOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void stackSlotLOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
void stackSlotLOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("[");
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
  st->print_raw("]");
}
#endif

#ifndef PRODUCT
void cmpOpOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("");
       if( _c0 == BoolTest::eq ) st->print_raw("e");
  else if( _c0 == BoolTest::ne ) st->print_raw("ne");
  else if( _c0 == BoolTest::le ) st->print_raw("le");
  else if( _c0 == BoolTest::ge ) st->print_raw("ge");
  else if( _c0 == BoolTest::lt ) st->print_raw("l");
  else if( _c0 == BoolTest::gt ) st->print_raw("g");
  else if( _c0 == BoolTest::overflow ) st->print_raw("o");
  else if( _c0 == BoolTest::no_overflow ) st->print_raw("no");
}
void cmpOpOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("");
       if( _c0 == BoolTest::eq ) st->print_raw("e");
  else if( _c0 == BoolTest::ne ) st->print_raw("ne");
  else if( _c0 == BoolTest::le ) st->print_raw("le");
  else if( _c0 == BoolTest::ge ) st->print_raw("ge");
  else if( _c0 == BoolTest::lt ) st->print_raw("l");
  else if( _c0 == BoolTest::gt ) st->print_raw("g");
  else if( _c0 == BoolTest::overflow ) st->print_raw("o");
  else if( _c0 == BoolTest::no_overflow ) st->print_raw("no");
}
#endif

#ifndef PRODUCT
void cmpOpUOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("");
       if( _c0 == BoolTest::eq ) st->print_raw("e");
  else if( _c0 == BoolTest::ne ) st->print_raw("ne");
  else if( _c0 == BoolTest::le ) st->print_raw("be");
  else if( _c0 == BoolTest::ge ) st->print_raw("nb");
  else if( _c0 == BoolTest::lt ) st->print_raw("b");
  else if( _c0 == BoolTest::gt ) st->print_raw("nbe");
  else if( _c0 == BoolTest::overflow ) st->print_raw("o");
  else if( _c0 == BoolTest::no_overflow ) st->print_raw("no");
}
void cmpOpUOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("");
       if( _c0 == BoolTest::eq ) st->print_raw("e");
  else if( _c0 == BoolTest::ne ) st->print_raw("ne");
  else if( _c0 == BoolTest::le ) st->print_raw("be");
  else if( _c0 == BoolTest::ge ) st->print_raw("nb");
  else if( _c0 == BoolTest::lt ) st->print_raw("b");
  else if( _c0 == BoolTest::gt ) st->print_raw("nbe");
  else if( _c0 == BoolTest::overflow ) st->print_raw("o");
  else if( _c0 == BoolTest::no_overflow ) st->print_raw("no");
}
#endif

#ifndef PRODUCT
void cmpOpUCFOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("");
       if( _c0 == BoolTest::eq ) st->print_raw("e");
  else if( _c0 == BoolTest::ne ) st->print_raw("ne");
  else if( _c0 == BoolTest::le ) st->print_raw("be");
  else if( _c0 == BoolTest::ge ) st->print_raw("nb");
  else if( _c0 == BoolTest::lt ) st->print_raw("b");
  else if( _c0 == BoolTest::gt ) st->print_raw("nbe");
  else if( _c0 == BoolTest::overflow ) st->print_raw("o");
  else if( _c0 == BoolTest::no_overflow ) st->print_raw("no");
}
void cmpOpUCFOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("");
       if( _c0 == BoolTest::eq ) st->print_raw("e");
  else if( _c0 == BoolTest::ne ) st->print_raw("ne");
  else if( _c0 == BoolTest::le ) st->print_raw("be");
  else if( _c0 == BoolTest::ge ) st->print_raw("nb");
  else if( _c0 == BoolTest::lt ) st->print_raw("b");
  else if( _c0 == BoolTest::gt ) st->print_raw("nbe");
  else if( _c0 == BoolTest::overflow ) st->print_raw("o");
  else if( _c0 == BoolTest::no_overflow ) st->print_raw("no");
}
#endif

#ifndef PRODUCT
void cmpOpUCF2Oper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  st->print_raw("");
       if( _c0 == BoolTest::eq ) st->print_raw("e");
  else if( _c0 == BoolTest::ne ) st->print_raw("ne");
  else if( _c0 == BoolTest::le ) st->print_raw("be");
  else if( _c0 == BoolTest::ge ) st->print_raw("nb");
  else if( _c0 == BoolTest::lt ) st->print_raw("b");
  else if( _c0 == BoolTest::gt ) st->print_raw("nbe");
  else if( _c0 == BoolTest::overflow ) st->print_raw("o");
  else if( _c0 == BoolTest::no_overflow ) st->print_raw("no");
}
void cmpOpUCF2Oper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  st->print_raw("");
       if( _c0 == BoolTest::eq ) st->print_raw("e");
  else if( _c0 == BoolTest::ne ) st->print_raw("ne");
  else if( _c0 == BoolTest::le ) st->print_raw("be");
  else if( _c0 == BoolTest::ge ) st->print_raw("nb");
  else if( _c0 == BoolTest::lt ) st->print_raw("b");
  else if( _c0 == BoolTest::gt ) st->print_raw("nbe");
  else if( _c0 == BoolTest::overflow ) st->print_raw("o");
  else if( _c0 == BoolTest::no_overflow ) st->print_raw("no");
}
#endif

#ifndef PRODUCT
void vecSOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void vecSOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void vecDOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void vecDOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void vecXOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void vecXOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif

#ifndef PRODUCT
void vecYOper::int_format(PhaseRegAlloc *ra, const MachNode *node, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node,reg_str);
    st->print("%s",reg_str);
  }
}
void vecYOper::ext_format(PhaseRegAlloc *ra, const MachNode *node, int idx, outputStream *st) const {
  { char reg_str[128];
    ra->dump_register(node->in(idx),reg_str);
    st->print("%s",reg_str);
  }
}
#endif
#ifndef PRODUCT
void loadBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movsbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# byte");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadB2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movsbq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# byte -> long");
}
#endif
#ifndef PRODUCT
void loadUBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ubyte");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadUB2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movzbq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ubyte -> long");
}
#endif
#ifndef PRODUCT
void loadUB2L_immI8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movzbq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ubyte & 8-bit mask -> long\n\t");
  st->print_raw("andl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mask
}
#endif
#ifndef PRODUCT
void loadSNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movswl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# short");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadS2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// twentyfour
  st->print_raw("movsbl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# short -> byte");
}
#endif
#ifndef PRODUCT
void loadS2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movswq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# short -> long");
}
#endif
#ifndef PRODUCT
void loadUSNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movzwl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ushort/char");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadUS2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// twentyfour
  st->print_raw("movsbl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ushort -> byte");
}
#endif
#ifndef PRODUCT
void loadUS2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movzwq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ushort/char -> long");
}
#endif
#ifndef PRODUCT
void loadUS2L_immI_255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movzbq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ushort/char & 0xFF -> long");
}
#endif
#ifndef PRODUCT
void loadUS2L_immI16Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movzwq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ushort/char & 16-bit mask -> long\n\t");
  st->print_raw("andl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mask
}
#endif
#ifndef PRODUCT
void loadINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadI2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// twentyfour
  st->print_raw("movsbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# int -> byte");
}
#endif
#ifndef PRODUCT
void loadI2UBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# int -> ubyte");
}
#endif
#ifndef PRODUCT
void loadI2SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// sixteen
  st->print_raw("movswl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# int -> short");
}
#endif
#ifndef PRODUCT
void loadI2USNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movzwl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# int -> ushort/char");
}
#endif
#ifndef PRODUCT
void loadI2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movslq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# int -> long");
}
#endif
#ifndef PRODUCT
void loadI2L_immI_255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movzbq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# int & 0xFF -> long");
}
#endif
#ifndef PRODUCT
void loadI2L_immI_65535Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movzwq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# int & 0xFFFF -> long");
}
#endif
#ifndef PRODUCT
void loadI2L_immU31Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# int & 31-bit mask -> long\n\t");
  st->print_raw("andl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mask
}
#endif
#ifndef PRODUCT
void loadUI2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# uint -> long");
}
#endif
#ifndef PRODUCT
void loadLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadRangeNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# range");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# compressed ptr");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadKlassNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# class");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadNKlassNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# compressed klass ptr");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movss   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# float");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadD_partialNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movlpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# double");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movsd   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# double");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void leaP8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr 8");
}
#endif
#ifndef PRODUCT
void leaP32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr 32");
}
#endif
#ifndef PRODUCT
void leaPIdxOffNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr idxoff");
}
#endif
#ifndef PRODUCT
void leaPIdxScaleNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr idxscale");
}
#endif
#ifndef PRODUCT
void leaPIdxScaleOffNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr idxscaleoff");
}
#endif
#ifndef PRODUCT
void leaPPosIdxScaleOffNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr posidxscaleoff");
}
#endif
#ifndef PRODUCT
void leaPCompressedOopOffsetNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr compressedoopoff32");
}
#endif
#ifndef PRODUCT
void leaP8NarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr off8narrow");
}
#endif
#ifndef PRODUCT
void leaP32NarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr off32narrow");
}
#endif
#ifndef PRODUCT
void leaPIdxOffNarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr idxoffnarrow");
}
#endif
#ifndef PRODUCT
void leaPIdxScaleNarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr idxscalenarrow");
}
#endif
#ifndef PRODUCT
void leaPIdxScaleOffNarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr idxscaleoffnarrow");
}
#endif
#ifndef PRODUCT
void leaPPosIdxScaleOffNarrowNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr posidxscaleoffnarrow");
}
#endif
#ifndef PRODUCT
void loadConINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void loadConI0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("xorl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void loadConLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void loadConL0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("xorl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void loadConUL32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long (unsigned 32-bit)");
}
#endif
#ifndef PRODUCT
void loadConL32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long (32-bit)");
}
#endif
#ifndef PRODUCT
void loadConPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw("\t# ptr");
}
#endif
#ifndef PRODUCT
void loadConP0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("xorl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t# ptr");
}
#endif
#ifndef PRODUCT
void loadConP31Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# ptr (positive 32-bit)");
}
#endif
#ifndef PRODUCT
void loadConFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movss   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
}
#endif
#ifndef PRODUCT
void loadConN0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("xorq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# compressed NULL ptr");
}
#endif
#ifndef PRODUCT
void loadConNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# compressed ptr");
}
#endif
#ifndef PRODUCT
void loadConNKlassNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# compressed klass ptr");
}
#endif
#ifndef PRODUCT
void loadConF0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("xorps   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t# float 0.0");
}
#endif
#ifndef PRODUCT
void loadConDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movsd   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
}
#endif
#ifndef PRODUCT
void loadConD0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("xorpd   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t# double 0.0");
}
#endif
#ifndef PRODUCT
void loadSSINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int stk");
}
#endif
#ifndef PRODUCT
void loadSSLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long stk");
}
#endif
#ifndef PRODUCT
void loadSSPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# ptr stk");
}
#endif
#ifndef PRODUCT
void loadSSFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movss   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# float stk");
}
#endif
#ifndef PRODUCT
void loadSSDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movsd   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# double stk");
}
#endif
#ifndef PRODUCT
void prefetchrNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// 
  st->print_raw("PREFETCHR ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# Prefetch into level 1 cache");
}
#endif
#ifndef PRODUCT
void prefetchrNTANode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// 
  st->print_raw("PREFETCHNTA ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# Prefetch into non-temporal cache for read");
}
#endif
#ifndef PRODUCT
void prefetchrT0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// 
  st->print_raw("PREFETCHT0 ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# prefetch into L1 and L2 caches for read");
}
#endif
#ifndef PRODUCT
void prefetchrT2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// 
  st->print_raw("PREFETCHT2 ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# prefetch into L2 caches for read");
}
#endif
#ifndef PRODUCT
void prefetchwNTANode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// 
  st->print_raw("PREFETCHNTA ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# Prefetch to non-temporal cache for write");
}
#endif
#ifndef PRODUCT
void prefetchAllocNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// 
  st->print_raw("PREFETCHW ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# Prefetch allocation into level 1 cache and mark modified");
}
#endif
#ifndef PRODUCT
void prefetchAllocNTANode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// 
  st->print_raw("PREFETCHNTA ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# Prefetch allocation to non-temporal cache for write");
}
#endif
#ifndef PRODUCT
void prefetchAllocT0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// 
  st->print_raw("PREFETCHT0 ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# Prefetch allocation to level 1 and 2 caches for write");
}
#endif
#ifndef PRODUCT
void prefetchAllocT2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// 
  st->print_raw("PREFETCHT2 ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# Prefetch allocation to level 2 cache for write");
}
#endif
#ifndef PRODUCT
void storeBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movb    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# byte");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeCNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movw    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# char/short");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storePNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# ptr");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmP0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("movq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", R12\t# ptr (R12_heapbase==0)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# ptr");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# compressed ptr");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeNKlassNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# compressed klass ptr");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmN0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", R12\t# compressed ptr (R12_heapbase==0)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# compressed ptr");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmNKlassNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# compressed klass ptr");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmI0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", R12\t# int (R12_heapbase==0)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmL0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("movq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", R12\t# long (R12_heapbase==0)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmC0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("movw    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", R12\t# short/char (R12_heapbase==0)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmI16Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movw    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# short/char");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmB0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("movb    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", R12\t# short/char (R12_heapbase==0)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmBNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movb    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# byte");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmCM0_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("movb    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", R12\t# CMS card-mark byte 0 (R12_heapbase==0)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeImmCM0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movb    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# CMS card-mark byte 0");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# float");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeF0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", R12\t# float 0. (R12_heapbase==0)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# float");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# double");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeD0_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# double 0.");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeD0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("movq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", R12\t# double 0. (R12_heapbase==0)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeSSINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int stk");
}
#endif
#ifndef PRODUCT
void storeSSLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long stk");
}
#endif
#ifndef PRODUCT
void storeSSPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# ptr stk");
}
#endif
#ifndef PRODUCT
void storeSSFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movss   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# float stk");
}
#endif
#ifndef PRODUCT
void storeSSDNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movsd   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# double stk");
}
#endif
#ifndef PRODUCT
void bytes_reverse_intNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("bswapl  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void bytes_reverse_longNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("bswapq  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void bytes_reverse_unsigned_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("bswapl  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\n\t");
  st->print_raw("shrl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",16\n\t");
}
#endif
#ifndef PRODUCT
void bytes_reverse_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("bswapl  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\n\t");
  st->print_raw("sar     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",16\n\t");
}
#endif
#ifndef PRODUCT
void countLeadingZerosINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("lzcntl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# count leading zeros (int)");
}
#endif
#ifndef PRODUCT
void countLeadingZerosI_bsrNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("bsrl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# count leading zeros (int)\n\t");
  st->print_raw("jnz     skip\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", -1\n");
  st->print_raw("skip:\n\t");
  st->print_raw("negl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("addl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", 31");
}
#endif
#ifndef PRODUCT
void countLeadingZerosLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("lzcntq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# count leading zeros (long)");
}
#endif
#ifndef PRODUCT
void countLeadingZerosL_bsrNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("bsrq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# count leading zeros (long)\n\t");
  st->print_raw("jnz     skip\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", -1\n");
  st->print_raw("skip:\n\t");
  st->print_raw("negl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("addl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", 63");
}
#endif
#ifndef PRODUCT
void countTrailingZerosINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("tzcntl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# count trailing zeros (int)");
}
#endif
#ifndef PRODUCT
void countTrailingZerosI_bsfNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("bsfl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# count trailing zeros (int)\n\t");
  st->print_raw("jnz     done\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", 32\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void countTrailingZerosLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("tzcntq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# count trailing zeros (long)");
}
#endif
#ifndef PRODUCT
void countTrailingZerosL_bsfNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("bsfq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# count trailing zeros (long)\n\t");
  st->print_raw("jnz     done\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", 64\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void popCountINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("popcnt  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void popCountI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("popcnt  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
}
#endif
#ifndef PRODUCT
void popCountLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("popcnt  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void popCountL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("popcnt  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
}
#endif
#ifndef PRODUCT
void membar_acquireNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("MEMBAR-acquire ! (empty encoding)");
}
#endif
#ifndef PRODUCT
void membar_acquire_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("MEMBAR-acquire ! (empty encoding)");
}
#endif
#ifndef PRODUCT
void membar_acquire_lockNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("MEMBAR-acquire (prior CMPXCHG in FastLock so empty encoding)");
}
#endif
#ifndef PRODUCT
void membar_releaseNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("MEMBAR-release ! (empty encoding)");
}
#endif
#ifndef PRODUCT
void membar_release_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("MEMBAR-release ! (empty encoding)");
}
#endif
#ifndef PRODUCT
void membar_release_lockNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("MEMBAR-release (a FastUnlock follows so empty encoding)");
}
#endif
#ifndef PRODUCT
void membar_volatileNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  if (os::is_MP()) {
        st->print_raw("lock addl [rsp + #0], 0\t! membar_volatile");
  } else {
        st->print_raw("MEMBAR-volatile ! (empty encoding)");
  }
  }
#endif
#ifndef PRODUCT
void unnecessary_membar_volatileNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("MEMBAR-volatile (unnecessary so empty encoding)");
}
#endif
#ifndef PRODUCT
void membar_storestoreNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("MEMBAR-storestore (empty encoding)");
}
#endif
#ifndef PRODUCT
void castX2PNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long->ptr");
}
#endif
#ifndef PRODUCT
void castP2XNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# ptr -> long");
}
#endif
#ifndef PRODUCT
void convP2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# ptr -> int");
}
#endif
#ifndef PRODUCT
void convN2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# compressed ptr -> int");
}
#endif
#ifndef PRODUCT
void encodeHeapOopNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("encode_heap_oop ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void encodeHeapOop_not_nullNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("encode_heap_oop_not_null ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void decodeHeapOopNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("decode_heap_oop ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void decodeHeapOop_not_nullNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("decode_heap_oop_not_null ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void encodeKlass_not_nullNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("encode_klass_not_null ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void decodeKlass_not_nullNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("decode_klass_not_null ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void jumpXtnd_offsetNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dest
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("leaq    ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dest
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\n\t");
  st->print_raw("jmp     [");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dest
  st->print_raw(" + ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // switch_val
  st->print_raw(" << ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("]\n\t");
}
#endif
#ifndef PRODUCT
void jumpXtnd_addrNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// offset
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dest
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// 
  st->print_raw("leaq    ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // dest
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\n\t");
  st->print_raw("jmp     [");
  opnd_array(4)->ext_format(ra, this,idx4, st); // dest
  st->print_raw(" + ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // switch_val
  st->print_raw(" << ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw(" + ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // offset
  st->print_raw("]\n\t");
}
#endif
#ifndef PRODUCT
void jumpXtndNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dest
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// 
  st->print_raw("leaq    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dest
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\n\t");
  st->print_raw("jmp     [");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dest
  st->print_raw(" + ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // switch_val
  st->print_raw("]\n\t");
}
#endif
#ifndef PRODUCT
void cmovI_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovl");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# signed, int");
}
#endif
#ifndef PRODUCT
void cmovI_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovl");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# unsigned, int");
}
#endif
#ifndef PRODUCT
void cmovI_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void cmovI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovl");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# signed, int");
}
#endif
#ifndef PRODUCT
void cmovI_memUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovl");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# unsigned, int");
}
#endif
#ifndef PRODUCT
void cmovI_memUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void cmovN_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovl");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# signed, compressed ptr");
}
#endif
#ifndef PRODUCT
void cmovN_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovl");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# unsigned, compressed ptr");
}
#endif
#ifndef PRODUCT
void cmovN_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void cmovP_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovq");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# signed, ptr");
}
#endif
#ifndef PRODUCT
void cmovP_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovq");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# unsigned, ptr");
}
#endif
#ifndef PRODUCT
void cmovP_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void cmovL_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovq");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# signed, long");
}
#endif
#ifndef PRODUCT
void cmovL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovq");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# signed, long");
}
#endif
#ifndef PRODUCT
void cmovL_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovq");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# unsigned, long");
}
#endif
#ifndef PRODUCT
void cmovL_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void cmovL_memUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("cmovq");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(" ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\t# unsigned, long");
}
#endif
#ifndef PRODUCT
void cmovL_memUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void cmovF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("jn");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw("    skip\t# signed cmove float\n\t");
  st->print_raw("movss     ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\n");
  st->print_raw("skip:");
}
#endif
#ifndef PRODUCT
void cmovF_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("jn");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw("    skip\t# unsigned cmove float\n\t");
  st->print_raw("movss     ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\n");
  st->print_raw("skip:");
}
#endif
#ifndef PRODUCT
void cmovF_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void cmovD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("jn");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw("    skip\t# signed cmove double\n\t");
  st->print_raw("movsd     ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\n");
  st->print_raw("skip:");
}
#endif
#ifndef PRODUCT
void cmovD_regUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// dst
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// src
  st->print_raw("jn");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw("    skip\t# unsigned cmove double\n\t");
  st->print_raw("movsd     ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // dst
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // src
  st->print_raw("\n");
  st->print_raw("skip:");
}
#endif
#ifndef PRODUCT
void cmovD_regUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void addI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void addI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void addI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void addI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("addl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void addI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void addI_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void addI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void incI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("incl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void incI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("incl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void decI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("decl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void decI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("decl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void leaI_rReg_immINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src0
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  st->print_raw("addr32 leal ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src0
  st->print_raw(" + ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw("]\t# int");
}
#endif
#ifndef PRODUCT
void addL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void addL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void addL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void addL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("addq    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void addL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void addL_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void addL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void incL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("incq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void incL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("incq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void decL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("decq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void decL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("decq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void leaL_rReg_immLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src0
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src0
  st->print_raw(" + ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw("]\t# long");
}
#endif
#ifndef PRODUCT
void addP_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# ptr");
}
#endif
#ifndef PRODUCT
void addP_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# ptr");
}
#endif
#ifndef PRODUCT
void leaP_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src0
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  st->print_raw("leaq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src0
  st->print_raw(" + ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw("]\t# ptr");
}
#endif
#ifndef PRODUCT
void checkCastPPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("# checkcastPP of ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void castPPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("# castPP of ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void castIINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("# castII of ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void loadPLockedNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr locked");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storePConditionalNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// heap_top_ptr
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// oldval
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// newval
  st->print_raw("cmpxchgq ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // heap_top_ptr
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw("\t# (ptr) ");
  st->print_raw("If rax == ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // heap_top_ptr
  st->print_raw(" then store ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw(" into ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // heap_top_ptr
}
#endif
#ifndef PRODUCT
void storeIConditionalNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// oldval
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// newval
  st->print_raw("cmpxchgl ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw("\t# If rax == ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(" then store ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw(" into ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
}
#endif
#ifndef PRODUCT
void storeLConditionalNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// oldval
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// newval
  st->print_raw("cmpxchgq ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw("\t# If rax == ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(" then store ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw(" into ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
}
#endif
#ifndef PRODUCT
void compareAndSwapPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem_ptr
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// oldval
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// newval
  st->print_raw("cmpxchgq ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw("\t# ");
  st->print_raw("If rax == ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw(" then store ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw(" into ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw("\n\t");
  st->print_raw("sete    ");
  opnd_array(0)->int_format(ra, this, st); // res
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // res
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // res
}
#endif
#ifndef PRODUCT
void compareAndSwapLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem_ptr
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// oldval
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// newval
  st->print_raw("cmpxchgq ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw("\t# ");
  st->print_raw("If rax == ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw(" then store ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw(" into ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw("\n\t");
  st->print_raw("sete    ");
  opnd_array(0)->int_format(ra, this, st); // res
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // res
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // res
}
#endif
#ifndef PRODUCT
void compareAndSwapINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem_ptr
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// oldval
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// newval
  st->print_raw("cmpxchgl ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw("\t# ");
  st->print_raw("If rax == ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw(" then store ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw(" into ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw("\n\t");
  st->print_raw("sete    ");
  opnd_array(0)->int_format(ra, this, st); // res
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // res
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // res
}
#endif
#ifndef PRODUCT
void compareAndSwapNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem_ptr
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// oldval
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// newval
  st->print_raw("cmpxchgl ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw("\t# ");
  st->print_raw("If rax == ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw(" then store ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // newval
  st->print_raw(" into ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem_ptr
  st->print_raw("\n\t");
  st->print_raw("sete    ");
  opnd_array(0)->int_format(ra, this, st); // res
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // res
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // res
}
#endif
#ifndef PRODUCT
void xaddI_no_resNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// add
  st->print_raw("ADDL  [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("],");
  opnd_array(2)->ext_format(ra, this,idx2, st); // add
}
#endif
#ifndef PRODUCT
void xaddINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// newval
  st->print_raw("XADDL  [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("],");
  opnd_array(2)->ext_format(ra, this,idx2, st); // newval
}
#endif
#ifndef PRODUCT
void xaddL_no_resNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// add
  st->print_raw("ADDQ  [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("],");
  opnd_array(2)->ext_format(ra, this,idx2, st); // add
}
#endif
#ifndef PRODUCT
void xaddLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// newval
  st->print_raw("XADDQ  [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("],");
  opnd_array(2)->ext_format(ra, this,idx2, st); // newval
}
#endif
#ifndef PRODUCT
void xchgINode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// newval
  st->print_raw("XCHGL  ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // newval
  st->print_raw(",[");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("]");
}
#endif
#ifndef PRODUCT
void xchgLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// newval
  st->print_raw("XCHGL  ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // newval
  st->print_raw(",[");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("]");
}
#endif
#ifndef PRODUCT
void xchgPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// newval
  st->print_raw("XCHGQ  ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // newval
  st->print_raw(",[");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("]");
}
#endif
#ifndef PRODUCT
void xchgNNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// newval
  st->print_raw("XCHGL  ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // newval
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("]");
}
#endif
#ifndef PRODUCT
void subI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void subI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void subI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void subI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void subI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void subL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void subL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void subL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void subL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void subL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void subP_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// src
  st->print_raw("subq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // src
  st->print_raw("\t# ptr - int");
}
#endif
#ifndef PRODUCT
void negI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("negl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void negI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("negl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void negL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("negq    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void negL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("negq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void mulI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("imull   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void mulI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm
  st->print_raw("imull   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // imm
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void mulI_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("imull   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void mulI_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("imull   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void mulI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm
  st->print_raw("imull   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // imm
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void mulL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("imulq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void mulL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm
  st->print_raw("imulq   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // imm
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void mulL_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("imulq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void mulL_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("imulq   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void mulL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm
  st->print_raw("imulq   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // imm
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void mulHiL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// rax
  st->print_raw("imulq   RDX:RAX, RAX, ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# mulhi");
}
#endif
#ifndef PRODUCT
void divI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// rax
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// div
  st->print_raw("cmpl    rax, 0x80000000\t# idiv\n\t");
  st->print_raw("jne,s   normal\n\t");
  st->print_raw("xorl    rdx, rdx\n\t");
  st->print_raw("cmpl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw(", -1\n\t");
  st->print_raw("je,s    done\n");
  st->print_raw("normal: cdql\n\t");
  st->print_raw("idivl   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void divL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// rax
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// div
  st->print_raw("movq    rdx, 0x8000000000000000\t# ldiv\n\t");
  st->print_raw("cmpq    rax, rdx\n\t");
  st->print_raw("jne,s   normal\n\t");
  st->print_raw("xorl    rdx, rdx\n\t");
  st->print_raw("cmpq    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw(", -1\n\t");
  st->print_raw("je,s    done\n");
  st->print_raw("normal: cdqq\n\t");
  st->print_raw("idivq   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void divModI_rReg_divmodNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// div
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// rdx
  st->print_raw("cmpl    rax, 0x80000000\t# idiv\n\t");
  st->print_raw("jne,s   normal\n\t");
  st->print_raw("xorl    rdx, rdx\n\t");
  st->print_raw("cmpl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw(", -1\n\t");
  st->print_raw("je,s    done\n");
  st->print_raw("normal: cdql\n\t");
  st->print_raw("idivl   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void divModL_rReg_divmodNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// div
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// rdx
  st->print_raw("movq    rdx, 0x8000000000000000\t# ldiv\n\t");
  st->print_raw("cmpq    rax, rdx\n\t");
  st->print_raw("jne,s   normal\n\t");
  st->print_raw("xorl    rdx, rdx\n\t");
  st->print_raw("cmpq    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw(", -1\n\t");
  st->print_raw("je,s    done\n");
  st->print_raw("normal: cdqq\n\t");
  st->print_raw("idivq   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void loadConL_0x6666666666666667Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// 
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", #0x666666666666667\t# Used in div-by-10");
}
#endif
#ifndef PRODUCT
void mul_hiNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// rax
  st->print_raw("imulq   rdx:rax, rax, ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# Used in div-by-10");
}
#endif
#ifndef PRODUCT
void sarL_rReg_63Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  st->print_raw("sarq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", #63\t# Used in div-by-10");
}
#endif
#ifndef PRODUCT
void sarL_rReg_2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  st->print_raw("sarq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", #2\t# Used in div-by-10");
}
#endif
#ifndef PRODUCT
void divL_10Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void modI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// rax
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// div
  st->print_raw("cmpl    rax, 0x80000000\t# irem\n\t");
  st->print_raw("jne,s   normal\n\t");
  st->print_raw("xorl    rdx, rdx\n\t");
  st->print_raw("cmpl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw(", -1\n\t");
  st->print_raw("je,s    done\n");
  st->print_raw("normal: cdql\n\t");
  st->print_raw("idivl   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void modL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// rax
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// div
  st->print_raw("movq    rdx, 0x8000000000000000\t# lrem\n\t");
  st->print_raw("cmpq    rax, rdx\n\t");
  st->print_raw("jne,s   normal\n\t");
  st->print_raw("xorl    rdx, rdx\n\t");
  st->print_raw("cmpq    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw(", -1\n\t");
  st->print_raw("je,s    done\n");
  st->print_raw("normal: cdqq\n\t");
  st->print_raw("idivq   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // div
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void salI_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sall    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void salI_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sall    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void salI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sall    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void salI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sall    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void salI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sall    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void salI_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sall    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void sarI_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void sarI_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void sarI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void sarI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void sarI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void sarI_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void shrI_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void shrI_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void shrI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void shrI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void shrI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void shrI_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void salL_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("salq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void salL_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("salq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void salL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("salq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void salL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("salq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void salL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("salq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void salL_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("salq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void sarL_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void sarL_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void sarL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void sarL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void sarL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void sarL_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("sarq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void shrL_rReg_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void shrL_mem_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void shrL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void shrL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void shrL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void shrL_mem_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("shrq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void i2bNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// twentyfour
  st->print_raw("movsbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# i2b");
}
#endif
#ifndef PRODUCT
void i2sNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// sixteen
  st->print_raw("movswl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# i2s");
}
#endif
#ifndef PRODUCT
void rolI_rReg_imm1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  st->print_raw("roll    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void rolI_rReg_imm8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  st->print_raw("roll    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void rolI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  st->print_raw("roll    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void rolI_rReg_i1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolI_rReg_i1_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolI_rReg_i8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolI_rReg_i8_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolI_rReg_Var_C0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolI_rReg_Var_C0_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolI_rReg_Var_C32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolI_rReg_Var_C32_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorI_rReg_imm1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  st->print_raw("rorl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void rorI_rReg_imm8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  st->print_raw("rorl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void rorI_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  st->print_raw("rorl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void rorI_rReg_i1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorI_rReg_i1_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorI_rReg_i8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorI_rReg_i8_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorI_rReg_Var_C0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorI_rReg_Var_C0_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorI_rReg_Var_C32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorI_rReg_Var_C32_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolL_rReg_imm1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  st->print_raw("rolq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void rolL_rReg_imm8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  st->print_raw("rolq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void rolL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  st->print_raw("rolq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void rolL_rReg_i1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolL_rReg_i1_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolL_rReg_i8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolL_rReg_i8_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolL_rReg_Var_C0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolL_rReg_Var_C0_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolL_rReg_Var_C64Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rolL_rReg_Var_C64_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorL_rReg_imm1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  st->print_raw("rorq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void rorL_rReg_imm8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  st->print_raw("rorq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void rorL_rReg_CLNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// shift
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  st->print_raw("rorq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
}
#endif
#ifndef PRODUCT
void rorL_rReg_i1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorL_rReg_i1_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorL_rReg_i8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorL_rReg_i8_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorL_rReg_Var_C0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorL_rReg_Var_C0_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorL_rReg_Var_C64Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void rorL_rReg_Var_C64_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void andI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void andI_rReg_imm255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movzbl  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# int & 0xFF");
}
#endif
#ifndef PRODUCT
void andI2L_rReg_imm255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int & 0xFF -> long");
}
#endif
#ifndef PRODUCT
void andI_rReg_imm65535Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movzwl  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# int & 0xFFFF");
}
#endif
#ifndef PRODUCT
void andI2L_rReg_imm65535Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movzwl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int & 0xFFFF -> long");
}
#endif
#ifndef PRODUCT
void andI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void andI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void andI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("andl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void andI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void andI_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void andI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void andnI_rReg_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// src2
  st->print_raw("andnl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // src2
}
#endif
#ifndef PRODUCT
void andnI_rReg_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src2
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// minus_1
  st->print_raw("andnl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src2
}
#endif
#ifndef PRODUCT
void andnI_rReg_rReg_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// src2
  st->print_raw("andnl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // src2
}
#endif
#ifndef PRODUCT
void andnI_rReg_rReg_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src2
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// minus_1
  st->print_raw("andnl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src2
}
#endif
#ifndef PRODUCT
void blsiI_rReg_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// imm_zero
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("blsil  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void blsiI_rReg_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm_zero
  st->print_raw("blsil  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsiI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// imm_zero
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("blsil  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void blsiI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm_zero
  st->print_raw("blsil  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsmskI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsmskl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsmskI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsmskl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsmskI_rReg_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsmskl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsmskI_rReg_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsmskl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsrI_rReg_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsrl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsrI_rReg_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsrl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsrI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsrl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsrI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsrl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void orI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orl     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void orI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orl     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void orI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orl     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void orI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("orl     ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void orI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orl     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void orI_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orl     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void orI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orl     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void xorI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void xorI_rReg_im1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm
  st->print_raw("not    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void xorI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void xorI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void xorI_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("xorl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# int");
}
#endif
#ifndef PRODUCT
void xorI_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void xorI_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void xorI_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# int");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void andL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void andL_rReg_imm255Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movzbq  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# long & 0xFF");
}
#endif
#ifndef PRODUCT
void andL_rReg_imm65535Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movzwq  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\t# long & 0xFFFF");
}
#endif
#ifndef PRODUCT
void andL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void andL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void andL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("andq    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void andL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void andL_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void andL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("andq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void andnL_rReg_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// src2
  st->print_raw("andnq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // src2
}
#endif
#ifndef PRODUCT
void andnL_rReg_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src2
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// minus_1
  st->print_raw("andnq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src2
}
#endif
#ifndef PRODUCT
void andnL_rReg_rReg_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// src2
  st->print_raw("andnq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // src2
}
#endif
#ifndef PRODUCT
void andnL_rReg_rReg_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src2
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// minus_1
  st->print_raw("andnq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src2
}
#endif
#ifndef PRODUCT
void blsiL_rReg_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// imm_zero
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("blsiq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void blsiL_rReg_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm_zero
  st->print_raw("blsiq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsiL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// imm_zero
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("blsiq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void blsiL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm_zero
  st->print_raw("blsiq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsmskL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsmskq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsmskL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsmskq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsmskL_rReg_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsmskq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsmskL_rReg_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsmskq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsrL_rReg_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsrq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsrL_rReg_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsrq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsrL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsrq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void blsrL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// minus_1
  st->print_raw("blsrq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void orL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orq     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void orL_rReg_castP2XNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orq     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void orL_rReg_castP2X_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("orq     ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void orL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orq     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void orL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orq     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void orL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("orq     ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void orL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orq     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void orL_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orq     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void orL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("orq     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void xorL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void xorL_rReg_im1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// imm
  st->print_raw("notq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
}
#endif
#ifndef PRODUCT
void xorL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void xorL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void xorL_rReg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("xorq    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void xorL_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void xorL_mem_rReg_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void xorL_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("xorq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# long");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void convI2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("testl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# ci2b\n\t");
  st->print_raw("setnz   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
}
#endif
#ifndef PRODUCT
void convP2BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("testq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# cp2b\n\t");
  st->print_raw("setnz   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
}
#endif
#ifndef PRODUCT
void cmpLTMaskNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// p
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// q
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // p
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // q
  st->print_raw("\t# cmpLTMask\n\t");
  st->print_raw("setlt   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("negl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
}
#endif
#ifndef PRODUCT
void cmpLTMask0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("sarl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", #31\t# cmpLTMask0");
}
#endif
#ifndef PRODUCT
void cadd_cmpLTMaskNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// p
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// q
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// y
  st->print_raw("subl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // p
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // q
  st->print_raw("\t# cadd_cmpLTMask\n\t");
  st->print_raw("jge    done\n\t");
  st->print_raw("addl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // p
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // y
  st->print_raw("\n");
  st->print_raw("done:  ");
}
#endif
#ifndef PRODUCT
void cadd_cmpLTMask_1Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// p
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// q
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// y
  st->print_raw("subl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // p
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // q
  st->print_raw("\t# cadd_cmpLTMask\n\t");
  st->print_raw("jge    done\n\t");
  st->print_raw("addl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // p
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // y
  st->print_raw("\n");
  st->print_raw("done:  ");
}
#endif
#ifndef PRODUCT
void cadd_cmpLTMask_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// y
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// p
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// q
  st->print_raw("subl   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // p
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // q
  st->print_raw("\t# cadd_cmpLTMask\n\t");
  st->print_raw("jge    done\n\t");
  st->print_raw("addl   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // p
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // y
  st->print_raw("\n");
  st->print_raw("done:  ");
}
#endif
#ifndef PRODUCT
void cadd_cmpLTMask_2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// p
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// q
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// y
  st->print_raw("subl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // p
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // q
  st->print_raw("\t# cadd_cmpLTMask\n\t");
  st->print_raw("jge    done\n\t");
  st->print_raw("addl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // p
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // y
  st->print_raw("\n");
  st->print_raw("done:  ");
}
#endif
#ifndef PRODUCT
void and_cmpLTMaskNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// p
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// q
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// y
  st->print_raw("cmpl     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // p
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // q
  st->print_raw("\t# and_cmpLTMask\n\t");
  st->print_raw("jlt      done\n\t");
  st->print_raw("xorl     ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // y
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // y
  st->print_raw("\n");
  st->print_raw("done:  ");
}
#endif
#ifndef PRODUCT
void and_cmpLTMask_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// y
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// p
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// q
  st->print_raw("cmpl     ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // p
  st->print_raw(", ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // q
  st->print_raw("\t# and_cmpLTMask\n\t");
  st->print_raw("jlt      done\n\t");
  st->print_raw("xorl     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // y
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // y
  st->print_raw("\n");
  st->print_raw("done:  ");
}
#endif
#ifndef PRODUCT
void cmpF_cc_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomiss ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\n\t");
  st->print_raw("jnp,s   exit\n\t");
  st->print_raw("pushfq\t# saw NaN, set CF\n\t");
  st->print_raw("andq    [rsp], #0xffffff2b\n\t");
  st->print_raw("popfq\n");
  st->print_raw("exit:");
}
#endif
#ifndef PRODUCT
void cmpF_cc_reg_CFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomiss ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void cmpF_cc_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomiss ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\n\t");
  st->print_raw("jnp,s   exit\n\t");
  st->print_raw("pushfq\t# saw NaN, set CF\n\t");
  st->print_raw("andq    [rsp], #0xffffff2b\n\t");
  st->print_raw("popfq\n");
  st->print_raw("exit:");
}
#endif
#ifndef PRODUCT
void cmpF_cc_memCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomiss ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void cmpF_cc_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("ucomiss ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
  st->print_raw("\n\t");
  st->print_raw("jnp,s   exit\n\t");
  st->print_raw("pushfq\t# saw NaN, set CF\n\t");
  st->print_raw("andq    [rsp], #0xffffff2b\n\t");
  st->print_raw("popfq\n");
  st->print_raw("exit:");
}
#endif
#ifndef PRODUCT
void cmpF_cc_immCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("ucomiss ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void cmpD_cc_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomisd ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\n\t");
  st->print_raw("jnp,s   exit\n\t");
  st->print_raw("pushfq\t# saw NaN, set CF\n\t");
  st->print_raw("andq    [rsp], #0xffffff2b\n\t");
  st->print_raw("popfq\n");
  st->print_raw("exit:");
}
#endif
#ifndef PRODUCT
void cmpD_cc_reg_CFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomisd ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw(" test");
}
#endif
#ifndef PRODUCT
void cmpD_cc_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomisd ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\n\t");
  st->print_raw("jnp,s   exit\n\t");
  st->print_raw("pushfq\t# saw NaN, set CF\n\t");
  st->print_raw("andq    [rsp], #0xffffff2b\n\t");
  st->print_raw("popfq\n");
  st->print_raw("exit:");
}
#endif
#ifndef PRODUCT
void cmpD_cc_memCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomisd ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void cmpD_cc_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("ucomisd ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
  st->print_raw("\n\t");
  st->print_raw("jnp,s   exit\n\t");
  st->print_raw("pushfq\t# saw NaN, set CF\n\t");
  st->print_raw("andq    [rsp], #0xffffff2b\n\t");
  st->print_raw("popfq\n");
  st->print_raw("exit:");
}
#endif
#ifndef PRODUCT
void cmpD_cc_immCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("ucomisd ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void cmpF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomiss ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", #-1\n\t");
  st->print_raw("jp,s    done\n\t");
  st->print_raw("jb,s    done\n\t");
  st->print_raw("setne   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void cmpF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomiss ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", #-1\n\t");
  st->print_raw("jp,s    done\n\t");
  st->print_raw("jb,s    done\n\t");
  st->print_raw("setne   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void cmpF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("ucomiss ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
  st->print_raw("\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", #-1\n\t");
  st->print_raw("jp,s    done\n\t");
  st->print_raw("jb,s    done\n\t");
  st->print_raw("setne   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void cmpD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomisd ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", #-1\n\t");
  st->print_raw("jp,s    done\n\t");
  st->print_raw("jb,s    done\n\t");
  st->print_raw("setne   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void cmpD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("ucomisd ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", #-1\n\t");
  st->print_raw("jp,s    done\n\t");
  st->print_raw("jb,s    done\n\t");
  st->print_raw("setne   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void cmpD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("ucomisd ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
  st->print_raw("\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", #-1\n\t");
  st->print_raw("jp,s    done\n\t");
  st->print_raw("jb,s    done\n\t");
  st->print_raw("setne   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void cosD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("dcos   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\n\t");
}
#endif
#ifndef PRODUCT
void sinD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("dsin   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\n\t");
}
#endif
#ifndef PRODUCT
void tanD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("dtan   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw("\n\t");
}
#endif
#ifndef PRODUCT
void log10D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("fldlg2\t\t\t#Log10\n\t");
  st->print_raw("fyl2x\t\t\t# Q=Log10*Log_2(x)\n\t");
}
#endif
#ifndef PRODUCT
void logD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("fldln2\t\t\t#Log_e\n\t");
  st->print_raw("fyl2x\t\t\t# Q=Log_e*Log_2(x)\n\t");
}
#endif
#ifndef PRODUCT
void powD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src0
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  st->print_raw("fast_pow ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src0
  st->print_raw(" ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw(" -> ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("  // KILL ");
      st->print_raw("RAX");
  st->print_raw(", ");
      st->print_raw("RCX");
  st->print_raw(", ");
      st->print_raw("RDX");
}
#endif
#ifndef PRODUCT
void expD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("fast_exp ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(" -> ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("  // KILL ");
      st->print_raw("RAX");
  st->print_raw(", ");
      st->print_raw("RCX");
  st->print_raw(", ");
      st->print_raw("RDX");
}
#endif
#ifndef PRODUCT
void roundFloat_nopNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void roundDouble_nopNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void convF2D_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvtss2sd ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void convF2D_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  st->print_raw("cvtss2sd ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void convD2F_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvtsd2ss ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void convD2F_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  st->print_raw("cvtsd2ss ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void convF2I_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvttss2sil ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# f2i\n\t");
  st->print_raw("cmpl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", #0x80000000\n\t");
  st->print_raw("jne,s   done\n\t");
  st->print_raw("subq    rsp, #8\n\t");
  st->print_raw("movss   [rsp], ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("call    f2i_fixup\n\t");
  st->print_raw("popq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:   ");
}
#endif
#ifndef PRODUCT
void convF2L_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvttss2siq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# f2l\n\t");
  st->print_raw("cmpq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", [0x8000000000000000]\n\t");
  st->print_raw("jne,s   done\n\t");
  st->print_raw("subq    rsp, #8\n\t");
  st->print_raw("movss   [rsp], ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("call    f2l_fixup\n\t");
  st->print_raw("popq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:   ");
}
#endif
#ifndef PRODUCT
void convD2I_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvttsd2sil ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# d2i\n\t");
  st->print_raw("cmpl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", #0x80000000\n\t");
  st->print_raw("jne,s   done\n\t");
  st->print_raw("subq    rsp, #8\n\t");
  st->print_raw("movsd   [rsp], ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("call    d2i_fixup\n\t");
  st->print_raw("popq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:   ");
}
#endif
#ifndef PRODUCT
void convD2L_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvttsd2siq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# d2l\n\t");
  st->print_raw("cmpq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", [0x8000000000000000]\n\t");
  st->print_raw("jne,s   done\n\t");
  st->print_raw("subq    rsp, #8\n\t");
  st->print_raw("movsd   [rsp], ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("call    d2l_fixup\n\t");
  st->print_raw("popq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n");
  st->print_raw("done:   ");
}
#endif
#ifndef PRODUCT
void convI2F_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvtsi2ssl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# i2f");
}
#endif
#ifndef PRODUCT
void convI2F_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  st->print_raw("cvtsi2ssl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# i2f");
}
#endif
#ifndef PRODUCT
void convI2D_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvtsi2sdl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# i2d");
}
#endif
#ifndef PRODUCT
void convI2D_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  st->print_raw("cvtsi2sdl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# i2d");
}
#endif
#ifndef PRODUCT
void convXI2F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movdl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("cvtdq2psl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t# i2f");
}
#endif
#ifndef PRODUCT
void convXI2D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movdl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("cvtdq2pdl ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t# i2d");
}
#endif
#ifndef PRODUCT
void convL2F_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvtsi2ssq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# l2f");
}
#endif
#ifndef PRODUCT
void convL2F_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  st->print_raw("cvtsi2ssq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# l2f");
}
#endif
#ifndef PRODUCT
void convL2D_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("cvtsi2sdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# l2d");
}
#endif
#ifndef PRODUCT
void convL2D_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  st->print_raw("cvtsi2sdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# l2d");
}
#endif
#ifndef PRODUCT
void convI2L_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movslq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# i2l");
}
#endif
#ifndef PRODUCT
void convI2L_reg_reg_zexNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# i2l zero-extend\n\t");
}
#endif
#ifndef PRODUCT
void convI2L_reg_mem_zexNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# i2l zero-extend\n\t");
}
#endif
#ifndef PRODUCT
void zerox_long_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mask
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# zero-extend long");
}
#endif
#ifndef PRODUCT
void convL2I_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# l2i");
}
#endif
#ifndef PRODUCT
void MoveF2I_stack_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveF2I_stack_reg");
}
#endif
#ifndef PRODUCT
void MoveI2F_stack_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movss   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveI2F_stack_reg");
}
#endif
#ifndef PRODUCT
void MoveD2L_stack_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveD2L_stack_reg");
}
#endif
#ifndef PRODUCT
void MoveL2D_stack_reg_partialNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movlpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveL2D_stack_reg");
}
#endif
#ifndef PRODUCT
void MoveL2D_stack_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movsd   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveL2D_stack_reg");
}
#endif
#ifndef PRODUCT
void MoveF2I_reg_stackNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movss   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveF2I_reg_stack");
}
#endif
#ifndef PRODUCT
void MoveI2F_reg_stackNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveI2F_reg_stack");
}
#endif
#ifndef PRODUCT
void MoveD2L_reg_stackNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movsd   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveL2D_reg_stack");
}
#endif
#ifndef PRODUCT
void MoveL2D_reg_stackNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveL2D_reg_stack");
}
#endif
#ifndef PRODUCT
void MoveF2I_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveF2I");
}
#endif
#ifndef PRODUCT
void MoveD2L_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveD2L");
}
#endif
#ifndef PRODUCT
void MoveI2F_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveI2F");
}
#endif
#ifndef PRODUCT
void MoveL2D_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# MoveL2D");
}
#endif
#ifndef PRODUCT
void rep_stosNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("xorq    rax, rax\t# ClearArray:\n\t");
  st->print_raw("rep     stosq\t# Store rax to *rdi++ while rcx--");
}
#endif
#ifndef PRODUCT
void rep_fast_stosbNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("xorq    rax, rax\t# ClearArray:\n\t");
  st->print_raw("shlq    rcx,3\t# Convert doublewords to bytes\n\t");
  st->print_raw("rep     stosb\t# Store rax to *rdi++ while rcx--");
}
#endif
#ifndef PRODUCT
void string_compareNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// str1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cnt1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// str2
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// cnt2
  unsigned idx5 = idx4 + opnd_array(4)->num_edges(); 	// tmp1
  st->print_raw("String Compare ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // str1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // cnt1
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // str2
  st->print_raw(",");
  opnd_array(4)->ext_format(ra, this,idx4, st); // cnt2
  st->print_raw(" -> ");
  opnd_array(0)->int_format(ra, this, st); // result
  st->print_raw("   // KILL ");
  opnd_array(5)->ext_format(ra, this,idx5, st); // tmp1
}
#endif
#ifndef PRODUCT
void string_indexof_conNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// str1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cnt1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// str2
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// int_cnt2
  unsigned idx5 = idx4 + opnd_array(4)->num_edges(); 	// vec
  st->print_raw("String IndexOf ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // str1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // cnt1
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // str2
  st->print_raw(",");
  opnd_array(4)->ext_format(ra, this,idx4, st); // int_cnt2
  st->print_raw(" -> ");
  opnd_array(0)->int_format(ra, this, st); // result
  st->print_raw("   // KILL ");
  opnd_array(5)->ext_format(ra, this,idx5, st); // vec
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // cnt1
  st->print_raw(", ");
      st->print_raw("RAX");
  st->print_raw(", ");
      st->print_raw("RCX");
}
#endif
#ifndef PRODUCT
void string_indexofNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// str1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cnt1
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// str2
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// cnt2
  unsigned idx5 = idx4 + opnd_array(4)->num_edges(); 	// vec
  st->print_raw("String IndexOf ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // str1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // cnt1
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // str2
  st->print_raw(",");
  opnd_array(4)->ext_format(ra, this,idx4, st); // cnt2
  st->print_raw(" -> ");
  opnd_array(0)->int_format(ra, this, st); // result
  st->print_raw("   // KILL all");
}
#endif
#ifndef PRODUCT
void string_equalsNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// str1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// str2
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// cnt
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// tmp1
  unsigned idx5 = idx4 + opnd_array(4)->num_edges(); 	// tmp2
  st->print_raw("String Equals ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // str1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // str2
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // cnt
  st->print_raw(" -> ");
  opnd_array(0)->int_format(ra, this, st); // result
  st->print_raw("    // KILL ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // tmp1
  st->print_raw(", ");
  opnd_array(5)->ext_format(ra, this,idx5, st); // tmp2
  st->print_raw(", ");
      st->print_raw("RBX");
}
#endif
#ifndef PRODUCT
void array_equalsNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// ary1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// ary2
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// tmp1
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// tmp2
  st->print_raw("Array Equals ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // ary1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // ary2
  st->print_raw(" -> ");
  opnd_array(0)->int_format(ra, this, st); // result
  st->print_raw("   // KILL ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // tmp1
  st->print_raw(", ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // tmp2
  st->print_raw(", ");
      st->print_raw("RCX");
  st->print_raw(", ");
      st->print_raw("RBX");
}
#endif
#ifndef PRODUCT
void encode_iso_arrayNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// len
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// tmp1
  unsigned idx5 = idx4 + opnd_array(4)->num_edges(); 	// tmp2
  unsigned idx6 = idx5 + opnd_array(5)->num_edges(); 	// tmp3
  unsigned idx7 = idx6 + opnd_array(6)->num_edges(); 	// tmp4
  st->print_raw("Encode array ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // len
  st->print_raw(" -> ");
  opnd_array(0)->int_format(ra, this, st); // result
  st->print_raw("    // KILL RCX, RDX, ");
  opnd_array(4)->ext_format(ra, this,idx4, st); // tmp1
  st->print_raw(", ");
  opnd_array(5)->ext_format(ra, this,idx5, st); // tmp2
  st->print_raw(", ");
  opnd_array(6)->ext_format(ra, this,idx6, st); // tmp3
  st->print_raw(", ");
  opnd_array(7)->ext_format(ra, this,idx7, st); // tmp4
  st->print_raw(", RSI, RDI ");
}
#endif
#ifndef PRODUCT
void overflowAddI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("addl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check int");
}
#endif
#ifndef PRODUCT
void overflowAddI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("addl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check int");
}
#endif
#ifndef PRODUCT
void overflowAddL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check long");
}
#endif
#ifndef PRODUCT
void overflowAddL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("addq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check long");
}
#endif
#ifndef PRODUCT
void overflowSubI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check int");
}
#endif
#ifndef PRODUCT
void overflowSubI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check int");
}
#endif
#ifndef PRODUCT
void overflowSubL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check long");
}
#endif
#ifndef PRODUCT
void overflowSubL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check long");
}
#endif
#ifndef PRODUCT
void overflowNegI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("negl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check int");
}
#endif
#ifndef PRODUCT
void overflowNegL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("negq    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check long");
}
#endif
#ifndef PRODUCT
void overflowMulI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("imull    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check int");
}
#endif
#ifndef PRODUCT
void overflowMulI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// tmp
  st->print_raw("imull    ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // tmp
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check int");
}
#endif
#ifndef PRODUCT
void overflowMulL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("imulq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check long");
}
#endif
#ifndef PRODUCT
void overflowMulL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// tmp
  st->print_raw("imulq    ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // tmp
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# overflow check long");
}
#endif
#ifndef PRODUCT
void compI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
}
#endif
#ifndef PRODUCT
void compI_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
}
#endif
#ifndef PRODUCT
void compI_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
}
#endif
#ifndef PRODUCT
void testI_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("testl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void testI_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// zero
  st->print_raw("testl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void testI_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// zero
  st->print_raw("testl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
}
#endif
#ifndef PRODUCT
void testI_reg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// zero
  st->print_raw("testl   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
}
#endif
#ifndef PRODUCT
void compU_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# unsigned");
}
#endif
#ifndef PRODUCT
void compU_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# unsigned");
}
#endif
#ifndef PRODUCT
void compU_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# unsigned");
}
#endif
#ifndef PRODUCT
void testU_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("testl  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# unsigned");
}
#endif
#ifndef PRODUCT
void compP_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# ptr");
}
#endif
#ifndef PRODUCT
void compP_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# ptr");
}
#endif
#ifndef PRODUCT
void compP_mem_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# raw ptr");
}
#endif
#ifndef PRODUCT
void testP_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("testq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# ptr");
}
#endif
#ifndef PRODUCT
void testP_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// op
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("testq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op
  st->print_raw(", 0xffffffffffffffff\t# ptr");
}
#endif
#ifndef PRODUCT
void testP_mem_reg0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("cmpq    R12, ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# ptr (R12_heapbase==0)");
}
#endif
#ifndef PRODUCT
void compN_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# compressed ptr");
}
#endif
#ifndef PRODUCT
void compN_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t# compressed ptr");
}
#endif
#ifndef PRODUCT
void compN_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# compressed ptr");
}
#endif
#ifndef PRODUCT
void compN_mem_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("cmpl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# compressed ptr");
}
#endif
#ifndef PRODUCT
void compN_rReg_imm_klassNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpl    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# compressed klass ptr");
}
#endif
#ifndef PRODUCT
void compN_mem_imm_klassNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("cmpl    ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# compressed klass ptr");
}
#endif
#ifndef PRODUCT
void testN_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("testl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# compressed ptr");
}
#endif
#ifndef PRODUCT
void testN_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("testl   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(", 0xffffffff\t# compressed ptr");
}
#endif
#ifndef PRODUCT
void testN_mem_reg0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("cmpl    R12, ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t# compressed ptr (R12_heapbase==0)");
}
#endif
#ifndef PRODUCT
void compL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
}
#endif
#ifndef PRODUCT
void compL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
}
#endif
#ifndef PRODUCT
void compL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
}
#endif
#ifndef PRODUCT
void testL_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("testq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void testL_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// zero
  st->print_raw("testq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
  st->print_raw("\t# long");
}
#endif
#ifndef PRODUCT
void testL_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// zero
  st->print_raw("testq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
}
#endif
#ifndef PRODUCT
void testL_reg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// zero
  st->print_raw("testq   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
}
#endif
#ifndef PRODUCT
void cmpL3_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t# CmpL3\n\t");
  st->print_raw("movl    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", -1\n\t");
  st->print_raw("jl,s    done\n\t");
  st->print_raw("setne   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("movzbl  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("done:");
}
#endif
#ifndef PRODUCT
void compUL_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# unsigned");
}
#endif
#ifndef PRODUCT
void compUL_rReg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# unsigned");
}
#endif
#ifndef PRODUCT
void compUL_rReg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// op1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// op2
  st->print_raw("cmpq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // op1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // op2
  st->print_raw("\t# unsigned");
}
#endif
#ifndef PRODUCT
void testUL_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// zero
  st->print_raw("testq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\t# unsigned");
}
#endif
#ifndef PRODUCT
void cmovI_reg_gNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("cmovlgt ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# min");
}
#endif
#ifndef PRODUCT
void minI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void cmovI_reg_lNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// cr
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("cmovllt ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t# max");
}
#endif
#ifndef PRODUCT
void maxI_rRegNode::format(PhaseRegAlloc *ra, outputStream *st) const {
}
#endif
#ifndef PRODUCT
void jmpDirNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// 
  st->print_raw("jmp     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // labl
}
#endif
#ifndef PRODUCT
void jmpConNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw("     ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpLoopEndNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw("     ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\t# loop end");
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpLoopEndUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",u   ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\t# loop end");
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpLoopEndUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",u   ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\t# loop end");
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpConUNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",u  ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpConUCFNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",u  ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpConUCF2Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  if (  opnd_array(1)->ccode()   == Assembler::notEqual) {
        st->print_raw("jp,u   ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\n\t");
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",u   ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  } else {
        st->print_raw("jp,u   done\n\t");
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",u   ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\n\t");
  st->print_raw("done:");
  }
    st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void partialSubtypeCheckNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// sub
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// super
  st->print_raw("movq    rdi, [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // sub
  st->print_raw(" + in_bytes(Klass::secondary_supers_offset())]\n\t");
  st->print_raw("movl    rcx, [rdi + Array<Klass*>::length_offset_in_bytes()]\t# length to scan\n\t");
  st->print_raw("addq    rdi, Array<Klass*>::base_offset_in_bytes()\t# Skip to start of data; set NZ in case count is zero\n\t");
  st->print_raw("repne   scasq\t# Scan *rdi++ for a match with rax while rcx--\n\t");
  st->print_raw("jne,s   miss\t\t# Missed: rdi not-zero\n\t");
  st->print_raw("movq    [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // sub
  st->print_raw(" + in_bytes(Klass::secondary_super_cache_offset())], ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // super
  st->print_raw("\t# Hit: update cache\n\t");
  st->print_raw("xorq    ");
  opnd_array(0)->int_format(ra, this, st); // result
  st->print_raw(", ");
  opnd_array(0)->int_format(ra, this, st); // result
  st->print_raw("\t\t Hit: rdi zero\n\t");
  st->print_raw("miss:\t");
}
#endif
#ifndef PRODUCT
void partialSubtypeCheck_vs_ZeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// sub
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// super
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// zero
  st->print_raw("movq    rdi, [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // sub
  st->print_raw(" + in_bytes(Klass::secondary_supers_offset())]\n\t");
  st->print_raw("movl    rcx, [rdi + Array<Klass*>::length_offset_in_bytes()]\t# length to scan\n\t");
  st->print_raw("addq    rdi, Array<Klass*>::base_offset_in_bytes()\t# Skip to start of data; set NZ in case count is zero\n\t");
  st->print_raw("repne   scasq\t# Scan *rdi++ for a match with rax while cx-- != 0\n\t");
  st->print_raw("jne,s   miss\t\t# Missed: flags nz\n\t");
  st->print_raw("movq    [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // sub
  st->print_raw(" + in_bytes(Klass::secondary_super_cache_offset())], ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // super
  st->print_raw("\t# Hit: update cache\n\t");
  st->print_raw("miss:\t");
}
#endif
#ifndef PRODUCT
void jmpDir_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// 
  st->print_raw("jmp,s   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // labl
}
#endif
#ifndef PRODUCT
void jmpCon_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",s   ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpLoopEnd_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cr
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",s   ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\t# loop end");
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpLoopEndU_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",us  ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\t# loop end");
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpLoopEndUCF_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",us  ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\t# loop end");
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpConU_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",us  ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpConUCF_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",us  ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void jmpConUCF2_shortNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cmp
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// labl
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// 
  if (  opnd_array(1)->ccode()   == Assembler::notEqual) {
        st->print_raw("jp,u,s   ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\n\t");
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",u,s   ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  } else {
        st->print_raw("jp,u,s   done\n\t");
  st->print_raw("j");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cop
  st->print_raw(",u,s  ");
  opnd_array(3)->ext_format(ra, this,idx3, st); // labl
  st->print_raw("\n\t");
  st->print_raw("done:");
  }
    st->print("  P=%f C=%f",_prob,_fcnt);
}
#endif
#ifndef PRODUCT
void cmpFastLockRTMNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// object
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// box
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// tmp
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// scr
  unsigned idx5 = idx4 + opnd_array(4)->num_edges(); 	// cx1
  unsigned idx6 = idx5 + opnd_array(5)->num_edges(); 	// cx2
  st->print_raw("fastlock ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // object
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // box
  st->print_raw("\t! kills ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // box
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // tmp
  st->print_raw(",");
  opnd_array(4)->ext_format(ra, this,idx4, st); // scr
  st->print_raw(",");
  opnd_array(5)->ext_format(ra, this,idx5, st); // cx1
  st->print_raw(",");
  opnd_array(6)->ext_format(ra, this,idx6, st); // cx2
}
#endif
#ifndef PRODUCT
void cmpFastLockNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// object
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// box
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// tmp
  unsigned idx4 = idx3 + opnd_array(3)->num_edges(); 	// scr
  st->print_raw("fastlock ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // object
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // box
  st->print_raw("\t! kills ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // box
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // tmp
  st->print_raw(",");
  opnd_array(4)->ext_format(ra, this,idx4, st); // scr
}
#endif
#ifndef PRODUCT
void cmpFastUnlockNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// object
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// box
  unsigned idx3 = idx2 + opnd_array(2)->num_edges(); 	// tmp
  st->print_raw("fastunlock ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // object
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // box
  st->print_raw("\t! kills ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // box
  st->print_raw(",");
  opnd_array(3)->ext_format(ra, this,idx3, st); // tmp
}
#endif
#ifndef PRODUCT
void safePoint_pollNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("testl  rax, [rip + #offset_to_poll_page]\t");
  st->print_raw("# Safepoint: poll for GC");
  st->print_raw("");
  if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
  st->print("        # ");
  if( _jvms && _oop_map ) _oop_map->print_on(st);
}
#endif
#ifndef PRODUCT
void safePoint_poll_farNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 5;
  unsigned idx1 = 5; 	// cr
  st->print_raw("testl  rax, [");
  opnd_array(1)->ext_format(ra, this,idx1, st); // poll
  st->print_raw("]\t");
  st->print_raw("# Safepoint: poll for GC");
  st->print_raw("");
  if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
  st->print("        # ");
  if( _jvms && _oop_map ) _oop_map->print_on(st);
}
#endif
#ifndef PRODUCT
void CallStaticJavaDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("call,static ");
  if( _method ) _method->print_short_name(st);
  else st->print(" wrapper for: %s", _name);
  if( !_method ) dump_trap_args(st);
  st->cr();
  if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
  st->print("        # ");
  if( _jvms && _oop_map ) _oop_map->print_on(st);
}
#endif
#ifndef PRODUCT
void CallDynamicJavaDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("movq    rax, #Universe::non_oop_word()\n\t");
  st->print_raw("call,dynamic ");
  _method->print_short_name(st);
  st->cr();
  if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
  st->print("        # ");
  if( _jvms && _oop_map ) _oop_map->print_on(st);
}
#endif
#ifndef PRODUCT
void CallRuntimeDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("call,runtime ");
  st->print(" %s", _name);  st->cr();
  if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
  st->print("        # ");
  if( _jvms && _oop_map ) _oop_map->print_on(st);
}
#endif
#ifndef PRODUCT
void CallLeafDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("call_leaf,runtime ");
  st->print(" %s", _name);  st->cr();
  if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
  st->print("        # ");
  if( _jvms && _oop_map ) _oop_map->print_on(st);
}
#endif
#ifndef PRODUCT
void CallLeafNoFPDirectNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("call_leaf_nofp,runtime ");
  st->print(" %s", _name);  st->cr();
  if (_jvms) _jvms->format(ra, this, st); else st->print_cr("        No JVM State Info");
  st->print("        # ");
  if( _jvms && _oop_map ) _oop_map->print_on(st);
}
#endif
#ifndef PRODUCT
void RetNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("ret");
}
#endif
#ifndef PRODUCT
void TailCalljmpIndNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 5;
  unsigned idx1 = 5; 	// method_oop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// 
  st->print_raw("jmp     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // jump_target
  st->print_raw("\t# rbx holds method oop");
}
#endif
#ifndef PRODUCT
void tailjmpIndNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 5;
  unsigned idx1 = 5; 	// ex_oop
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// 
  st->print_raw("popq    rdx\t# pop return address\n\t");
  st->print_raw("jmp     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // jump_target
}
#endif
#ifndef PRODUCT
void CreateExceptionNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("# exception oop is in rax; no code emitted");
}
#endif
#ifndef PRODUCT
void RethrowExceptionNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("jmp     rethrow_stub");
}
#endif
#ifndef PRODUCT
void tlsLoadPNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("# TLS is in R15");
}
#endif
#ifndef PRODUCT
void ShouldNotReachHereNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  st->print_raw("int3\t# ShouldNotReachHere");
}
#endif
#ifndef PRODUCT
void addF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void addF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void addF_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("addss   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void addF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("addss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void addF_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vaddss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void addF_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vaddss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void addF_reg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src2
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  st->print_raw("vaddss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src2
}
#endif
#ifndef PRODUCT
void addF_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("vaddss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void addD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void addD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void addD_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("addsd   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void addD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("addsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void addD_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vaddsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void addD_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vaddsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void addD_reg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src2
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  st->print_raw("vaddsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src2
}
#endif
#ifndef PRODUCT
void addD_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("vaddsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void subF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void subF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void subF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("subss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void subF_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vsubss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void subF_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vsubss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void subF_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("vsubss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void subD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void subD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void subD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("subsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void subD_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vsubsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void subD_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vsubsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void subD_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("vsubsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void mulF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("mulss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void mulF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("mulss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void mulF_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("mulss   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void mulF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("mulss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void mulF_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vmulss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void mulF_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vmulss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void mulF_reg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src2
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  st->print_raw("vmulss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src2
}
#endif
#ifndef PRODUCT
void mulF_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("vmulss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void mulD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("mulsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void mulD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("mulsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void mulD_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// dst
  st->print_raw("mulsd   ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void mulD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("mulsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void mulD_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vmulsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void mulD_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vmulsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void mulD_reg_mem_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src2
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src1
  st->print_raw("vmulsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src1
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src2
}
#endif
#ifndef PRODUCT
void mulD_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("vmulsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void divF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("divss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void divF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("divss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void divF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("divss   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void divF_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vdivss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void divF_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vdivss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void divF_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("vdivss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void divD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("divsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void divD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("divsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
}
#endif
#ifndef PRODUCT
void divD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("divsd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void divD_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vdivsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void divD_reg_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vdivsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(", ");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
}
#endif
#ifndef PRODUCT
void divD_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// con
  st->print_raw("vdivsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(2)->ext_format(ra, this,idx2, st); // con
}
#endif
#ifndef PRODUCT
void absF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("andps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [0x7fffffff]\t# abs float by sign masking");
}
#endif
#ifndef PRODUCT
void absF_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("vandps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [0x7fffffff]\t# abs float by sign masking");
}
#endif
#ifndef PRODUCT
void absD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("andpd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [0x7fffffffffffffff]\t");
  st->print_raw("# abs double by sign masking");
}
#endif
#ifndef PRODUCT
void absD_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("vandpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [0x7fffffffffffffff]\t");
  st->print_raw("# abs double by sign masking");
}
#endif
#ifndef PRODUCT
void negF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("xorps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [0x80000000]\t# neg float by sign flipping");
}
#endif
#ifndef PRODUCT
void negF_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("vxorps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [0x80000000]\t# neg float by sign flipping");
}
#endif
#ifndef PRODUCT
void negD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  st->print_raw("xorpd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(", [0x8000000000000000]\t");
  st->print_raw("# neg double by sign flipping");
}
#endif
#ifndef PRODUCT
void negD_reg_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("vxorpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(", [0x8000000000000000]\t");
  st->print_raw("# neg double by sign flipping");
}
#endif
#ifndef PRODUCT
void sqrtF_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("sqrtss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void sqrtF_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  st->print_raw("sqrtss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void sqrtF_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("sqrtss  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: float=");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
}
#endif
#ifndef PRODUCT
void sqrtD_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("sqrtsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void sqrtD_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  st->print_raw("sqrtsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
}
#endif
#ifndef PRODUCT
void sqrtD_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("sqrtsd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(", [");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t# load from constant table: double=");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
}
#endif
#ifndef PRODUCT
void loadV4Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t! load vector (4 bytes)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadV8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t! load vector (8 bytes)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadV16Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movdqu  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t! load vector (16 bytes)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void loadV32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("vmovdqu ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\t! load vector (32 bytes)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeV4Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movd    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! store vector (4 bytes)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeV8Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movq    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! store vector (8 bytes)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeV16Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("movdqu  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! store vector (16 bytes)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void storeV32Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("vmovdqu ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! store vector (32 bytes)");
  if (ra->C->alias_type(adr_type())->field() != NULL) {
    ciField* f = ra->C->alias_type(adr_type())->field();
    st->print(" ! Field: ");
    if (f->is_volatile())
      st->print("volatile ");
    f->holder()->name()->print_symbol_on(st);
    st->print(".");
    f->name()->print_symbol_on(st);
    if (f->is_constant())
      st->print(" (constant)");
  } else {
    if (ra->C->alias_type(adr_type())->is_volatile())
      st->print(" volatile!");
  }
}
#endif
#ifndef PRODUCT
void Repl4BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("punpcklbw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("pshuflw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate4B");
}
#endif
#ifndef PRODUCT
void Repl8BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("punpcklbw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("pshuflw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate8B");
}
#endif
#ifndef PRODUCT
void Repl16BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("punpcklbw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("pshuflw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate16B");
}
#endif
#ifndef PRODUCT
void Repl32BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("punpcklbw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("pshuflw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate32B");
}
#endif
#ifndef PRODUCT
void Repl4B_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movdl   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t! replicate4B(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl8B_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t! replicate8B(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl16B_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate16B(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl32B_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! lreplicate32B(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl4B_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("pxor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate4B zero");
}
#endif
#ifndef PRODUCT
void Repl8B_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("pxor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate8B zero");
}
#endif
#ifndef PRODUCT
void Repl16B_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("pxor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate16B zero");
}
#endif
#ifndef PRODUCT
void Repl32B_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate32B zero");
}
#endif
#ifndef PRODUCT
void Repl2SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("pshuflw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate2S");
}
#endif
#ifndef PRODUCT
void Repl4SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("pshuflw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate4S");
}
#endif
#ifndef PRODUCT
void Repl8SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("pshuflw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate8S");
}
#endif
#ifndef PRODUCT
void Repl16SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("pshuflw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate16S");
}
#endif
#ifndef PRODUCT
void Repl2S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movdl   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t! replicate2S(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl4S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t! replicate4S(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl8S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate8S(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl16S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate16S(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl2S_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("pxor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate2S zero");
}
#endif
#ifndef PRODUCT
void Repl4S_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("pxor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate4S zero");
}
#endif
#ifndef PRODUCT
void Repl8S_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("pxor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate8S zero");
}
#endif
#ifndef PRODUCT
void Repl16S_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate16S zero");
}
#endif
#ifndef PRODUCT
void Repl2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate2I");
}
#endif
#ifndef PRODUCT
void Repl4INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate4I");
}
#endif
#ifndef PRODUCT
void Repl8INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate8I");
}
#endif
#ifndef PRODUCT
void Repl2I_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t! replicate2I(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl4I_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t! replicate4I(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
}
#endif
#ifndef PRODUCT
void Repl8I_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\t! replicate8I(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
}
#endif
#ifndef PRODUCT
void Repl2I_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\n\t");
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate2I");
}
#endif
#ifndef PRODUCT
void Repl4I_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\n\t");
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate4I");
}
#endif
#ifndef PRODUCT
void Repl8I_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\n\t");
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate8I");
}
#endif
#ifndef PRODUCT
void Repl2I_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("pxor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate2I");
}
#endif
#ifndef PRODUCT
void Repl4I_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("pxor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate4I zero)");
}
#endif
#ifndef PRODUCT
void Repl8I_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate8I zero");
}
#endif
#ifndef PRODUCT
void Repl2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movdq   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate2L");
}
#endif
#ifndef PRODUCT
void Repl4LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("movdq   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw("\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate4L");
}
#endif
#ifndef PRODUCT
void Repl2L_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate2L(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl4L_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// con
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",[");
  st->print("constant table base + #%d", constant_offset_unchecked());
  st->print_raw("]\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate4L(");
  opnd_array(1)->ext_format(ra, this,idx1, st); // con
  st->print_raw(")");
}
#endif
#ifndef PRODUCT
void Repl2L_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate2L");
}
#endif
#ifndef PRODUCT
void Repl4L_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// mem
  st->print_raw("movq    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // mem
  st->print_raw("\n\t");
  st->print_raw("punpcklqdq ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\n\t");
  st->print_raw("vinserti128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate4L");
}
#endif
#ifndef PRODUCT
void Repl2L_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("pxor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate2L zero");
}
#endif
#ifndef PRODUCT
void Repl4L_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate4L zero");
}
#endif
#ifndef PRODUCT
void Repl2FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate2F");
}
#endif
#ifndef PRODUCT
void Repl4FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",0x00\t! replicate4F");
}
#endif
#ifndef PRODUCT
void Repl8FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",0x00\n\t");
  st->print_raw("vinsertf128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate8F");
}
#endif
#ifndef PRODUCT
void Repl2F_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("xorps   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate2F zero");
}
#endif
#ifndef PRODUCT
void Repl4F_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("xorps   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate4F zero");
}
#endif
#ifndef PRODUCT
void Repl8F_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("vxorps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate8F zero");
}
#endif
#ifndef PRODUCT
void Repl2DNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",0x44\t! replicate2D");
}
#endif
#ifndef PRODUCT
void Repl4DNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  st->print_raw("pshufd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",0x44\n\t");
  st->print_raw("vinsertf128h ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate4D");
}
#endif
#ifndef PRODUCT
void Repl2D_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("xorpd   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw("\t! replicate2D zero");
}
#endif
#ifndef PRODUCT
void Repl4D_zeroNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// zero
  st->print_raw("vxorpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",vect256\t! replicate4D zero");
}
#endif
#ifndef PRODUCT
void vadd4BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("paddb   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed4B");
}
#endif
#ifndef PRODUCT
void vadd4B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed4B");
}
#endif
#ifndef PRODUCT
void vadd8BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("paddb   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed8B");
}
#endif
#ifndef PRODUCT
void vadd8B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed8B");
}
#endif
#ifndef PRODUCT
void vadd16BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("paddb   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed16B");
}
#endif
#ifndef PRODUCT
void vadd16B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed16B");
}
#endif
#ifndef PRODUCT
void vadd16B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpaddb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed16B");
}
#endif
#ifndef PRODUCT
void vadd32B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed32B");
}
#endif
#ifndef PRODUCT
void vadd32B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpaddb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed32B");
}
#endif
#ifndef PRODUCT
void vadd2SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("paddw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed2S");
}
#endif
#ifndef PRODUCT
void vadd2S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed2S");
}
#endif
#ifndef PRODUCT
void vadd4SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("paddw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed4S");
}
#endif
#ifndef PRODUCT
void vadd4S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed4S");
}
#endif
#ifndef PRODUCT
void vadd8SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("paddw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed8S");
}
#endif
#ifndef PRODUCT
void vadd8S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed8S");
}
#endif
#ifndef PRODUCT
void vadd8S_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpaddw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed8S");
}
#endif
#ifndef PRODUCT
void vadd16S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed16S");
}
#endif
#ifndef PRODUCT
void vadd16S_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpaddw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed16S");
}
#endif
#ifndef PRODUCT
void vadd2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("paddd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed2I");
}
#endif
#ifndef PRODUCT
void vadd2I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed2I");
}
#endif
#ifndef PRODUCT
void vadd4INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("paddd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed4I");
}
#endif
#ifndef PRODUCT
void vadd4I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed4I");
}
#endif
#ifndef PRODUCT
void vadd4I_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpaddd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed4I");
}
#endif
#ifndef PRODUCT
void vadd8I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed8I");
}
#endif
#ifndef PRODUCT
void vadd8I_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpaddd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed8I");
}
#endif
#ifndef PRODUCT
void vadd2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("paddq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed2L");
}
#endif
#ifndef PRODUCT
void vadd2L_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed2L");
}
#endif
#ifndef PRODUCT
void vadd2L_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpaddq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed2L");
}
#endif
#ifndef PRODUCT
void vadd4L_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpaddq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed4L");
}
#endif
#ifndef PRODUCT
void vadd4L_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpaddq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed4L");
}
#endif
#ifndef PRODUCT
void vadd2FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed2F");
}
#endif
#ifndef PRODUCT
void vadd2F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vaddps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed2F");
}
#endif
#ifndef PRODUCT
void vadd4FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed4F");
}
#endif
#ifndef PRODUCT
void vadd4F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vaddps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed4F");
}
#endif
#ifndef PRODUCT
void vadd4F_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vaddps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed4F");
}
#endif
#ifndef PRODUCT
void vadd8F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vaddps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed8F");
}
#endif
#ifndef PRODUCT
void vadd8F_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vaddps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed8F");
}
#endif
#ifndef PRODUCT
void vadd2DNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("addpd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! add packed2D");
}
#endif
#ifndef PRODUCT
void vadd2D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vaddpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed2D");
}
#endif
#ifndef PRODUCT
void vadd2D_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vaddpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed2D");
}
#endif
#ifndef PRODUCT
void vadd4D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vaddpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! add packed4D");
}
#endif
#ifndef PRODUCT
void vadd4D_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vaddpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! add packed4D");
}
#endif
#ifndef PRODUCT
void vsub4BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("psubb   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed4B");
}
#endif
#ifndef PRODUCT
void vsub4B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed4B");
}
#endif
#ifndef PRODUCT
void vsub8BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("psubb   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed8B");
}
#endif
#ifndef PRODUCT
void vsub8B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed8B");
}
#endif
#ifndef PRODUCT
void vsub16BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("psubb   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed16B");
}
#endif
#ifndef PRODUCT
void vsub16B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed16B");
}
#endif
#ifndef PRODUCT
void vsub16B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpsubb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed16B");
}
#endif
#ifndef PRODUCT
void vsub32B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed32B");
}
#endif
#ifndef PRODUCT
void vsub32B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpsubb  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed32B");
}
#endif
#ifndef PRODUCT
void vsub2SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("psubw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed2S");
}
#endif
#ifndef PRODUCT
void vsub2S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed2S");
}
#endif
#ifndef PRODUCT
void vsub4SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("psubw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed4S");
}
#endif
#ifndef PRODUCT
void vsub4S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed4S");
}
#endif
#ifndef PRODUCT
void vsub8SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("psubw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed8S");
}
#endif
#ifndef PRODUCT
void vsub8S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed8S");
}
#endif
#ifndef PRODUCT
void vsub8S_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpsubw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed8S");
}
#endif
#ifndef PRODUCT
void vsub16S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed16S");
}
#endif
#ifndef PRODUCT
void vsub16S_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpsubw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed16S");
}
#endif
#ifndef PRODUCT
void vsub2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("psubd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed2I");
}
#endif
#ifndef PRODUCT
void vsub2I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed2I");
}
#endif
#ifndef PRODUCT
void vsub4INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("psubd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed4I");
}
#endif
#ifndef PRODUCT
void vsub4I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed4I");
}
#endif
#ifndef PRODUCT
void vsub4I_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpsubd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed4I");
}
#endif
#ifndef PRODUCT
void vsub8I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed8I");
}
#endif
#ifndef PRODUCT
void vsub8I_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpsubd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed8I");
}
#endif
#ifndef PRODUCT
void vsub2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("psubq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed2L");
}
#endif
#ifndef PRODUCT
void vsub2L_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed2L");
}
#endif
#ifndef PRODUCT
void vsub2L_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpsubq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed2L");
}
#endif
#ifndef PRODUCT
void vsub4L_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpsubq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed4L");
}
#endif
#ifndef PRODUCT
void vsub4L_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpsubq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed4L");
}
#endif
#ifndef PRODUCT
void vsub2FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed2F");
}
#endif
#ifndef PRODUCT
void vsub2F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vsubps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed2F");
}
#endif
#ifndef PRODUCT
void vsub4FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed4F");
}
#endif
#ifndef PRODUCT
void vsub4F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vsubps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed4F");
}
#endif
#ifndef PRODUCT
void vsub4F_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vsubps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed4F");
}
#endif
#ifndef PRODUCT
void vsub8F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vsubps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed8F");
}
#endif
#ifndef PRODUCT
void vsub8F_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vsubps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed8F");
}
#endif
#ifndef PRODUCT
void vsub2DNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("subpd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! sub packed2D");
}
#endif
#ifndef PRODUCT
void vsub2D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vsubpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed2D");
}
#endif
#ifndef PRODUCT
void vsub2D_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vsubpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed2D");
}
#endif
#ifndef PRODUCT
void vsub4D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vsubpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! sub packed4D");
}
#endif
#ifndef PRODUCT
void vsub4D_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vsubpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! sub packed4D");
}
#endif
#ifndef PRODUCT
void vmul2SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pmullw ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! mul packed2S");
}
#endif
#ifndef PRODUCT
void vmul2S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpmullw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed2S");
}
#endif
#ifndef PRODUCT
void vmul4SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pmullw  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! mul packed4S");
}
#endif
#ifndef PRODUCT
void vmul4S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpmullw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed4S");
}
#endif
#ifndef PRODUCT
void vmul8SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pmullw  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! mul packed8S");
}
#endif
#ifndef PRODUCT
void vmul8S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpmullw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed8S");
}
#endif
#ifndef PRODUCT
void vmul8S_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpmullw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! mul packed8S");
}
#endif
#ifndef PRODUCT
void vmul16S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpmullw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed16S");
}
#endif
#ifndef PRODUCT
void vmul16S_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpmullw ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! mul packed16S");
}
#endif
#ifndef PRODUCT
void vmul2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pmulld  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! mul packed2I");
}
#endif
#ifndef PRODUCT
void vmul2I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpmulld ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed2I");
}
#endif
#ifndef PRODUCT
void vmul4INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pmulld  ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! mul packed4I");
}
#endif
#ifndef PRODUCT
void vmul4I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpmulld ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed4I");
}
#endif
#ifndef PRODUCT
void vmul4I_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpmulld ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! mul packed4I");
}
#endif
#ifndef PRODUCT
void vmul8I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpmulld ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed8I");
}
#endif
#ifndef PRODUCT
void vmul8I_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpmulld ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! mul packed8I");
}
#endif
#ifndef PRODUCT
void vmul2FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("mulps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! mul packed2F");
}
#endif
#ifndef PRODUCT
void vmul2F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vmulps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed2F");
}
#endif
#ifndef PRODUCT
void vmul4FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("mulps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! mul packed4F");
}
#endif
#ifndef PRODUCT
void vmul4F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vmulps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed4F");
}
#endif
#ifndef PRODUCT
void vmul4F_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vmulps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! mul packed4F");
}
#endif
#ifndef PRODUCT
void vmul8F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vmulps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed8F");
}
#endif
#ifndef PRODUCT
void vmul8F_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vmulps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! mul packed8F");
}
#endif
#ifndef PRODUCT
void vmul2DNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("mulpd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! mul packed2D");
}
#endif
#ifndef PRODUCT
void vmul2D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vmulpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed2D");
}
#endif
#ifndef PRODUCT
void vmul2D_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vmulpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! mul packed2D");
}
#endif
#ifndef PRODUCT
void vmul4D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vmulpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! mul packed4D");
}
#endif
#ifndef PRODUCT
void vmul4D_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vmulpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! mul packed4D");
}
#endif
#ifndef PRODUCT
void vdiv2FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("divps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! div packed2F");
}
#endif
#ifndef PRODUCT
void vdiv2F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vdivps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! div packed2F");
}
#endif
#ifndef PRODUCT
void vdiv4FNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("divps   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! div packed4F");
}
#endif
#ifndef PRODUCT
void vdiv4F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vdivps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! div packed4F");
}
#endif
#ifndef PRODUCT
void vdiv4F_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vdivps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! div packed4F");
}
#endif
#ifndef PRODUCT
void vdiv8F_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vdivps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! div packed8F");
}
#endif
#ifndef PRODUCT
void vdiv8F_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vdivps  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! div packed8F");
}
#endif
#ifndef PRODUCT
void vdiv2DNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("divpd   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! div packed2D");
}
#endif
#ifndef PRODUCT
void vdiv2D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vdivpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! div packed2D");
}
#endif
#ifndef PRODUCT
void vdiv2D_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vdivpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! div packed2D");
}
#endif
#ifndef PRODUCT
void vdiv4D_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vdivpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! div packed4D");
}
#endif
#ifndef PRODUCT
void vdiv4D_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vdivpd  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! div packed4D");
}
#endif
#ifndef PRODUCT
void vshiftcntNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cnt
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cnt
  st->print_raw("\t! load shift count");
}
#endif
#ifndef PRODUCT
void vshiftcnt_0Node::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// cnt
  st->print_raw("movd    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // cnt
  st->print_raw("\t! load shift count");
}
#endif
#ifndef PRODUCT
void vsll2SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psllw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2S");
}
#endif
#ifndef PRODUCT
void vsll2S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psllw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2S");
}
#endif
#ifndef PRODUCT
void vsll2S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2S");
}
#endif
#ifndef PRODUCT
void vsll2S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2S");
}
#endif
#ifndef PRODUCT
void vsll4SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psllw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4S");
}
#endif
#ifndef PRODUCT
void vsll4S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psllw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4S");
}
#endif
#ifndef PRODUCT
void vsll4S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4S");
}
#endif
#ifndef PRODUCT
void vsll4S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4S");
}
#endif
#ifndef PRODUCT
void vsll8SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psllw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed8S");
}
#endif
#ifndef PRODUCT
void vsll8S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psllw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed8S");
}
#endif
#ifndef PRODUCT
void vsll8S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed8S");
}
#endif
#ifndef PRODUCT
void vsll8S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed8S");
}
#endif
#ifndef PRODUCT
void vsll16S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed16S");
}
#endif
#ifndef PRODUCT
void vsll16S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed16S");
}
#endif
#ifndef PRODUCT
void vsll2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("pslld   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2I");
}
#endif
#ifndef PRODUCT
void vsll2I_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("pslld   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2I");
}
#endif
#ifndef PRODUCT
void vsll2I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpslld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2I");
}
#endif
#ifndef PRODUCT
void vsll2I_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpslld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2I");
}
#endif
#ifndef PRODUCT
void vsll4INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("pslld   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4I");
}
#endif
#ifndef PRODUCT
void vsll4I_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("pslld   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4I");
}
#endif
#ifndef PRODUCT
void vsll4I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpslld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4I");
}
#endif
#ifndef PRODUCT
void vsll4I_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpslld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4I");
}
#endif
#ifndef PRODUCT
void vsll8I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpslld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed8I");
}
#endif
#ifndef PRODUCT
void vsll8I_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpslld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed8I");
}
#endif
#ifndef PRODUCT
void vsll2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psllq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2L");
}
#endif
#ifndef PRODUCT
void vsll2L_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psllq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2L");
}
#endif
#ifndef PRODUCT
void vsll2L_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2L");
}
#endif
#ifndef PRODUCT
void vsll2L_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed2L");
}
#endif
#ifndef PRODUCT
void vsll4L_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4L");
}
#endif
#ifndef PRODUCT
void vsll4L_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsllq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! left shift packed4L");
}
#endif
#ifndef PRODUCT
void vsrl2SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrlw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2S");
}
#endif
#ifndef PRODUCT
void vsrl2S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrlw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2S");
}
#endif
#ifndef PRODUCT
void vsrl2S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2S");
}
#endif
#ifndef PRODUCT
void vsrl2S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2S");
}
#endif
#ifndef PRODUCT
void vsrl4SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrlw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4S");
}
#endif
#ifndef PRODUCT
void vsrl4S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrlw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4S");
}
#endif
#ifndef PRODUCT
void vsrl4S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4S");
}
#endif
#ifndef PRODUCT
void vsrl4S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4S");
}
#endif
#ifndef PRODUCT
void vsrl8SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrlw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed8S");
}
#endif
#ifndef PRODUCT
void vsrl8S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrlw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed8S");
}
#endif
#ifndef PRODUCT
void vsrl8S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed8S");
}
#endif
#ifndef PRODUCT
void vsrl8S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed8S");
}
#endif
#ifndef PRODUCT
void vsrl16S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed16S");
}
#endif
#ifndef PRODUCT
void vsrl16S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed16S");
}
#endif
#ifndef PRODUCT
void vsrl2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrld   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2I");
}
#endif
#ifndef PRODUCT
void vsrl2I_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrld   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2I");
}
#endif
#ifndef PRODUCT
void vsrl2I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2I");
}
#endif
#ifndef PRODUCT
void vsrl2I_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2I");
}
#endif
#ifndef PRODUCT
void vsrl4INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrld   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4I");
}
#endif
#ifndef PRODUCT
void vsrl4I_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrld   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4I");
}
#endif
#ifndef PRODUCT
void vsrl4I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4I");
}
#endif
#ifndef PRODUCT
void vsrl4I_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4I");
}
#endif
#ifndef PRODUCT
void vsrl8I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed8I");
}
#endif
#ifndef PRODUCT
void vsrl8I_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrld  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed8I");
}
#endif
#ifndef PRODUCT
void vsrl2LNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrlq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2L");
}
#endif
#ifndef PRODUCT
void vsrl2L_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrlq   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2L");
}
#endif
#ifndef PRODUCT
void vsrl2L_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2L");
}
#endif
#ifndef PRODUCT
void vsrl2L_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed2L");
}
#endif
#ifndef PRODUCT
void vsrl4L_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4L");
}
#endif
#ifndef PRODUCT
void vsrl4L_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrlq  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! logical right shift packed4L");
}
#endif
#ifndef PRODUCT
void vsra2SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psraw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed2S");
}
#endif
#ifndef PRODUCT
void vsra2S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psraw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed2S");
}
#endif
#ifndef PRODUCT
void vsra2S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsraw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed2S");
}
#endif
#ifndef PRODUCT
void vsra2S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsraw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed2S");
}
#endif
#ifndef PRODUCT
void vsra4SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psraw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed4S");
}
#endif
#ifndef PRODUCT
void vsra4S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psraw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed4S");
}
#endif
#ifndef PRODUCT
void vsra4S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsraw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed4S");
}
#endif
#ifndef PRODUCT
void vsra4S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsraw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed4S");
}
#endif
#ifndef PRODUCT
void vsra8SNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psraw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed8S");
}
#endif
#ifndef PRODUCT
void vsra8S_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psraw   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed8S");
}
#endif
#ifndef PRODUCT
void vsra8S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsraw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed8S");
}
#endif
#ifndef PRODUCT
void vsra8S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsraw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed8S");
}
#endif
#ifndef PRODUCT
void vsra16S_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsraw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed16S");
}
#endif
#ifndef PRODUCT
void vsra16S_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsraw  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed16S");
}
#endif
#ifndef PRODUCT
void vsra2INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrad   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed2I");
}
#endif
#ifndef PRODUCT
void vsra2I_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrad   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed2I");
}
#endif
#ifndef PRODUCT
void vsra2I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrad  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed2I");
}
#endif
#ifndef PRODUCT
void vsra2I_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrad  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed2I");
}
#endif
#ifndef PRODUCT
void vsra4INode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrad   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed4I");
}
#endif
#ifndef PRODUCT
void vsra4I_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("psrad   ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed4I");
}
#endif
#ifndef PRODUCT
void vsra4I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrad  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed4I");
}
#endif
#ifndef PRODUCT
void vsra4I_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrad  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed4I");
}
#endif
#ifndef PRODUCT
void vsra8I_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrad  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed8I");
}
#endif
#ifndef PRODUCT
void vsra8I_reg_immNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// shift
  st->print_raw("vpsrad  ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // shift
  st->print_raw("\t! arithmetic right shift packed8I");
}
#endif
#ifndef PRODUCT
void vand4BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pand    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! and vectors (4 bytes)");
}
#endif
#ifndef PRODUCT
void vand4B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpand   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! and vectors (4 bytes)");
}
#endif
#ifndef PRODUCT
void vand8BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pand    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! and vectors (8 bytes)");
}
#endif
#ifndef PRODUCT
void vand8B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpand   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! and vectors (8 bytes)");
}
#endif
#ifndef PRODUCT
void vand16BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pand    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! and vectors (16 bytes)");
}
#endif
#ifndef PRODUCT
void vand16B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpand   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! and vectors (16 bytes)");
}
#endif
#ifndef PRODUCT
void vand16B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpand   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! and vectors (16 bytes)");
}
#endif
#ifndef PRODUCT
void vand32B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpand   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! and vectors (32 bytes)");
}
#endif
#ifndef PRODUCT
void vand32B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpand   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! and vectors (32 bytes)");
}
#endif
#ifndef PRODUCT
void vor4BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("por     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! or vectors (4 bytes)");
}
#endif
#ifndef PRODUCT
void vor4B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! or vectors (4 bytes)");
}
#endif
#ifndef PRODUCT
void vor8BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("por     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! or vectors (8 bytes)");
}
#endif
#ifndef PRODUCT
void vor8B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! or vectors (8 bytes)");
}
#endif
#ifndef PRODUCT
void vor16BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("por     ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! or vectors (16 bytes)");
}
#endif
#ifndef PRODUCT
void vor16B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! or vectors (16 bytes)");
}
#endif
#ifndef PRODUCT
void vor16B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! or vectors (16 bytes)");
}
#endif
#ifndef PRODUCT
void vor32B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! or vectors (32 bytes)");
}
#endif
#ifndef PRODUCT
void vor32B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpor    ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! or vectors (32 bytes)");
}
#endif
#ifndef PRODUCT
void vxor4BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pxor    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! xor vectors (4 bytes)");
}
#endif
#ifndef PRODUCT
void vxor4B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! xor vectors (4 bytes)");
}
#endif
#ifndef PRODUCT
void vxor8BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pxor    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! xor vectors (8 bytes)");
}
#endif
#ifndef PRODUCT
void vxor8B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! xor vectors (8 bytes)");
}
#endif
#ifndef PRODUCT
void vxor16BNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// dst
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src
  st->print_raw("pxor    ");
  opnd_array(1)->ext_format(ra, this,idx1, st); // dst
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src
  st->print_raw("\t! xor vectors (16 bytes)");
}
#endif
#ifndef PRODUCT
void vxor16B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! xor vectors (16 bytes)");
}
#endif
#ifndef PRODUCT
void vxor16B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! xor vectors (16 bytes)");
}
#endif
#ifndef PRODUCT
void vxor32B_regNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 1;
  unsigned idx1 = 1; 	// src1
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// src2
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src1
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // src2
  st->print_raw("\t! xor vectors (32 bytes)");
}
#endif
#ifndef PRODUCT
void vxor32B_memNode::format(PhaseRegAlloc *ra, outputStream *st) const {
  // Start at oper_input_base() and count operands
  unsigned idx0 = 2;
  unsigned idx1 = 2; 	// src
  unsigned idx2 = idx1 + opnd_array(1)->num_edges(); 	// mem
  st->print_raw("vpxor   ");
  opnd_array(0)->int_format(ra, this, st); // dst
  st->print_raw(",");
  opnd_array(1)->ext_format(ra, this,idx1, st); // src
  st->print_raw(",");
  opnd_array(2)->ext_format(ra, this,idx2, st); // mem
  st->print_raw("\t! xor vectors (32 bytes)");
}
#endif
// Check consistency of C++ compilation with ADLC options:
// Check adlc -D_LP64=1
#ifndef _LP64
#  error "_LP64 must be defined"
#endif // _LP64
