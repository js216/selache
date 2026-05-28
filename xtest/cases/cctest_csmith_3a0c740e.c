// SPDX-License-Identifier: MIT
// cctest_csmith_3a0c740e.c --- cctest case csmith_3a0c740e (csmith seed 973894670)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3c3bea17 */
/* @exp_ticks 0x3b1f */

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

// Options:   -s 973894670 -o /tmp/csmith_gen_6mkh9vcr/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int16_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   int32_t  f1;
   uint32_t  f2;
};


static uint32_t g_14 = 0xE28FDEB7L;
static int8_t g_20 = (-1L);
static int32_t g_42 = 0xF8DC70E7L;
static int32_t g_44 = 1L;
static int16_t g_45 = 1L;
static uint32_t g_47 = 0xBB643C8FL;
static uint32_t g_55 = 4294967295UL;
static struct S0 g_78 = {0L,0x4743E03EL};
static uint8_t g_124 = 0x0AL;
static int64_t g_140 = (-5L);
static int64_t g_141 = 0L;
static uint16_t g_144 = 0UL;
static union U1 g_158 = {{1L,0L}};
static uint32_t g_164[5] = {0UL,0UL,0UL,0UL,0UL};
static uint8_t g_185[1][5] = {{6UL,6UL,6UL,6UL,6UL}};
static uint32_t g_229[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static int16_t g_270[1][2][3] = {{{0x2545L,0xF7B5L,0x2545L},{0x2545L,0xF7B5L,0x2545L}}};
static uint64_t g_281 = 5UL;
static uint32_t g_300 = 18446744073709551615UL;
static uint32_t g_301 = 1UL;
static int32_t g_320 = (-7L);
static int32_t g_322 = 0x6B856220L;



static int64_t  func_1(void);
static uint64_t  func_6(int8_t  p_7);
static uint32_t  func_8(uint32_t  p_9);
static uint32_t  func_28(int32_t  p_29);




static int64_t  func_1(void)
{ 
    int64_t l_212 = 0xE74F6A4189961142LL;
    uint16_t l_213 = 1UL;
    int32_t l_220 = 7L;
    uint16_t l_250[2];
    uint64_t l_253[3][4][3] = {{{0xFA0F418198974C40LL,5UL,0xC9A852904B5586E6LL},{0xFA0F418198974C40LL,0xD198489994865011LL,18446744073709551615UL},{0xFA0F418198974C40LL,0x512604FD5BABCDBCLL,0xFA0F418198974C40LL},{0xFA0F418198974C40LL,5UL,0xC9A852904B5586E6LL}},{{0xFA0F418198974C40LL,0xD198489994865011LL,18446744073709551615UL},{0xFA0F418198974C40LL,0x512604FD5BABCDBCLL,0xFA0F418198974C40LL},{0xFA0F418198974C40LL,5UL,0xC9A852904B5586E6LL},{0xFA0F418198974C40LL,0xD198489994865011LL,18446744073709551615UL}},{{0xFA0F418198974C40LL,0xC9A852904B5586E6LL,0xDDE750D66DC162CALL},{0xDDE750D66DC162CALL,0xFA0F418198974C40LL,0x50C6EEA383889F10LL},{0xDDE750D66DC162CALL,18446744073709551615UL,0x0492071BF1117703LL},{0xDDE750D66DC162CALL,0xC9A852904B5586E6LL,0xDDE750D66DC162CALL}}};
    struct S0 l_256 = {6L,0x523F6A8DL};
    int32_t l_280 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_250[i] = 0x083EL;
    l_213 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((func_6((func_8((safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((((0x4FL && g_14) , g_14) ^ (safe_add_func_int8_t_s_s(g_14, 1UL))), 1L)), g_14))) & g_158.f1)) && g_124), l_212)), l_212));
    for (g_140 = 0; (g_140 == 12); g_140++)
    { 
        uint16_t l_216[2];
        int32_t l_219 = 0xD828C4DAL;
        uint32_t l_251 = 0x5C0FEA65L;
        struct S0 l_252 = {0x6D84L,0x334515C6L};
        int16_t l_296 = 0xD4AEL;
        int32_t l_298 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_216[i] = 0xE37DL;
        l_220 |= ((l_219 = ((((l_216[0] , (g_44 = (0x62863D54L | (((safe_add_func_int8_t_s_s(g_20, (-1L))) && l_213) , 9L)))) <= g_78.f1) , 4UL) , 0xE2B9C605L)) , g_78.f1);
        if ((0x6D4906CFE17A9C68LL < (((safe_sub_func_uint16_t_u_u(g_158.f1, (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((((g_229[2] |= l_220) < l_212) <= l_212), g_158.f0.f0)), g_158.f0.f0)), l_220)))) >= g_158.f0.f1) == g_164[0])))
        { 
            int64_t l_232 = 0x8C93FC3FCEF47AD6LL;
            l_232 = (safe_rshift_func_int16_t_s_u(((l_220 & (l_220 | l_216[0])) | g_158.f1), g_78.f1));
            for (g_141 = 22; (g_141 >= 27); g_141++)
            { 
                uint32_t l_245 = 0UL;
                l_219 &= (g_20 | ((safe_mul_func_int16_t_s_s(((0xFB19B034L <= (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0x1765L, (g_45 = g_158.f0.f1))), 0xAFL)) , (-1L)) < 0x364DL)) | 0xDBL), g_14)) && g_20));
                g_44 |= l_216[0];
                g_44 = ((0x00L ^ (safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((l_245 != ((((--g_229[3]) , (safe_mul_func_uint8_t_u_u((((((l_250[0] != g_229[2]) || l_251) < 0x0735L) > 1L) ^ g_14), 1UL))) , l_252) , g_45)), l_252.f1)), 7UL))) == l_252.f1);
            }
        }
        else
        { 
            int64_t l_257 = 1L;
            l_257 = ((g_229[2] != (8L & (((l_253[1][3][0] != (((safe_mod_func_uint8_t_u_u(g_158.f0.f0, g_158.f0.f1)) | g_14) < l_252.f0)) , l_256) , 247UL))) <= (-6L));
            if (g_185[0][4])
            { 
                return g_185[0][0];
            }
            else
            { 
                uint32_t l_271[3];
                int32_t l_272 = 0x5598B16BL;
                int32_t l_273 = 0x2CD65A0DL;
                int i;
                for (i = 0; i < 3; i++)
                    l_271[i] = 0x5FB43AF6L;
                l_273 = ((safe_sub_func_int8_t_s_s(0xD7L, (g_20 = (safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_257 < ((((g_141 |= g_44) & ((safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(((l_271[0] &= g_270[0][1][1]) || l_213), g_14)), g_55)) <= 0x79AD05D546B9C1FDLL)) > l_257) | l_251)), 0)), l_250[0])), l_272))))) || 0xAB62L);
                g_44 |= 0x31B42E5BL;
                g_44 |= (safe_sub_func_uint8_t_u_u(0x5EL, g_158.f0.f1));
            }
            if (((safe_div_func_uint8_t_u_u(l_253[2][3][0], l_257)) , (safe_sub_func_int16_t_s_s((l_280 = (l_220 = g_158.f1)), l_252.f1))))
            { 
                g_281++;
                if (g_14)
                    break;
                g_44 = g_164[0];
            }
            else
            { 
                uint32_t l_299 = 0xB0991758L;
                int32_t l_321 = 0x89C4C44AL;
                g_301 ^= (g_300 &= (g_44 = (0UL && ((safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(l_219, (safe_div_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((l_298 = (l_296 ^ (+((l_220 ^ g_144) , l_250[0])))), 0x1716L)) >= g_270[0][1][1]), l_299)))) < g_45), g_281)) <= l_251), 255UL)), g_229[2])) & 4294967286UL))));
                g_322 = (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_321 |= ((safe_rshift_func_int8_t_s_u((0x6219L >= ((safe_mul_func_int16_t_s_s((g_158.f1 == (5UL != (safe_add_func_int8_t_s_s((((safe_add_func_int32_t_s_s((g_44 = (safe_div_func_uint32_t_u_u(((g_20 = ((((safe_add_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(((g_320 , g_140) , g_158.f1), l_257)) > 1UL) , l_299), l_257)) | 0x20D9L) != l_257) >= g_55)) & 1UL), l_252.f0))), g_78.f1)) & l_299) && g_300), l_257)))), g_185[0][3])) > g_164[0])), 4)) ^ l_250[0])) < 0x8EL), g_229[2])), g_158.f0.f0));
            }
        }
    }
    return l_212;
}



