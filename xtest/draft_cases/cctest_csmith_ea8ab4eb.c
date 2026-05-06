// SPDX-License-Identifier: MIT
// cctest_csmith_ea8ab4eb.c --- cctest case csmith_ea8ab4eb (csmith seed 3934958827)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6f3d95c0 */

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

// Options:   -s 3934958827 -o /tmp/csmith_gen_5rr3cxg3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 20;
   int64_t  f1;
   unsigned f2 : 11;
};
#pragma pack(pop)

union U1 {
   const int16_t  f0;
   int32_t  f1;
};


static uint32_t g_2[1] = {18446744073709551615UL};
static uint32_t g_3 = 0xF7A73D2DL;
static uint32_t g_19 = 1UL;
static struct S0 g_24 = {919,6L,10};
static int32_t g_42 = 0xC64E719BL;
static uint16_t g_43 = 0x7DD7L;
static uint32_t g_46 = 4294967295UL;
static uint64_t g_68 = 2UL;
static uint8_t g_96 = 0UL;
static uint64_t g_105 = 9UL;
static uint64_t g_106[5][4][2] = {{{1UL,0x8C926BDC2D20EAE7LL},{1UL,0x8C926BDC2D20EAE7LL},{1UL,1UL},{6UL,18446744073709551615UL}},{{0xDA97B9B40DC3605ALL,0xDEA925521BE81B99LL},{0x7CA884A184624230LL,3UL},{0x8C926BDC2D20EAE7LL,0x7CA884A184624230LL},{0UL,0xE285A49BCD9968C9LL}},{{0UL,0x7CA884A184624230LL},{0x8C926BDC2D20EAE7LL,3UL},{0x7CA884A184624230LL,0xDEA925521BE81B99LL},{0xDA97B9B40DC3605ALL,18446744073709551615UL}},{{6UL,1UL},{1UL,0x8C926BDC2D20EAE7LL},{1UL,0x8C926BDC2D20EAE7LL},{1UL,1UL}},{{6UL,18446744073709551615UL},{0xDA97B9B40DC3605ALL,0xDEA925521BE81B99LL},{0x7CA884A184624230LL,3UL},{0x8C926BDC2D20EAE7LL,0x7CA884A184624230LL}}};
static int16_t g_130 = 1L;
static uint32_t g_148 = 0xE7FF35BAL;
static int32_t g_180 = 0xB2B9424DL;
static int64_t g_188[1] = {0x757E1CA6CF425122LL};
static int8_t g_189 = (-10L);
static int8_t g_190 = 0xCAL;
static int64_t g_191 = 0xFCDEF65FC756C3DFLL;
static uint32_t g_193[4][2] = {{0xFE831DD9L,0xFE831DD9L},{0xFE831DD9L,0xFE831DD9L},{0xFE831DD9L,0xFE831DD9L},{0xFE831DD9L,0xFE831DD9L}};
static uint32_t g_196 = 0x35F48295L;
static uint64_t g_260 = 0x0957DB2F87FCB53BLL;



static int16_t  func_1(void);
static int8_t  func_22(struct S0  p_23);
static uint16_t  func_27(int32_t  p_28, struct S0  p_29, int16_t  p_30, int16_t  p_31, uint16_t  p_32);
static int16_t  func_34(union U1  p_35, union U1  p_36, struct S0  p_37, int32_t  p_38, uint8_t  p_39);




