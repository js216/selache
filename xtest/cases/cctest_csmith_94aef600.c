// SPDX-License-Identifier: MIT
// cctest_csmith_94aef600.c --- cctest case csmith_94aef600 (csmith seed 2494494208)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x140139a4 */

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

// Options:   -s 2494494208 -o /tmp/csmith_gen_lon2t1nc/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   const struct S0  f1;
   const uint64_t  f2;
   int64_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

struct S2 {
   int16_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   int32_t  f3;
   struct S1  f4;
};

struct S3 {
   int16_t  f0;
   uint32_t  f1;
};

union U4 {
   uint32_t  f0;
};

union U5 {
   uint16_t  f0;
   int32_t  f1;
   const uint64_t  f2;
};


static struct S1 g_18 = {0L,{1UL},0xDBCABEBF3B8CFF26LL,0xF9031EA0627E80A7LL,0x6DD3ED23L};
static struct S3 g_43[4][2] = {{{0xCEC8L,4294967295UL},{0x1EFCL,0x9FA237FFL}},{{0x1EFCL,0x9FA237FFL},{0xCEC8L,4294967295UL}},{{0x1EFCL,0x9FA237FFL},{0x1EFCL,0x9FA237FFL}},{{0xCEC8L,4294967295UL},{0x1EFCL,0x9FA237FFL}}};
static int32_t g_44 = 1L;
static int32_t g_52[2][1] = {{(-1L)},{(-1L)}};
static struct S2 g_57 = {0x24F1L,18446744073709551608UL,0xB495AE89L,0x6D542D3FL,{0xCC82L,{0x221BL},6UL,1L,-3L}};
static uint32_t g_85[4][2] = {{0x65D98765L,0x65D98765L},{0x65D98765L,0x65D98765L},{0x65D98765L,0x65D98765L},{0x65D98765L,0x65D98765L}};
static uint64_t g_101 = 0xDD0EBFA9BDD0B693LL;
static struct S2 g_106[3][3] = {{{-3L,0xDA28E2A2L,0UL,0L,{0xFC3DL,{0UL},18446744073709551608UL,0xC4757C61DA5914D9LL,1L}},{-3L,0xDA28E2A2L,0UL,0L,{0xFC3DL,{0UL},18446744073709551608UL,0xC4757C61DA5914D9LL,1L}},{-3L,0xDA28E2A2L,0UL,0L,{0xFC3DL,{0UL},18446744073709551608UL,0xC4757C61DA5914D9LL,1L}}},{{-3L,0xDA28E2A2L,0UL,0L,{0xFC3DL,{0UL},18446744073709551608UL,0xC4757C61DA5914D9LL,1L}},{-3L,0xDA28E2A2L,0UL,0L,{0xFC3DL,{0UL},18446744073709551608UL,0xC4757C61DA5914D9LL,1L}},{-3L,0xDA28E2A2L,0UL,0L,{0xFC3DL,{0UL},18446744073709551608UL,0xC4757C61DA5914D9LL,1L}}},{{-3L,0xDA28E2A2L,0UL,0L,{0xFC3DL,{0UL},18446744073709551608UL,0xC4757C61DA5914D9LL,1L}},{-3L,0xDA28E2A2L,0UL,0L,{0xFC3DL,{0UL},18446744073709551608UL,0xC4757C61DA5914D9LL,1L}},{-3L,0xDA28E2A2L,0UL,0L,{0xFC3DL,{0UL},18446744073709551608UL,0xC4757C61DA5914D9LL,1L}}}};
static struct S0 g_118 = {0x379EL};
static uint8_t g_128 = 255UL;
static int32_t g_130 = 0x3F27325EL;
static uint32_t g_154[4] = {0xA05F2A7CL,0xA05F2A7CL,0xA05F2A7CL,0xA05F2A7CL};
static int32_t g_185[4] = {(-1L),(-1L),(-1L),(-1L)};
static uint8_t g_186 = 9UL;
static int32_t g_220 = 0x74C872E6L;
static union U5 g_236 = {1UL};
static int16_t g_248 = 0x1F42L;
static uint32_t g_249 = 0UL;
static int8_t g_263 = 1L;
static const int32_t g_266[2] = {0xFF069DA9L,0xFF069DA9L};