static uint64_t  func_6(int8_t  p_7)
{ 
    uint16_t l_211 = 0x5DD5L;
    l_211 = 0xF69D6815L;
    return g_124;
}



static uint32_t  func_8(uint32_t  p_9)
{ 
    uint32_t l_17 = 18446744073709551615UL;
    int32_t l_21 = 0x41720348L;
    int32_t l_34 = 0xB8642E5FL;
    int32_t l_36 = 8L;
    int32_t l_37 = 1L;
    int32_t l_38 = (-6L);
    int32_t l_40 = 0x761B8CE2L;
    int16_t l_203 = 0x309CL;
    int16_t l_210 = 0x761CL;
lbl_199:
    --l_17;
    g_20 &= l_17;
    if ((l_21 = p_9))
    { 
        uint64_t l_26 = 0xBC24891023F126C7LL;
        int32_t l_35 = 0L;
        int32_t l_39 = 4L;
        int32_t l_41 = 0L;
        int32_t l_43 = 0xEC02DFCEL;
        int32_t l_46[1][1][5];
        uint64_t l_157 = 18446744073709551609UL;
        struct S0 l_182 = {6L,-2L};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_46[i][j][k] = 0x444C9CADL;
            }
        }
        l_21 = (safe_rshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((l_26 || ((g_14 , (~g_14)) < ((0x11FBL ^ p_9) , l_17))), g_20)) || 0x4015FB26L), 4));
        if ((((func_28(((((g_20 = (((safe_add_func_int8_t_s_s(((((safe_div_func_uint8_t_u_u((--g_47), (l_43 |= (l_35 && (p_9 <= (safe_sub_func_int64_t_s_s((~0xEAA4L), (g_55 = ((safe_mul_func_int8_t_s_s(l_40, l_39)) == 0xC8C9L))))))))) != 6UL) , 0xED69B12DL) , 9L), g_44)) == g_42) ^ l_26)) <= 0xC5L) | l_40) >= l_41)) | p_9) ^ p_9) < 0x2BL))
        { 
            int64_t l_169 = 0xAA09A3B3DE1EFC34LL;
            l_21 |= ((safe_div_func_int32_t_s_s(l_26, (((safe_mul_func_uint8_t_u_u(l_36, (safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(p_9, 4)) < 0x1906L), l_157)), 2)))) < p_9) && g_44))) <= g_78.f1);
            for (l_35 = 0; (l_35 <= 0); l_35 += 1)
            { 
                int64_t l_165[3];
                int32_t l_166 = 0x5E0314B3L;
                int i;
                for (i = 0; i < 3; i++)
                    l_165[i] = (-1L);
                g_44 = (p_9 < (l_166 = (((g_158 , (safe_lshift_func_uint8_t_u_u((g_124 = (+(safe_sub_func_uint64_t_u_u(0x4F1BB3763735208ELL, ((g_164[0] != l_165[0]) || g_45))))), g_158.f1))) ^ g_164[0]) == 0xB2L)));
                g_44 ^= ((p_9 > ((((l_43 = (((safe_add_func_uint16_t_u_u((((((g_78 , 18446744073709551611UL) , g_144) >= (-8L)) ^ p_9) || l_34), 65529UL)) && l_35) != g_78.f0)) & 0L) , l_40) >= l_169)) , g_47);
                if (p_9)
                    break;
            }
        }
        else
        { 
            int64_t l_183 = 0L;
            int64_t l_184 = 1L;
            int32_t l_195[3][4] = {{0x908D2602L,1L,0x908D2602L,0x908D2602L},{1L,1L,1L,1L},{1L,0x908D2602L,0x908D2602L,1L}};
            int32_t l_196 = 0x4E1D6FB1L;
            int i, j;
            g_185[0][3] = (g_158 , (((((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(7L, (g_124 = (safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(((((g_44 = (safe_mod_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((((l_182 , g_124) <= l_36) > p_9), 0x05L)) > p_9), 1UL))) < p_9) != g_124) != l_39), l_183)), l_183))))), l_21)) && g_164[1]) , g_14) , l_184) && l_17));
            l_37 = (((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_78.f1, (safe_rshift_func_uint8_t_u_u(l_39, 6)))), (p_9 && ((l_21 = (((((((0L > 1UL) & 0L) , p_9) , g_158.f0.f0) <= 4294967289UL) , l_182) , g_124)) , 6L)))) & p_9) != g_141);
            l_196 = ((+((l_195[2][2] = (((p_9 , (safe_lshift_func_int16_t_s_s(g_47, p_9))) < (g_158.f1 && l_183)) >= p_9)) , 1L)) > l_17);
        }
        for (l_39 = (-20); (l_39 == 0); ++l_39)
        { 
            int16_t l_204[1][3];
            int32_t l_206 = 0x2AE77BACL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_204[i][j] = 5L;
            }
            if (l_35)
                goto lbl_199;
            if (l_46[0][0][4])
            { 
                l_203 = (~(p_9 , (safe_unary_minus_func_int64_t_s((safe_unary_minus_func_int64_t_s(0xA293CA1DE74A5FEALL))))));
                if (p_9)
                    continue;
            }
            else
            { 
                int8_t l_205 = (-7L);
                uint16_t l_207 = 0xFC47L;
                l_207--;
            }
        }
    }
    else
    { 
        return l_210;
    }
    return p_9;
}



