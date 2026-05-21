// SPDX-License-Identifier: MIT
// cctest_csmith_c95fa885.c --- cctest case csmith_c95fa885 (csmith seed 3378489477)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xefe35c1e */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 3378489477 -o /tmp/csmith_gen_oe7maaei/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
   int16_t  f1;
};

struct S1 {
   uint64_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int32_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

union U3 {
   uint8_t  f0;
};


static int32_t g_2[3][1][4] = {{{0xAD2086BDL,0x0E6DA504L,0xAD2086BDL,0xAD2086BDL}},{{0x0E6DA504L,0x0E6DA504L,0x9E53E58BL,0x0E6DA504L}},{{0x0E6DA504L,0xAD2086BDL,0xAD2086BDL,0x0E6DA504L}}};
static int8_t g_3 = (-1L);
static int32_t g_4[2][3] = {{0x2A26F3F1L,0x2A26F3F1L,0x2A26F3F1L},{0x2A26F3F1L,0x2A26F3F1L,0x2A26F3F1L}};
static struct S2 g_35[5][4] = {{{-10L,-6L,0x4C655EF1L,-5L,0x125954A4L},{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL},{-10L,-6L,0x4C655EF1L,-5L,0x125954A4L},{-10L,-6L,0x4C655EF1L,-5L,0x125954A4L}},{{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL},{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL},{-1L,0x5505F459L,1UL,8L,0x6066FA41L},{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL}},{{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL},{-10L,-6L,0x4C655EF1L,-5L,0x125954A4L},{-10L,-6L,0x4C655EF1L,-5L,0x125954A4L},{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL}},{{-10L,-6L,0x4C655EF1L,-5L,0x125954A4L},{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL},{-10L,-6L,0x4C655EF1L,-5L,0x125954A4L},{-10L,-6L,0x4C655EF1L,-5L,0x125954A4L}},{{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL},{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL},{-1L,0x5505F459L,1UL,8L,0x6066FA41L},{9L,0xF236BBBDL,0x8A218178L,-1L,0x4174AA7FL}}};
static int64_t g_42 = 0L;
static uint32_t g_47 = 0xBA9E7339L;
static struct S1 g_58 = {18446744073709551611UL};
static struct S0 g_60 = {0L,0x2B6CL};
static uint16_t g_88 = 0x1BB8L;
static int8_t g_95 = 0xF2L;



static int8_t  func_1(void);
static struct S1  func_6(struct S1  p_7, const int32_t  p_8, const int32_t  p_9);
static struct S1  func_10(const int32_t  p_11, uint8_t  p_12, uint32_t  p_13, uint16_t  p_14);
static uint8_t  func_15(const uint64_t  p_16, const uint32_t  p_17);




static int8_t  func_1(void)
{ 
    const int32_t l_18 = 7L;
    struct S1 l_91 = {0xDE158D97F9692DCFLL};
    g_3 = g_2[0][0][1];
    g_4[1][0] = 0x2B21A35CL;
    if (g_2[0][0][2])
    { 
        int8_t l_5 = 1L;
        l_5 |= 9L;
        for (g_3 = 0; (g_3 <= 1); g_3 += 1)
        { 
            int8_t l_20[4] = {9L,9L,9L,9L};
            int8_t l_94 = 0x37L;
            int i;
            l_91 = func_6(func_10(g_4[1][0], g_2[0][0][2], (func_15((0x52A2L ^ (l_18 != l_18)), g_4[1][0]) < l_5), l_20[2]), g_3, l_18);
            for (g_42 = 1; (g_42 >= 0); g_42 -= 1)
            { 
                int i, j;
                if (l_5)
                    break;
                g_4[g_3][g_3] = (0x43FBE49ECA5129FFLL != (l_5 , ((l_20[2] >= ((g_95 = l_94) != l_91.f0)) <= l_91.f0)));
                g_60 = g_60;
            }
        }
    }
    else
    { 
        return l_18;
    }
    return g_35[4][3].f1;
}



static struct S1  func_6(struct S1  p_7, const int32_t  p_8, const int32_t  p_9)
{ 
    int8_t l_87 = 1L;
    struct S1 l_90 = {18446744073709551615UL};
    for (p_7.f0 = (-10); (p_7.f0 >= 49); p_7.f0 = safe_add_func_uint32_t_u_u(p_7.f0, 7))
    { 
        int32_t l_77 = 3L;
        int32_t l_89 = (-1L);
        l_89 = (((p_7 , (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_77 = (safe_rshift_func_uint8_t_u_s(g_35[4][3].f4, 2))), 3)), 1))) , (!(safe_lshift_func_uint8_t_u_u((g_88 = ((safe_div_func_uint32_t_u_u((0xC20A8E5FL > (((safe_lshift_func_int8_t_s_u((((((safe_sub_func_uint64_t_u_u(p_9, 0x4CC67FDB7285802ELL)) , l_87) ^ p_8) != l_77) != g_35[4][3].f3), l_87)) > l_87) == g_35[4][3].f4)), p_7.f0)) ^ 18446744073709551611UL)), p_8)))) >= g_60.f1);
        g_4[1][0] = (-5L);
        if (p_8)
            continue;
    }
    return l_90;
}