static uint32_t  func_1(void);
static uint64_t  func_10(union U5  p_11, struct S3  p_12, struct S2  p_13);
static union U5  func_14(struct S1  p_15, uint32_t  p_16, const uint32_t  p_17);
static const uint32_t  func_19(uint32_t  p_20, const struct S0  p_21, uint16_t  p_22);




static uint32_t  func_1(void)
{ 
    uint16_t l_2 = 65535UL;
    struct S3 l_105 = {0x5CE2L,0x74B05BB3L};
    int64_t l_129 = (-6L);
    uint32_t l_134 = 18446744073709551615UL;
    struct S0 l_157[1][2] = {{{65526UL},{65526UL}}};
    uint32_t l_159 = 0x4BFFE456L;
    int32_t l_167[4][2][3] = {{{(-9L),(-9L),0xA7A1799DL},{0xB88D7C33L,3L,3L}},{{0xA7A1799DL,(-9L),0xE872CB33L},{0xFDF52C73L,0x217DE881L,0xFDF52C73L}},{{0xA7A1799DL,(-4L),0xE872CB33L},{3L,3L,0xB88D7C33L}},{{0x7625D64DL,(-4L),(-4L)},{0xB88D7C33L,0x217DE881L,0x38AAF256L}}};
    union U4 l_171 = {0x35A1D51EL};
    int16_t l_184[2][1];
    uint32_t l_198 = 0x3B6CD964L;
    uint8_t l_200[3];
    uint8_t l_222[1];
    int16_t l_225[1][2][2];
    const uint64_t l_244 = 0UL;
    int64_t l_262 = (-5L);
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_184[i][j] = (-5L);
    }
    for (i = 0; i < 3; i++)
        l_200[i] = 0x9CL;
    for (i = 0; i < 1; i++)
        l_222[i] = 8UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_225[i][j][k] = 8L;
        }
    }
    ++l_2;
    g_130 ^= (safe_lshift_func_uint16_t_u_s(0xFE64L, ((!(((safe_mod_func_uint64_t_u_u(func_10(func_14(g_18, g_18.f4, func_19(g_18.f0, g_18.f1, g_18.f0)), l_105, g_106[2][0]), l_105.f1)) || 0xB0L) == l_129)) & 1L)));
    if (((((g_118.f0 = ((safe_rshift_func_uint8_t_u_s(((l_105.f0 <= l_105.f0) == (((+(l_105 , g_57.f1)) <= g_57.f2) , l_105.f1)), 0)) ^ g_85[0][1])) == 0x0889L) >= l_134) == l_105.f1))
    { 
        const uint64_t l_153[1] = {1UL};
        uint8_t l_155[1][2];
        struct S0 l_158[3] = {{0xF7C5L},{0xF7C5L},{0xF7C5L}};
        int8_t l_168 = 0x7AL;
        int32_t l_172 = 0x500355CFL;
        struct S2 l_217 = {0x5DDEL,0x77BE777DL,0xB8EC8C7DL,1L,{0xB79EL,{65533UL},0UL,-9L,1L}};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_155[i][j] = 0xC8L;
        }