static int16_t  func_1(void)
{ 
    int32_t l_8 = 0xDDCD1665L;
    int32_t l_17 = 0x96753F3AL;
    int32_t l_18 = (-1L);
    struct S0 l_110 = {208,-5L,20};
    uint64_t l_124 = 0x1B320E232A7A6E09LL;
    const uint8_t l_187 = 0x9DL;
    uint32_t l_229 = 18446744073709551615UL;
    int32_t l_237 = 0x1B8DCB77L;
    int32_t l_238 = 0x2987EEEAL;
    uint32_t l_243[4][3][5] = {{{1UL,1UL,3UL,0x982DFFE4L,0x71D09A1BL},{0xBDA32A21L,18446744073709551615UL,18446744073709551615UL,0xBDA32A21L,0x982DFFE4L},{1UL,0x17B0AFA0L,18446744073709551615UL,0x9FF0D58FL,0x982DFFE4L}},{{18446744073709551615UL,1UL,0x71D09A1BL,0x31CF85E0L,0x71D09A1BL},{0x31CF85E0L,0x31CF85E0L,0x982DFFE4L,0x9FF0D58FL,18446744073709551615UL},{5UL,1UL,0x982DFFE4L,0xBDA32A21L,18446744073709551615UL}},{{3UL,0x982DFFE4L,0x71D09A1BL,0x982DFFE4L,3UL},{0x9FF0D58FL,1UL,18446744073709551615UL,3UL,0x31CF85E0L},{0x9FF0D58FL,0x31CF85E0L,18446744073709551615UL,0x17B0AFA0L,0x17B0AFA0L}},{{3UL,1UL,3UL,1UL,0x31CF85E0L},{5UL,0x17B0AFA0L,0x31CF85E0L,1UL,3UL},{0x31CF85E0L,18446744073709551615UL,0x17B0AFA0L,0x17B0AFA0L,18446744073709551615UL}}};
    int i, j, k;
    if (g_2[0])
    { 
        uint32_t l_11 = 18446744073709551612UL;
        int32_t l_16 = 0x34BDAC84L;
lbl_87:
        g_3 = (-1L);
        if (((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((l_8 |= (0x7EL || 0x24L)), (safe_add_func_int16_t_s_s(l_11, l_11)))), g_2[0])) > l_11))
        { 
            int8_t l_71 = 0x61L;
            if ((l_11 > (safe_mul_func_int16_t_s_s(g_2[0], (safe_rshift_func_uint8_t_u_s((g_19--), func_22(g_24)))))))
            { 
                int64_t l_51 = 0xA03083361826471BLL;
                int32_t l_86 = 0x16B7C5EFL;
                g_68 |= ((l_51 == ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_24.f0 != ((g_19 = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(g_19, (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(254UL, g_46)) == 0x2634L), 0xF4L)), l_8)))), 5)), l_17))) ^ g_43)), 6)), g_42)) != 0x330FL)) ^ 0x26EBB4DFL);
                l_86 = ((l_51 ^ (safe_div_func_uint16_t_u_u((++g_43), g_2[0]))) || ((safe_add_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((((((safe_div_func_uint8_t_u_u(g_46, (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(3L, g_19)), l_11)), 0xEEL)))) <= l_16) , g_24.f2) >= g_19) & 4294967292UL), l_8)) ^ g_2[0]), l_8)) != g_2[0]));
            }
            else
            { 
                if (g_43)
                    goto lbl_87;
            }
            g_105 = ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_16 = (safe_add_func_uint8_t_u_u(g_24.f0, (g_96--)))), (((((((safe_add_func_int16_t_s_s(0xB3ADL, g_24.f1)) && ((safe_mul_func_uint8_t_u_u(l_11, 7UL)) != l_71)) > l_71) | 0x8CL) & g_24.f1) <= 1UL) , l_8))), g_3)) , l_18), l_11)) >= g_46);
        }
        else
        { 
            g_106[1][3][0]--;
        }
    }
    else
    { 
        int8_t l_109 = 1L;
        uint32_t l_121 = 1UL;
        const int16_t l_122 = (-5L);
        uint8_t l_123 = 0UL;
        int32_t l_129 = 0L;
        const union U1 l_146 = {-6L};
        struct S0 l_153 = {316,0L,19};
        int32_t l_156 = 1L;
        int32_t l_192 = 0x9FCEEBA0L;
        l_109 = (l_18 = 0xBF81B78FL);
        l_110 = l_110;
        if ((((l_110.f0 < ((0L | (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(0UL, (l_123 = ((safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s(((safe_add_func_int8_t_s_s(l_121, (-1L))) == l_18), g_2[0])), l_122)) == g_24.f2)))) <= 0x5DL), g_3))) || g_24.f0)) >= l_124) != l_109))
        { 
            struct S0 l_127 = {927,1L,7};
            int32_t l_147[4][1];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_147[i][j] = 1L;
            }
            for (g_43 = 0; (g_43 > 23); ++g_43)
            { 
                uint16_t l_128[1][1][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_128[i][j][k] = 65529UL;
                    }
                }
                g_130 |= (((g_24 = l_127) , g_2[0]) < (((l_129 = (l_128[0][0][0] && 4294967292UL)) < l_122) ^ g_106[0][0][0]));
                g_148 = (~((((l_128[0][0][0] <= (safe_div_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((l_127.f2 <= ((safe_rshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(l_127.f0, (l_146 , (-7L)))), 2L)) , 0xB6E0F727L), l_147[1][0])) != 0x78BCCA947FBA1F43LL) > l_129), 7)) != l_128[0][0][0])) ^ g_106[2][3][0]), l_109)), l_121)) > g_43) ^ 1UL), l_128[0][0][0]))) , 3L) , 0x5E917A82L) | g_42));
            }
            l_17 = (-1L);
            l_156 ^= ((safe_sub_func_int32_t_s_s((l_129 = (((((safe_add_func_uint8_t_u_u(l_122, (0x433C1653A522D215LL > (l_153 , (((safe_div_func_int32_t_s_s((((l_127.f2 == g_3) == g_2[0]) || l_147[1][0]), g_148)) <= l_127.f0) ^ l_18))))) <= l_127.f0) == l_127.f2) > g_43) == g_106[0][3][1])), l_127.f1)) >= g_46);
        }
        else
        { 
            int32_t l_167 = 0x1FB0B435L;
            struct S0 l_199[3][4] = {{{680,-8L,4},{680,-8L,4},{680,-8L,4},{680,-8L,4}},{{680,-8L,4},{680,-8L,4},{680,-8L,4},{680,-8L,4}},{{680,-8L,4},{680,-8L,4},{680,-8L,4},{680,-8L,4}}};
            int i, j;
            if ((safe_div_func_uint8_t_u_u(((l_17 = g_24.f1) == (((((((((safe_add_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((l_110.f1 ^ ((g_43 , l_167) < g_105)), g_105)) != 0xDB3DL), 5)) <= g_43) || g_24.f1), l_167)) , (-1L)) , g_3) >= g_19) || l_167) >= g_2[0]) == l_110.f1) , 1UL) & 0xAEFA70C1663C647CLL)), l_153.f0)))
            { 
                l_167 = (g_68 > (safe_mul_func_int8_t_s_s(g_24.f2, ((safe_sub_func_int8_t_s_s(g_24.f0, ((g_24 , l_124) <= g_3))) == g_148))));
            }
            else
            { 
                uint8_t l_175 = 0x4DL;
                l_153 = ((l_129 >= ((((safe_add_func_uint32_t_u_u((1UL < (((l_110.f2 && ((!l_175) | g_24.f2)) == 7UL) , l_175)), g_46)) >= 0xDC449269L) , l_167) < 0x029B2269D596B0A2LL)) , g_24);
            }
            if ((g_180 = (safe_div_func_uint16_t_u_u(l_122, (255UL ^ ((safe_rshift_func_uint16_t_u_u(g_105, 13)) != (g_24.f2 < g_24.f2)))))))
            { 
                uint16_t l_186 = 0xAD57L;
                g_180 = ((g_24.f0 >= l_167) , ((safe_mul_func_int8_t_s_s((((((g_43 = (~(l_18 = (((safe_sub_func_int32_t_s_s(l_17, l_186)) | g_43) > g_106[1][3][0])))) > (-1L)) <= 0xE263L) && 0x5322E483L) | 6UL), l_187)) != 0x6FL));
                g_193[1][1]++;
            }
            else
            { 
                ++g_196;
                l_199[0][3] = (g_24 = l_199[2][3]);
            }
        }
    }
    if ((((0x86554C541F32220CLL ^ (0x775A945BL < (safe_lshift_func_int16_t_s_s((-6L), 0)))) | l_110.f2) >= 8L))
    { 
        struct S0 l_204 = {954,0xF08772C455D1EC57LL,8};
        for (l_18 = 0; (l_18 != (-2)); l_18--)
        { 
            l_110 = l_204;
            g_180 ^= (l_110.f2 == 1L);
            g_180 = 0L;
        }
        l_18 = ((safe_rshift_func_int8_t_s_u((((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_mod_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_110.f2, 12)), 5)) == (((safe_add_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_204.f1, (-1L))), g_148)) > l_204.f0), g_68)), g_19)), l_110.f1)) , l_229) != l_8) || l_187), 0x68C4L)) >= g_46) <= 0xA25EF8F92758EFBCLL)) | 0x5FL), g_43)) > g_2[0]) != 0xCEB613B6L), l_17)), g_24.f2)) >= 1UL) | g_19), l_204.f2)) <= g_19);
    }
    else
    { 
        uint16_t l_230 = 0xD7E4L;
        uint8_t l_231 = 4UL;
        l_230 = l_18;
        l_231--;
    }
    if (((g_180 = 0x3B77AA8EL) != (safe_add_func_uint16_t_u_u(((g_190 , (safe_unary_minus_func_uint16_t_u((l_237 , 65535UL)))) == l_238), g_96))))
    { 
        const uint8_t l_247[4][4][1] = {{{252UL},{252UL},{252UL},{0x96L}},{{252UL},{252UL},{252UL},{0x96L}},{{252UL},{252UL},{252UL},{0x96L}},{{252UL},{252UL},{252UL},{0x96L}}};
        int32_t l_250 = 0xF9110C65L;
        int i, j, k;
        g_180 |= (((0x7784L || (0x5EA7L <= (safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s((g_193[1][1] == (((g_24 , 0x35L) <= g_2[0]) == 0xB931DBADL)), g_24.f0)), l_187)))) && 1L) == l_243[3][0][2]);
        l_250 ^= (0UL && (l_110 , (((safe_unary_minus_func_int64_t_s((((safe_rshift_func_uint16_t_u_s(l_247[0][3][0], 11)) , (safe_div_func_int8_t_s_s(1L, l_247[0][3][0]))) , l_237))) <= g_3) <= l_243[3][0][1])));
        l_237 = (g_46 != ((safe_div_func_int16_t_s_s((l_17 ^= (safe_mod_func_uint16_t_u_u(g_24.f0, (safe_add_func_int64_t_s_s(0xA31379AC75BEA6F7LL, ((g_19 == l_247[1][1][0]) != (-8L))))))), 65530UL)) >= l_247[0][3][0]));
    }
    else
    { 
        uint16_t l_257 = 65527UL;
        int32_t l_258 = 0x82926638L;
        int32_t l_259 = 1L;
        l_257 = g_196;
        ++g_260;
    }
    return g_3;
}



