// SPDX-License-Identifier: MIT
// cctest_csmith_42e2e11a.c --- cctest case csmith_42e2e11a (csmith seed 1122165018)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x28fc855e */
/* @exp_ticks 0x4378 */

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

// Options:   -s 1122165018 -o /tmp/csmith_gen_xzk942pu/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int32_t  f1;
   int64_t  f2;
   uint64_t  f3;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   uint8_t  f1;
   const uint32_t  f2;
};

union U2 {
   const uint16_t  f0;
   uint16_t  f1;
};


static int64_t g_8 = 0xC520EA0C8D46758ELL;
static int32_t g_26 = 0xEE00B46FL;
static int8_t g_27 = 0x91L;
static uint32_t g_36 = 18446744073709551615UL;
static uint32_t g_47[2][3][2] = {{{0x00A0D1F8L,0x00A0D1F8L},{0x00A0D1F8L,0x00A0D1F8L},{0x00A0D1F8L,0x00A0D1F8L}},{{0x00A0D1F8L,0x00A0D1F8L},{0x00A0D1F8L,0x00A0D1F8L},{0x00A0D1F8L,0x00A0D1F8L}}};
static uint32_t g_67[4][4] = {{4294967287UL,4294967294UL,4294967294UL,4294967287UL},{4294967287UL,4294967294UL,4294967294UL,4294967287UL},{4294967287UL,4294967294UL,4294967294UL,4294967287UL},{4294967287UL,4294967294UL,4294967294UL,4294967287UL}};
static uint8_t g_74 = 0x18L;
static uint64_t g_90 = 0x81BC3742197F4261LL;
static struct S0 g_91[2][1] = {{{4UL,0xEFDD5005L,0x5690C02A0D8654C9LL,18446744073709551615UL}},{{4UL,0xEFDD5005L,0x5690C02A0D8654C9LL,18446744073709551615UL}}};
static uint8_t g_95 = 5UL;
static int64_t g_96 = (-1L);
static uint64_t g_103 = 0x47CB24E923EB6B18LL;
static union U2 g_136 = {0x53D4L};
static union U1 g_154[3] = {{{65533UL,0L,0xCDAEA04E11651DD7LL,18446744073709551606UL}},{{65533UL,0L,0xCDAEA04E11651DD7LL,18446744073709551606UL}},{{65533UL,0L,0xCDAEA04E11651DD7LL,18446744073709551606UL}}};
static int32_t g_155[2][2] = {{0xD350F492L,0xD350F492L},{0xD350F492L,0xD350F492L}};
static uint8_t g_156 = 0x2BL;



static uint16_t  func_1(void);
static struct S0  func_2(int16_t  p_3, struct S0  p_4, struct S0  p_5, uint64_t  p_6, int16_t  p_7);
static int8_t  func_9(int64_t  p_10, struct S0  p_11);
static int32_t  func_12(int32_t  p_13, int32_t  p_14);