lbl_160:
        if ((g_57.f3 = ((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((0x436573C08D31AF41LL > (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((g_52[1][0] ^ (((safe_div_func_int16_t_s_s(g_128, (safe_mod_func_uint8_t_u_u((g_154[0] = ((safe_mod_func_int8_t_s_s(l_134, g_118.f0)) && l_153[0])), g_52[1][0])))) == 0x09EDA30AL) <= 0x00L)), l_2)) > (-1L)), l_129)), l_153[0]))), l_105.f1)), l_155[0][1])) , (-1L))))
        { 
            int64_t l_156 = 1L;
            l_156 &= 0xAD9C61CCL;
            g_118 = l_157[0][0];
        }
        else
        { 
            l_158[0] = l_157[0][0];
            if (g_57.f2)
                goto lbl_160;
            for (g_128 = 0; (g_128 <= 2); g_128 += 1)
            { 
                return g_43[0][0].f1;
            }
            return l_159;
        }
        if (((l_172 = ((((safe_rshift_func_uint8_t_u_s(l_153[0], g_18.f4)) | (l_129 >= ((safe_add_func_uint32_t_u_u((((((safe_mod_func_uint8_t_u_u((g_128++), g_18.f4)) > 0x6BFBL) , l_171) , 1L) | g_18.f1.f0), g_106[2][0].f1)) || l_155[0][1]))) , g_57.f4.f4) < 0xDBFA4552L)) == g_101))
        { 
            int32_t l_181 = 0L;
            int32_t l_183[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            for (l_172 = 3; (l_172 >= 0); l_172 -= 1)
            { 
                int32_t l_178 = 0x90524C49L;
                int i;
                l_167[0][1][0] = (((g_118.f0 = ((safe_unary_minus_func_uint16_t_u(((0x3B0CL <= (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((((g_43[1][0] , (((l_178 = g_154[l_172]) != g_154[l_172]) == g_130)) < g_57.f4.f3) , 0xCFEFL), l_153[0])) < 0x08L), 6))) != 0x86L))) , 0UL)) < g_57.f4.f0) < g_128);
                return g_43[0][0].f1;
            }
            for (l_172 = 0; (l_172 > (-5)); l_172 = safe_sub_func_uint8_t_u_u(l_172, 3))
            { 
                return g_57.f0;
            }
            for (g_130 = 1; (g_130 >= 0); g_130 -= 1)
            { 
                int16_t l_182 = 0xD144L;
                g_186--;
                g_57.f3 &= g_57.f0;
            }
        }
        else
        { 
            int64_t l_189 = (-5L);
            int32_t l_199 = (-1L);
            l_199 = ((l_172 = g_106[2][0].f4.f2) & (l_189 ^ ((safe_div_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((l_129 || (((safe_rshift_func_int8_t_s_s(((l_2 || l_171.f0) <= g_106[2][0].f4.f0), l_198)) , 5UL) >= g_106[2][0].f4.f4)), 0x5F17F0F52E07C214LL)), 3L)) != 0x62L), l_189)) , g_57.f2)));
            if (l_200[2])
            { 
                l_158[0] = g_18.f1;
            }
            else
            { 
                g_106[2][0].f4.f4 = l_105.f1;
            }
            g_57.f4.f4 |= ((g_106[2][0].f4.f0 != (g_106[2][0].f2 > (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_189, (-10L))), l_153[0])))) , (-1L));
        }
        if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((g_220 = (safe_mul_func_int8_t_s_s(l_200[1], (safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((l_167[0][1][0] = ((l_217 , (l_172 = (((g_57.f1 >= (g_106[2][0].f0 = (safe_lshift_func_uint8_t_u_s(l_171.f0, g_18.f4)))) , g_130) < 0xE1FED7957FE21787LL))) != l_217.f4.f3)), g_85[1][0])) < 248UL), g_52[0][0]))))), l_105.f0)) == g_101), g_57.f4.f4)), 6)))
        { 
            union U5 l_243 = {6UL};
            int32_t l_246 = 0x09BAAA91L;
            int32_t l_247 = 0xF6DFC4E5L;
            if ((g_106[2][0].f4.f2 || g_106[2][0].f0))
            { 
                int64_t l_221 = (-4L);
                --l_222[0];
                g_106[2][0].f3 = ((l_167[2][1][1] = (l_225[0][0][1] , ((l_217.f3 = (safe_mul_func_uint8_t_u_u(0x43L, (safe_mul_func_int8_t_s_s(0L, (safe_mod_func_uint8_t_u_u(((l_158[0].f0 <= (-1L)) ^ 18446744073709551613UL), g_57.f2))))))) && 0L))) | g_18.f3);
            }
            else
            { 
                int32_t l_245 = 0L;
                g_106[2][0].f3 = ((g_236.f0 = (safe_div_func_int64_t_s_s(l_217.f4.f0, (safe_add_func_uint64_t_u_u((g_236 , ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(((l_243 , g_57.f4) , g_106[2][0].f4.f2), l_200[2])) != l_153[0]) == g_185[0]), l_244)), 5)) <= 0x89EAE0A9FA561810LL)), l_245))))) | g_18.f3);
            }
            for (l_217.f2 = 0; (l_217.f2 <= 1); l_217.f2 += 1)
            { 
                g_249--;
            }
        }
        else
        { 
            uint16_t l_252 = 0x36C5L;
            l_252 &= g_18.f1.f0;
            g_57.f4.f4 ^= (l_217 , (g_128 , (safe_mul_func_uint16_t_u_u(g_101, (safe_add_func_uint32_t_u_u(5UL, g_106[2][0].f4.f2))))));
            g_263 = ((((l_200[2] ^ (safe_add_func_uint16_t_u_u(((+65527UL) > (0x87L >= l_153[0])), l_168))) <= 0xCF694FA6B8BF16BDLL) , l_262) , l_217.f2);
        }
    }
    else
    { 
        int32_t l_267 = 0x0434D63BL;
        g_18.f4 &= ((g_130 >= 4294967295UL) <= ((g_128 = ((((-9L) < (safe_add_func_uint16_t_u_u(((l_167[3][1][2] = 0x72L) > 255UL), 8L))) >= g_266[1]) & 1L)) && l_267));
    }
    return l_171.f0;
}