static struct S1  func_10(const int32_t  p_11, uint8_t  p_12, uint32_t  p_13, uint16_t  p_14)
{ 
    int64_t l_21 = 0x935FF57440E708BELL;
    uint32_t l_24 = 0UL;
    uint64_t l_29 = 18446744073709551607UL;
    struct S2 l_34 = {0xCE85DC32L,0x75278539L,8UL,0xDC7E9069L,0x02FCE4A8L};
    struct S0 l_43[3][4][5] = {{{{1L,1L},{0L,0x6633L},{0L,0L},{0L,0L},{0L,0x6633L}},{{-1L,7L},{0L,1L},{0xC4L,0xBB7FL},{0L,1L},{-1L,7L}},{{0L,0x6633L},{0L,0L},{0L,0L},{0L,0x6633L},{1L,1L}},{{0x76L,1L},{0L,1L},{0x76L,1L},{-1L,6L},{0x76L,1L}}},{{{0L,0x6633L},{0L,0x6633L},{0x76L,0xCD51L},{0L,0L},{1L,1L}},{{-1L,7L},{-1L,6L},{0xC4L,0xBB7FL},{-1L,6L},{-1L,7L}},{{1L,1L},{0L,0L},{0x76L,0xCD51L},{0L,0x6633L},{0L,0x6633L}},{{0x76L,1L},{-1L,6L},{0x76L,1L},{0L,1L},{0x76L,1L}}},{{{1L,1L},{0L,0x6633L},{0L,0L},{0L,0L},{0L,0x6633L}},{{-1L,7L},{0L,1L},{0xC4L,0xBB7FL},{0L,1L},{-1L,7L}},{{0L,0x6633L},{0L,0L},{0L,0L},{0L,0x6633L},{1L,1L}},{{0x76L,1L},{0L,1L},{0x76L,1L},{-1L,6L},{0x76L,1L}}}};
    union U3 l_52 = {6UL};
    uint8_t l_55 = 0xABL;
    struct S1 l_59 = {18446744073709551607UL};
    int i, j, k;
    g_4[1][0] = l_21;
    if (((safe_div_func_uint32_t_u_u((l_24 != (l_21 || (++p_14))), p_13)) >= (((((((safe_div_func_uint16_t_u_u(0x9A27L, g_4[1][0])) == 0x69L) | p_12) | g_3) ^ l_29) > l_29) & g_4[0][0])))
    { 
        struct S0 l_44 = {1L,0x8558L};
        uint16_t l_56[2][2][3] = {{{0xF258L,0xF258L,0xF258L},{65535UL,65535UL,65535UL}},{{0xF258L,0xF258L,0xF258L},{65535UL,65535UL,65535UL}}};
        int i, j, k;
        l_44 = ((safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s((((g_35[4][3] = l_34) , (~(safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_21, 1)), (g_42 = (!l_34.f3)))))) || ((p_12 == g_35[4][3].f4) ^ 0x01FF3C8D209D0817LL)), g_2[0][0][1])), 0x979B9986219E2060LL)) , l_43[0][3][1]);
        if ((safe_mod_func_int32_t_s_s(((--g_47) <= (((safe_lshift_func_int8_t_s_s((l_52 , l_34.f4), ((p_12 && ((safe_add_func_uint8_t_u_u((((((((l_34 , g_4[1][0]) ^ 0UL) , (-10L)) <= 0x02L) ^ l_55) == (-1L)) >= p_11), 0xF2L)) > p_13)) ^ 0xD3L))) <= 0x9B22F2C8L) , p_13)), l_56[1][0][2])))
        { 
            struct S1 l_57 = {0UL};
            g_58 = l_57;
        }
        else
        { 
            l_59 = g_58;
            g_4[1][0] = p_11;
        }
    }
    else
    { 
        uint32_t l_65[2];
        struct S1 l_68 = {8UL};
        int i;
        for (i = 0; i < 2; i++)
            l_65[i] = 0UL;
        g_60 = l_43[1][0][2];
        for (p_12 = 0; (p_12 <= 8); p_12 = safe_add_func_int32_t_s_s(p_12, 1))
        { 
            l_34.f0 |= (safe_sub_func_int32_t_s_s(g_4[1][0], (l_34.f1 = l_65[1])));
            for (l_21 = 29; (l_21 != (-20)); l_21--)
            { 
                return l_68;
            }
        }
    }
    return g_58;
}



static uint8_t  func_15(const uint64_t  p_16, const uint32_t  p_17)
{ 
    uint32_t l_19 = 0x4F63ABEFL;
    l_19 = 6L;
    return l_19;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_35[i][j].f0, "g_35[i][j].f0", print_hash_value);
            transparent_crc(g_35[i][j].f1, "g_35[i][j].f1", print_hash_value);
            transparent_crc(g_35[i][j].f2, "g_35[i][j].f2", print_hash_value);
            transparent_crc(g_35[i][j].f3, "g_35[i][j].f3", print_hash_value);
            transparent_crc(g_35[i][j].f4, "g_35[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