static uint16_t  func_1(void)
{ 
    int32_t l_18 = 0xFFF06982L;
    int32_t l_23 = 0x16C28CBDL;
    int32_t l_24 = 0x32E0C280L;
    struct S0 l_97[1] = {{0x32B0L,1L,-1L,0x848233F3924104B6LL}};
    int32_t l_157 = 0x5E967DCBL;
    int i;
    g_91[1][0] = func_2((g_96 ^= (g_95 = (g_8 <= func_9((func_12((((safe_unary_minus_func_uint32_t_u(((0x01516EA3L || (l_24 = (safe_div_func_int32_t_s_s((l_18 , (safe_mul_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((l_23 &= ((((-3L) < g_8) > 250UL) & g_8)) != g_8), l_18)), 0UL))), g_8)))) , 0xDE45A917L))) | l_18) >= 0x41L), g_8) != 0x73B194E8L), g_91[1][0])))), l_97[0], g_91[1][0], l_18, l_97[0].f0);
    if ((safe_rshift_func_int8_t_s_u((0xC2L >= g_47[0][2][0]), 7)))
    { 
        int16_t l_102 = 0x6139L;
        ++g_103;
    }
    else
    { 
        int64_t l_118 = 0L;
        int32_t l_123[5][5][2] = {{{0L,0x053B13CAL},{0x0FA3D1AAL,0x5574C4D6L},{0x0FA3D1AAL,0x053B13CAL},{0L,0L},{0x5574C4D6L,0x053B13CAL}},{{0x5B2A3AAEL,0x053B13CAL},{0x5574C4D6L,(-1L)},{(-1L),0x5574C4D6L},{0x053B13CAL,0x5B2A3AAEL},{0x053B13CAL,0x5574C4D6L}},{{(-1L),(-1L)},{0x5574C4D6L,0x053B13CAL},{0x5B2A3AAEL,0x053B13CAL},{0x5574C4D6L,(-1L)},{(-1L),0x5574C4D6L}},{{0x053B13CAL,0x5B2A3AAEL},{0x053B13CAL,0x5574C4D6L},{(-1L),(-1L)},{0x5574C4D6L,0x053B13CAL},{0x5B2A3AAEL,0x053B13CAL}},{{0x5574C4D6L,(-1L)},{(-1L),0x5574C4D6L},{0x053B13CAL,0x5B2A3AAEL},{0x053B13CAL,0x5574C4D6L},{(-1L),(-1L)}}};
        int i, j, k;
        g_91[1][0].f1 = ((safe_add_func_uint8_t_u_u(g_67[1][3], (g_74 | (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((g_26 >= (safe_add_func_uint64_t_u_u(0UL, g_91[1][0].f2))), g_67[0][0])) || l_18), g_91[1][0].f2)), 0L)), g_96))))) & l_118);
        for (g_36 = 4; (g_36 == 5); g_36++)
        { 
            for (g_95 = (-14); (g_95 >= 60); g_95++)
            { 
                uint32_t l_124 = 0xB62C0939L;
                const struct S0 l_129 = {0x3E86L,0x63A56911L,0xDD622E13D9898775LL,0xCBC617211454E63ALL};
                --l_124;
                if (l_97[0].f2)
                    continue;
                l_24 ^= (l_123[3][3][1] = ((safe_mul_func_uint16_t_u_u((l_129 , (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((-1L) > (safe_rshift_func_int8_t_s_s((g_136 , (((~(~(-9L))) || 0xFD98BFE20E5FF1E6LL) < g_47[0][2][0])), g_36))), l_97[0].f1)) >= l_123[0][1][1]), l_129.f3))), g_67[1][3])) < 2L));
            }
        }
    }
    if (((g_96 |= (g_47[0][2][0] == (((!0x6D112A49DC3AFFD7LL) , 0xEF34A033656F6DE5LL) ^ (g_8 , 1L)))) >= l_97[0].f2))
    { 
        union U2 l_147 = {0x1E56L};
        l_157 &= ((g_156 = (((safe_lshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s((((safe_unary_minus_func_int16_t_s((g_155[0][0] |= (l_24 , (safe_div_func_int8_t_s_s(((l_147 , ((safe_sub_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((g_96 = l_97[0].f3) && (safe_unary_minus_func_uint8_t_u((g_154[2] , 250UL)))))), l_18)) && 250UL) != l_18) >= l_147.f1), 5L)) || l_97[0].f1)) , 0L), l_147.f1)))))) , 2L) && g_154[2].f2), 0UL)) ^ g_136.f1) , 0xAA7DL), l_147.f0)) < l_97[0].f1) && g_47[0][2][0])) | l_97[0].f2);
        for (g_95 = (-17); (g_95 > 17); g_95 = safe_add_func_int64_t_s_s(g_95, 9))
        { 
            uint32_t l_162 = 0x75B32F8AL;
            for (g_8 = 0; (g_8 > (-26)); g_8 = safe_sub_func_int8_t_s_s(g_8, 9))
            { 
                const int64_t l_174 = 0x504D00D91C5D00A8LL;
                uint16_t l_175 = 0xB382L;
                l_162 = (-6L);
                g_155[0][0] |= (~(g_156 && ((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_67[2][3], (l_23 = 1UL))), (safe_div_func_int16_t_s_s(g_156, l_97[0].f3)))), l_174)), l_175)) != 0xD9L)));
                if (g_155[0][0])
                    break;
            }
        }
    }
    else
    { 
        uint64_t l_176 = 18446744073709551615UL;
        for (l_18 = 0; (l_18 >= 0); l_18 -= 1)
        { 
            if ((g_155[0][0] ^= l_176))
            { 
                return g_154[2].f0.f0;
            }
            else
            { 
                return g_95;
            }
        }
    }
    return g_136.f0;
}



static struct S0  func_2(int16_t  p_3, struct S0  p_4, struct S0  p_5, uint64_t  p_6, int16_t  p_7)
{ 
    struct S0 l_99[2][5] = {{{0x9AE8L,0x0EE8D33EL,0L,0UL},{0x9AE8L,0x0EE8D33EL,0L,0UL},{0x9AE8L,0x0EE8D33EL,0L,0UL},{0x9AE8L,0x0EE8D33EL,0L,0UL},{0x9AE8L,0x0EE8D33EL,0L,0UL}},{{65535UL,-3L,-1L,18446744073709551606UL},{8UL,0xDE941380L,1L,0UL},{65535UL,-3L,-1L,18446744073709551606UL},{8UL,0xDE941380L,1L,0UL},{65535UL,-3L,-1L,18446744073709551606UL}}};
    int i, j;
    g_26 ^= ((-1L) > (!0x2C33L));
    l_99[1][1] = p_5;
    return p_5;
}



static int8_t  func_9(int64_t  p_10, struct S0  p_11)
{ 
    uint16_t l_92 = 0x786DL;
    --l_92;
    return g_90;
}