static uint64_t  func_10(union U5  p_11, struct S3  p_12, struct S2  p_13)
{ 
    uint32_t l_117[5][4] = {{0xC04A76FCL,0x350F1593L,0xC04A76FCL,0xC04A76FCL},{0x350F1593L,0x350F1593L,0x87ACCF6EL,0x350F1593L},{0x350F1593L,0xC04A76FCL,0xC04A76FCL,0x350F1593L},{0xC04A76FCL,0x350F1593L,0xC04A76FCL,0xC04A76FCL},{0x350F1593L,0x350F1593L,0x87ACCF6EL,0x350F1593L}};
    int i, j;
    if ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(2L, (~((safe_mod_func_uint8_t_u_u(((0UL != ((p_13.f1 >= ((+((g_57.f4.f3 >= 0xA0E2L) , p_13.f4.f3)) <= l_117[1][2])) || g_106[2][0].f3)) > 0xDBFBL), p_13.f4.f2)) || l_117[1][2])))) <= g_57.f4.f0), g_106[2][0].f4.f0)))
    { 
        g_118 = p_13.f4.f1;
    }
    else
    { 
        uint8_t l_125 = 251UL;
        g_57.f3 = (+(((safe_add_func_int8_t_s_s(((+((safe_mul_func_uint8_t_u_u((l_125 | (-9L)), (g_128 = ((l_125 , (safe_lshift_func_uint8_t_u_u(((0x1FE2E2A7L && g_18.f3) < (-1L)), p_13.f3))) ^ 255UL)))) , p_12.f1)) , p_13.f2), p_13.f1)) && 0xEECA001A1B52123ELL) ^ g_106[2][0].f3));
    }
    return g_106[2][0].f4.f1.f0;
}