static uint32_t  func_28(int32_t  p_29)
{ 
    const union U1 l_56[4] = {{{0x3038L,0xB9BDD189L}},{{0x3038L,0xB9BDD189L}},{{0x3038L,0xB9BDD189L}},{{0x3038L,0xB9BDD189L}}};
    int32_t l_61 = (-4L);
    int32_t l_136 = (-1L);
    int16_t l_137[1][4][4] = {{{0xDD19L,0xDD19L,(-5L),0xDD19L},{0xDD19L,0xB53EL,0xB53EL,0xDD19L},{0xB53EL,0xDD19L,0xB53EL,0xB53EL},{0xDD19L,0xDD19L,(-5L),0xDD19L}}};
    int32_t l_138 = 0x34D05853L;
    int32_t l_139 = (-1L);
    int32_t l_142 = 0xAA1647F7L;
    int32_t l_143 = 0x5982E876L;
    int i, j, k;
    l_61 |= ((l_56[0] , (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((p_29 | p_29) >= l_56[0].f1), p_29)) > l_56[0].f0.f0), 0xD830L))) >= g_20);
    if (g_42)
    { 
        l_61 = (safe_add_func_uint64_t_u_u(0xED9E6264A05A9EE2LL, (+0UL)));
    }
    else
    { 
        uint32_t l_65 = 0UL;
        int32_t l_104 = 0x5F4D98BCL;
        uint64_t l_105 = 0xEF0B8C27A4A205A5LL;
        int32_t l_106[4][1][5] = {{{(-10L),0x0EE7DBBEL,(-10L),0x0EE7DBBEL,(-10L)}},{{0xCFC83C04L,0xCFC83C04L,0xCFC83C04L,0xCFC83C04L,0xCFC83C04L}},{{(-10L),0x0EE7DBBEL,(-10L),0x0EE7DBBEL,(-10L)}},{{0xCFC83C04L,0xCFC83C04L,0xCFC83C04L,0xCFC83C04L,0xCFC83C04L}}};
        int i, j, k;
        l_65 = l_56[0].f0.f0;
        if ((g_44 |= (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((0x2CE4CA00AF4084F7LL <= (safe_mul_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_s((p_29 >= 1UL), 1)) && (((l_61 = (safe_rshift_func_int16_t_s_u((g_78 , 0x0409L), l_65))) == l_65) , 0x2B26CBFCL)) >= 255UL) || 1L), 2UL)) & 1L) <= 0x51C80F86L), l_56[0].f1))) <= 0xBDC662BFFD659CA0LL), 0x236EL)) < g_78.f1), l_65))))
        { 
            uint64_t l_92 = 0UL;
            for (g_78.f1 = 0; (g_78.f1 != 9); g_78.f1 = safe_add_func_int8_t_s_s(g_78.f1, 9))
            { 
                if (p_29)
                    break;
                if (p_29)
                    break;
            }
            g_44 = (p_29 >= (safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0x84E0L, (safe_rshift_func_uint8_t_u_s((l_92 ^= (~(((((safe_mul_func_uint16_t_u_u(p_29, (safe_lshift_func_int8_t_s_s(g_47, 0)))) | p_29) > 0x261C1CA36320CFA8LL) || 0xE9L) , 0xAD792BF48DF11712LL))), p_29)))), 0xADB2L)));
        }
        else
        { 
            uint8_t l_107[3][2] = {{251UL,251UL},{0x6CL,251UL},{251UL,0x6CL}};
            int32_t l_108[3][4] = {{0xE3387E9AL,4L,0xE3387E9AL,4L},{0xE3387E9AL,4L,0xE3387E9AL,4L},{0xE3387E9AL,4L,0xE3387E9AL,4L}};
            int i, j;
            l_108[0][0] = (((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((l_106[2][0][3] ^= ((safe_add_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((l_61 & (safe_add_func_int32_t_s_s((g_47 | ((l_104 |= (l_61 != (safe_unary_minus_func_uint64_t_u((((0L ^ l_56[0].f1) ^ 1UL) & l_65))))) > p_29)), l_65))), l_56[0].f0.f0)) != l_105), 0x25B5FE41CD949914LL)) | 0x2C2DE0B6L)), l_107[1][0])), 8)) | g_44) & 18446744073709551608UL);
            if ((safe_lshift_func_uint16_t_u_u((g_20 , g_14), 8)))
            { 
                uint16_t l_111 = 0x25B1L;
                l_111 = l_106[2][0][2];
                g_44 |= (((safe_mul_func_uint16_t_u_u((p_29 | (--g_14)), p_29)) , (safe_mod_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u((0xEDL || l_108[0][0]), 0xC1L)) > p_29), l_111))) , l_108[0][0]);
                g_44 = (safe_mod_func_int16_t_s_s((g_55 > (safe_rshift_func_int8_t_s_u((((g_124 |= g_55) ^ g_44) > (l_108[0][0] = (safe_rshift_func_uint16_t_u_u(((!0L) | l_56[0].f0.f0), 14)))), g_47))), g_78.f1));
            }
            else
            { 
                uint32_t l_128 = 0xC6DFE233L;
                l_104 = ((((l_128 = 255UL) && 0xE2L) != g_78.f1) | p_29);
            }
        }
        g_44 &= ((l_105 || (((!(safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((g_124 != (safe_lshift_func_uint16_t_u_s(p_29, 12))) < p_29), g_124)), p_29))) >= l_56[0].f2) <= (-1L))) || p_29);
    }
    ++g_144;
    return l_56[0].f0.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_158.f0.f0, "g_158.f0.f0", print_hash_value);
    transparent_crc(g_158.f0.f1, "g_158.f0.f1", print_hash_value);
    transparent_crc(g_158.f1, "g_158.f1", print_hash_value);
    transparent_crc(g_158.f2, "g_158.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_164[i], "g_164[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_185[i][j], "g_185[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_229[i], "g_229[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_270[i][j][k], "g_270[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