static int32_t  func_12(int32_t  p_13, int32_t  p_14)
{ 
    int32_t l_25[4][5] = {{0x8C8A251AL,(-4L),(-4L),0x8C8A251AL,(-4L)},{0x8C8A251AL,0x8C8A251AL,(-1L),0x8C8A251AL,0x8C8A251AL},{(-4L),0x8C8A251AL,(-4L),(-4L),0x8C8A251AL},{0x8C8A251AL,(-4L),(-4L),0x8C8A251AL,(-4L)}};
    struct S0 l_32 = {0UL,0x71F8B108L,0x6652F52174D4A52DLL,0UL};
    uint64_t l_54 = 0x142B930EEAEFF69ELL;
    int i, j;
    for (p_14 = 3; (p_14 >= 0); p_14 -= 1)
    { 
        uint64_t l_28 = 0xA59C2D16CF05746ALL;
        int32_t l_31 = 1L;
        struct S0 l_33 = {0x99FDL,-7L,-3L,0x38BF9CC53A0DCB3DLL};
        l_28--;
        l_31 = l_28;
        for (p_13 = 3; (p_13 >= 0); p_13 -= 1)
        { 
            int32_t l_34 = (-1L);
            int32_t l_35 = 0x5EA98998L;
            if (p_14)
            { 
                int i, j;
                l_33 = l_32;
                ++g_36;
            }
            else
            { 
                int32_t l_39 = 0L;
                l_39 = l_32.f2;
            }
        }
    }
    for (l_32.f2 = 0; (l_32.f2 <= 3); l_32.f2 += 1)
    { 
        int8_t l_40[3];
        int32_t l_65[5][4] = {{1L,0xDABD3396L,0x48679C02L,0xDABD3396L},{0xFEC725EAL,0L,0xBEBC4FF0L,0x48679C02L},{0xDABD3396L,0L,0L,0xDABD3396L},{0L,0xDABD3396L,0xFEC725EAL,1L},{0L,0xFEC725EAL,0L,0xBEBC4FF0L}};
        uint32_t l_85[2][4];
        int i, j;
        for (i = 0; i < 3; i++)
            l_40[i] = 0xD9L;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_85[i][j] = 0x3BDBB176L;
        }
        p_14 ^= g_8;
        if (l_40[0])
        { 
            return l_40[1];
        }
        else
        { 
            g_26 |= (safe_rshift_func_int8_t_s_u(0L, 6));
        }
        for (g_27 = 3; (g_27 >= 0); g_27 -= 1)
        { 
            int16_t l_66 = 2L;
            int32_t l_72 = 0x21F8E690L;
            int32_t l_73 = 0xE4B48400L;
            int i, j;
            if ((safe_rshift_func_int16_t_s_s((((l_32.f1 |= (safe_mul_func_int8_t_s_s(8L, (g_47[0][2][0] ^= l_25[g_27][l_32.f2])))) != 0x3FL) & (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(p_14, 12)), p_14)), l_54))), 13)))
            { 
                int i, j;
                l_25[l_32.f2][(l_32.f2 + 1)] = (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((g_36 > 0x31368DE677DABF26LL) , 6L), (safe_sub_func_int64_t_s_s(p_13, p_14)))) ^ 4294967290UL), g_47[0][2][0])), p_13)) < l_65[3][3]), 6));
                ++g_67[1][3];
                if (l_25[g_27][g_27])
                    break;
            }
            else
            { 
                int8_t l_70 = 1L;
                int32_t l_71 = 0L;
                ++g_74;
                l_71 ^= ((safe_sub_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((+(l_85[1][1] = (((+((safe_rshift_func_uint16_t_u_s((g_67[3][0] <= p_14), (l_70 > (2L > 0xA8L)))) == (-3L))) && p_14) >= g_36))), l_73)), 0UL)) <= l_40[0]);
                if (p_14)
                    continue;
            }
            for (l_32.f3 = (-28); (l_32.f3 == 54); l_32.f3 = safe_add_func_int64_t_s_s(l_32.f3, 1))
            { 
                return p_13;
            }
        }
    }
    g_90 |= ((l_32 , (safe_div_func_uint32_t_u_u(l_54, (g_26 |= p_13)))) || (g_36 , g_27));
    return l_54;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_47[i][j][k], "g_47[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_67[i][j], "g_67[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_91[i][j].f0, "g_91[i][j].f0", print_hash_value);
            transparent_crc(g_91[i][j].f1, "g_91[i][j].f1", print_hash_value);
            transparent_crc(g_91[i][j].f2, "g_91[i][j].f2", print_hash_value);
            transparent_crc(g_91[i][j].f3, "g_91[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_136.f1, "g_136.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_154[i].f0.f0, "g_154[i].f0.f0", print_hash_value);
        transparent_crc(g_154[i].f0.f1, "g_154[i].f0.f1", print_hash_value);
        transparent_crc(g_154[i].f0.f2, "g_154[i].f0.f2", print_hash_value);
        transparent_crc(g_154[i].f0.f3, "g_154[i].f0.f3", print_hash_value);
        transparent_crc(g_154[i].f1, "g_154[i].f1", print_hash_value);
        transparent_crc(g_154[i].f2, "g_154[i].f2", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_155[i][j], "g_155[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_156, "g_156", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