static union U5  func_14(struct S1  p_15, uint32_t  p_16, const uint32_t  p_17)
{ 
    uint32_t l_96[5][1][4] = {{{0x9DCED91EL,0x9DCED91EL,0x9DCED91EL,0x9DCED91EL}},{{0x9DCED91EL,0x9DCED91EL,0x9DCED91EL,0x9DCED91EL}},{{0x9DCED91EL,0x9DCED91EL,0x9DCED91EL,0x9DCED91EL}},{{0x9DCED91EL,0x9DCED91EL,0x9DCED91EL,0x9DCED91EL}},{{0x9DCED91EL,0x9DCED91EL,0x9DCED91EL,0x9DCED91EL}}};
    struct S3 l_98 = {0xF50BL,0x85FA8931L};
    union U5 l_104 = {0x6DABL};
    int i, j, k;
    for (g_57.f4.f0 = 0; (g_57.f4.f0 >= 24); g_57.f4.f0++)
    { 
        int32_t l_93 = 0xDD2F3D6CL;
        int32_t l_100 = 0L;
        l_93 ^= g_43[0][0].f0;
        if (g_57.f3)
            continue;
        if ((((g_43[3][1] , ((g_43[0][0].f0 != (safe_lshift_func_uint16_t_u_u(l_96[1][0][2], g_85[2][0]))) != 0L)) >= g_43[0][0].f0) , p_16))
        { 
            struct S3 l_97 = {0x813FL,3UL};
            l_98 = l_97;
            if (l_93)
                break;
        }
        else
        { 
            int32_t l_99 = 0x2946C84EL;
            --g_101;
        }
    }
    return l_104;
}