static int8_t  func_22(struct S0  p_23)
{ 
    struct S0 l_33 = {857,0L,0};
    union U1 l_40 = {-3L};
    int32_t l_50[4][1][3] = {{{(-1L),0x6A093958L,(-1L)}},{{(-1L),0x6A093958L,(-1L)}},{{(-1L),0x6A093958L,(-1L)}},{{(-1L),0x6A093958L,(-1L)}}};
    int i, j, k;
    l_50[3][0][2] &= ((safe_sub_func_uint16_t_u_u(func_27(g_2[0], l_33, func_34(l_40, l_40, g_24, p_23.f1, g_2[0]), p_23.f1, g_24.f1), 0x177CL)) > g_24.f0);
    return g_24.f2;
}



static uint16_t  func_27(int32_t  p_28, struct S0  p_29, int16_t  p_30, int16_t  p_31, uint16_t  p_32)
{ 
    int32_t l_49[1];
    int i;
    for (i = 0; i < 1; i++)
        l_49[i] = 6L;
    for (p_30 = 0; (p_30 >= 0); p_30 -= 1)
    { 
        int i;
        if (l_49[p_30])
            break;
    }
    return p_29.f0;
}



static int16_t  func_34(union U1  p_35, union U1  p_36, struct S0  p_37, int32_t  p_38, uint8_t  p_39)
{ 
    int64_t l_41[3][5] = {{0L,0L,0L,0L,0L},{0x600EBE663439FCB6LL,0x41536C745D07A051LL,0x600EBE663439FCB6LL,0x41536C745D07A051LL,0x600EBE663439FCB6LL},{0L,0L,0L,0L,0L}};
    int i, j;
    for (p_39 = 0; (p_39 <= 2); p_39 += 1)
    { 
        ++g_43;
        --g_46;
        return l_41[1][3];
    }
    return l_41[2][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_106[i][j][k], "g_106[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_188[i], "g_188[i]", print_hash_value);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_193[i][j], "g_193[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