static const uint32_t  func_19(uint32_t  p_20, const struct S0  p_21, uint16_t  p_22)
{ 
    int64_t l_23[2];
    int32_t l_46 = 1L;
    struct S1 l_60 = {0xF43EL,{2UL},0x33A1293870B5DC3DLL,0x49FFB2EF76CAF445LL,0x642E063AL};
    struct S3 l_66 = {0L,0x9B981905L};
    int i;
    for (i = 0; i < 2; i++)
        l_23[i] = 0x0B2811FFBE62699FLL;
    for (p_22 = 0; (p_22 <= 1); p_22 += 1)
    { 
        int32_t l_32[3];
        struct S0 l_36 = {1UL};
        int32_t l_38 = 0x7D9CC132L;
        struct S3 l_62[5][1] = {{{0x1C9AL,0x392DDE99L}},{{0x8BFCL,0x225587BBL}},{{0x1C9AL,0x392DDE99L}},{{0x8BFCL,0x225587BBL}},{{0x1C9AL,0x392DDE99L}}};
        int32_t l_86 = (-1L);
        int i, j;
        for (i = 0; i < 3; i++)
            l_32[i] = 0x42FAFECEL;
        if (((g_18.f1.f0 <= (((safe_sub_func_uint16_t_u_u(9UL, ((safe_mul_func_int8_t_s_s((((safe_sub_func_int64_t_s_s(p_21.f0, 3UL)) & l_23[0]) || 0x54L), g_18.f4)) , 0UL))) & p_21.f0) == 0x65D63260L)) > g_18.f0))
        { 
            uint32_t l_35 = 0x684CA67BL;
            int32_t l_37 = 0L;
            l_38 = ((safe_add_func_int16_t_s_s(l_32[0], (safe_sub_func_int32_t_s_s((((-1L) != l_35) || (((l_37 = ((l_36 = p_21) , 0x8336L)) == l_32[0]) <= l_32[1])), l_35)))) > g_18.f0);
            if (g_18.f3)
                break;
            g_44 &= (safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((g_43[0][0] , ((g_18.f4 == 1UL) , 0xF5L)), 0xFEL)) <= 0x7DL) && g_43[0][0].f1), g_18.f2));
        }
        else
        { 
            uint32_t l_47 = 18446744073709551615UL;
            struct S3 l_61 = {-1L,5UL};
            for (p_20 = 0; (p_20 <= 1); p_20 += 1)
            { 
                struct S1 l_45 = {1L,{65531UL},18446744073709551615UL,7L,7L};
                int i;
                l_38 = ((l_45 , 6L) > ((l_46 = l_23[p_20]) || (l_47 = (p_22 || l_32[0]))));
                l_46 = (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(g_52[1][0], (safe_mul_func_uint8_t_u_u(g_18.f0, (safe_rshift_func_int16_t_s_u((g_57 , g_52[1][0]), 8)))))), g_52[1][0]));
            }
            if (g_57.f4.f3)
            { 
                g_57.f3 ^= (safe_mod_func_uint16_t_u_u(p_20, (l_60 , l_60.f0)));
            }
            else
            { 
                uint16_t l_65 = 65535UL;
                int i;
                l_62[3][0] = (g_57.f4.f1.f0 , l_61);
                l_65 |= (l_38 = (l_46 &= (g_57.f4.f1.f0 , (((1L & ((l_23[p_22] = (safe_mod_func_uint16_t_u_u((1L || g_57.f4.f0), p_21.f0))) == p_22)) || p_22) & l_62[3][0].f0))));
                return l_61.f1;
            }
            l_66 = g_43[3][1];
        }
        for (g_57.f4.f0 = 1; (g_57.f4.f0 >= 0); g_57.f4.f0 -= 1)
        { 
            uint8_t l_84 = 1UL;
            int32_t l_87 = (-4L);
            if ((safe_lshift_func_uint8_t_u_u((+(l_38 = g_44)), 2)))
            { 
                int16_t l_83 = 0x3508L;
                int i;
                l_86 = (g_18.f4 ^ (safe_unary_minus_func_uint8_t_u((g_85[1][0] = (((!(safe_div_func_int64_t_s_s(((+(safe_rshift_func_int8_t_s_u(((p_22 == ((l_23[p_22] = (p_20 ^ (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((0xC905L < 1L) == p_21.f0), l_83)), 9)), (-1L))))) >= l_84)) | l_62[3][0].f0), p_22))) <= l_84), p_21.f0))) , g_57.f0) >= l_60.f3)))));
                if (p_21.f0)
                    continue;
                l_87 = p_22;
            }
            else
            { 
                return l_60.f0;
            }
            l_38 &= (l_84 && (l_60.f4 = (((safe_add_func_uint8_t_u_u(p_21.f0, 3L)) , (g_57.f4.f3 ^= (((18446744073709551607UL & 5L) >= l_86) || l_46))) ^ p_22)));
            l_87 = (l_62[3][0].f0 || (safe_unary_minus_func_uint16_t_u(6UL)));
        }
    }
    return l_60.f2;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1.f0, "g_18.f1.f0", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_18.f4, "g_18.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_43[i][j].f0, "g_43[i][j].f0", print_hash_value);
            transparent_crc(g_43[i][j].f1, "g_43[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_52[i][j], "g_52[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    transparent_crc(g_57.f2, "g_57.f2", print_hash_value);
    transparent_crc(g_57.f3, "g_57.f3", print_hash_value);
    transparent_crc(g_57.f4.f0, "g_57.f4.f0", print_hash_value);
    transparent_crc(g_57.f4.f1.f0, "g_57.f4.f1.f0", print_hash_value);
    transparent_crc(g_57.f4.f2, "g_57.f4.f2", print_hash_value);
    transparent_crc(g_57.f4.f3, "g_57.f4.f3", print_hash_value);
    transparent_crc(g_57.f4.f4, "g_57.f4.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_85[i][j], "g_85[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_106[i][j].f0, "g_106[i][j].f0", print_hash_value);
            transparent_crc(g_106[i][j].f1, "g_106[i][j].f1", print_hash_value);
            transparent_crc(g_106[i][j].f2, "g_106[i][j].f2", print_hash_value);
            transparent_crc(g_106[i][j].f3, "g_106[i][j].f3", print_hash_value);
            transparent_crc(g_106[i][j].f4.f0, "g_106[i][j].f4.f0", print_hash_value);
            transparent_crc(g_106[i][j].f4.f1.f0, "g_106[i][j].f4.f1.f0", print_hash_value);
            transparent_crc(g_106[i][j].f4.f2, "g_106[i][j].f4.f2", print_hash_value);
            transparent_crc(g_106[i][j].f4.f3, "g_106[i][j].f4.f3", print_hash_value);
            transparent_crc(g_106[i][j].f4.f4, "g_106[i][j].f4.f4", print_hash_value);

        }
    }
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_154[i], "g_154[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_185[i], "g_185[i]", print_hash_value);

    }
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_266[i], "g_266[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
