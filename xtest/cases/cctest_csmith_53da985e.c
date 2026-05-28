// SPDX-License-Identifier: MIT
// cctest_csmith_53da985e.c --- cctest case csmith_53da985e (csmith seed 1406834782)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb312f596 */
/* @exp_ticks 0x3252 */

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

// Options:   -s 1406834782 -o /tmp/csmith_gen_twb8bzvp/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   const uint32_t  f1;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   struct S0  f1;
   uint8_t  f2;
};


static int32_t g_2 = (-1L);
static uint32_t g_35 = 0UL;
static struct S0 g_45 = {65535UL,4294967295UL};
static uint16_t g_59 = 1UL;
static union U1 g_79 = {{0xE9FBL,4294967289UL}};
static int16_t g_113 = 0x5DB8L;
static int16_t g_114 = 0x3264L;
static int32_t g_137 = 1L;
static int16_t g_187 = (-1L);
static int32_t g_223 = 0x11E99CA7L;
static int16_t g_225 = 3L;
static uint32_t g_228 = 0x0BE11D5CL;
static uint8_t g_232 = 0UL;
static int8_t g_238 = 0x57L;
static uint16_t g_268 = 1UL;
static uint16_t g_325 = 1UL;
static int64_t g_356 = 0x1797A03D4DD608B5LL;
static uint64_t g_362 = 18446744073709551614UL;



static int64_t  func_1(void);
static int8_t  func_8(const struct S0  p_9, const uint8_t  p_10, uint32_t  p_11, int64_t  p_12, uint32_t  p_13);
static struct S0  func_14(uint16_t  p_15, uint8_t  p_16, uint16_t  p_17);
static uint8_t  func_21(union U1  p_22, uint64_t  p_23, int8_t  p_24);




static int64_t  func_1(void)
{ 
    int32_t l_18 = 0x47BB7AB6L;
    union U1 l_25 = {{0UL,4294967294UL}};
    uint32_t l_288 = 18446744073709551615UL;
    int32_t l_293 = 0xD4120DA1L;
    uint8_t l_295[5] = {0xC7L,0xC7L,0xC7L,0xC7L,0xC7L};
    uint32_t l_335 = 4294967295UL;
    int16_t l_342 = (-1L);
    int32_t l_359 = 0x30E419F3L;
    int i;
    for (g_2 = 0; (g_2 == 0); g_2 = safe_add_func_int8_t_s_s(g_2, 9))
    { 
        uint16_t l_5 = 1UL;
        return l_5;
    }
    if (((safe_div_func_uint16_t_u_u(7UL, (l_288 = (func_8(func_14(l_18, (safe_sub_func_uint8_t_u_u(func_21(l_25, g_2, g_2), g_45.f0)), l_25.f0.f0), l_18, g_79.f2, g_79.f0.f0, l_25.f2) | g_45.f1)))) < l_25.f1.f1))
    { 
        union U1 l_304 = {{0xDAB7L,4294967286UL}};
        int32_t l_313 = 0x3DB08382L;
        for (l_25.f1.f0 = 6; (l_25.f1.f0 < 46); l_25.f1.f0++)
        { 
            uint32_t l_294 = 0UL;
            l_294 = ((safe_rshift_func_uint8_t_u_s(g_114, 6)) >= (l_293 = g_2));
        }
        for (g_79.f2 = 0; (g_79.f2 <= 4); g_79.f2 += 1)
        { 
            int8_t l_314 = 0x83L;
            int8_t l_330 = (-1L);
            int32_t l_344 = (-8L);
            uint16_t l_345 = 65535UL;
            int16_t l_349 = 0x6BA7L;
            int i;
            if ((safe_lshift_func_int8_t_s_s(l_295[g_79.f2], 6)))
            { 
                int32_t l_312 = 0xADC05C0CL;
                uint16_t l_315 = 65530UL;
                int i;
                g_2 = ((safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_u((l_304 , (((((-1L) != (g_238 = (safe_mod_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u((((+((((l_313 = (l_312 ^= (((0x5521L ^ ((l_295[g_79.f2] || (-10L)) >= g_59)) , l_304.f1.f0) || l_295[g_79.f2]))) & 1L) >= g_238) < 0xD73CL)) == 0x70L) || l_295[g_79.f2]), l_295[g_79.f2])) != l_304.f2), g_113)))) == 0x6B1092BAF1258D5DLL) , g_114) != (-1L))), l_295[g_79.f2])) >= 0xDA36L) , l_304.f0.f1), l_295[g_79.f2])) >= l_314) , l_304.f1.f1), l_315)) == l_315);
                if (l_314)
                    break;
            }
            else
            { 
                int8_t l_324[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_324[i] = 0x2BL;
                l_293 &= (safe_lshift_func_uint8_t_u_u(g_59, l_314));
                g_2 ^= (((safe_lshift_func_int8_t_s_s(((g_225 && (safe_add_func_int64_t_s_s(g_137, 1L))) | (safe_add_func_int8_t_s_s(((((l_324[0] && g_325) < 0xA834D4BEADCF6FB7LL) != g_114) <= g_59), g_114))), l_304.f0.f1)) | 0xCDBAE385C26318D7LL) || l_18);
            }
            if ((((safe_div_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s(l_330, (safe_lshift_func_int16_t_s_u(0xCAEBL, 10)))) >= (((safe_rshift_func_int8_t_s_u(((g_238 = g_223) || 255UL), 2)) >= g_45.f0) <= g_137)) ^ l_330) != g_114), 3UL)) , l_295[g_79.f2]) > 0xA1L))
            { 
                int16_t l_340[5];
                int32_t l_341 = 2L;
                int32_t l_343 = (-1L);
                int i;
                for (i = 0; i < 5; i++)
                    l_340[i] = 7L;
                g_137 = (l_335 ^ g_228);
                l_343 = ((((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(9UL, l_340[1])), ((((l_341 = l_304.f2) & ((l_342 | 0x703C2C65L) , l_335)) != l_340[1]) && 0xF043A5CBL))) | l_314) <= g_223) < g_187);
                l_345++;
            }
            else
            { 
                l_344 = (!0x4FA0224BL);
            }
            l_344 = l_349;
        }
        g_2 = ((safe_unary_minus_func_uint64_t_u((l_293 ^= (((safe_div_func_uint16_t_u_u((g_59 &= 65530UL), (safe_add_func_int16_t_s_s(l_25.f2, (!(-1L)))))) , l_25.f1) , 1UL)))) && 1L);
    }
    else
    { 
        int64_t l_357 = 0x17054EACAEC42DD1LL;
        int32_t l_358 = 2L;
        int32_t l_360 = 0x47B89B5DL;
        int32_t l_361[5][3][1] = {{{0x834FB5A8L},{0x04357746L},{0x834FB5A8L}},{{0L},{0xD0C7FC06L},{0L}},{{0x834FB5A8L},{0x04357746L},{0x834FB5A8L}},{{0L},{0xD0C7FC06L},{0L}},{{0x834FB5A8L},{0x04357746L},{0x834FB5A8L}}};
        int i, j, k;
        g_362--;
        g_2 ^= (+(((safe_div_func_int64_t_s_s(((((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((g_137 ^ g_45.f0) , g_356), ((0xE393A55A67DACEAFLL != 9L) | 0x04L))), 7)) == 0xE7206C0EL) != l_295[0]) , l_18), 7L)) || 0xE1L) || 0x48L));
    }
    if (((-5L) <= ((safe_lshift_func_uint8_t_u_s((g_79.f2 = (safe_add_func_int64_t_s_s(g_59, (safe_add_func_uint8_t_u_u((g_232 = (!(safe_rshift_func_uint8_t_u_s((g_238 == g_362), 7)))), 1UL))))), 6)) == g_225)))
    { 
        uint16_t l_390 = 0xC9B5L;
        int32_t l_391 = (-1L);
        l_391 = ((((safe_mul_func_uint8_t_u_u(255UL, ((0xB61EL != (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((!(l_293 ^= (((((safe_sub_func_uint8_t_u_u((((g_2 > 0x417AC62B9862261CLL) < l_342) == 0xE0C47D5484670E56LL), l_390)) == (-1L)) | g_59) || l_390) ^ 0UL))) >= g_114), g_2)), g_59))) < l_18))) , l_25.f0.f1) > l_25.f0.f1) & 0xB2L);
    }
    else
    { 
        int32_t l_396 = (-6L);
        struct S0 l_397 = {0xFC56L,4294967287UL};
        uint64_t l_398 = 18446744073709551615UL;
        l_396 = ((g_225 = ((safe_sub_func_int8_t_s_s((l_398 = (((safe_sub_func_uint32_t_u_u((g_268 && (g_79.f2 < (l_397 , g_137))), 2UL)) > l_397.f0) < 1L)), g_325)) , g_225)) , l_396);
        l_396 = (((~l_396) & ((0xB8L == g_228) != ((safe_mul_func_uint16_t_u_u(0x1EDBL, g_225)) > g_356))) | l_25.f1.f0);
    }
    return l_25.f0.f1;
}



static int8_t  func_8(const struct S0  p_9, const uint8_t  p_10, uint32_t  p_11, int64_t  p_12, uint32_t  p_13)
{ 
    int32_t l_134 = 4L;
    int32_t l_149 = 0x3DAACA8AL;
    int64_t l_171 = 1L;
    int32_t l_194 = (-3L);
    uint16_t l_247 = 0UL;
    if (((g_2 |= (safe_sub_func_uint16_t_u_u(g_114, (((safe_mul_func_int8_t_s_s(p_13, (((safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((0x1DL ^ 0UL), l_134)), 0x61AF4752A806A380LL)) , 0x915AL) || g_114))) > l_134) != p_12)))) > g_79.f1.f1))
    { 
        int32_t l_140 = 0x8209D2E6L;
        int32_t l_151 = (-1L);
        if ((((((safe_div_func_uint32_t_u_u(g_45.f0, (g_137 &= 0x949DEFB7L))) >= (safe_div_func_int16_t_s_s((((g_79 , (l_134 <= g_45.f1)) , 0x9AC5L) <= p_11), l_140))) <= p_10) , 0xF14EL) ^ p_11))
        { 
            uint8_t l_146 = 0x2AL;
            int32_t l_150 = 0L;
            for (p_13 = 1; (p_13 != 31); p_13 = safe_add_func_uint8_t_u_u(p_13, 2))
            { 
                int32_t l_145 = 0xE6A653BEL;
                g_2 ^= ((((l_134 & (safe_lshift_func_int16_t_s_s(((l_134 >= (l_150 = (((l_145 > (l_140 = (l_149 |= (--l_146)))) > (g_114 = (g_114 , p_10))) > p_10))) & g_79.f1.f1), 14))) , p_9.f0) | l_151) != g_45.f0);
                l_140 = g_45.f1;
            }
            if (((p_9.f0 | 1UL) >= (--p_13)))
            { 
                l_140 = (3L | p_12);
            }
            else
            { 
                uint32_t l_156 = 0xA60FE934L;
                int32_t l_157 = 0x82D76B48L;
                g_137 = (l_149 ^= (safe_sub_func_uint32_t_u_u(l_150, l_134)));
                l_157 = (l_156 &= 0xECF7F40FL);
                l_134 = (g_113 >= (safe_rshift_func_int16_t_s_u(((g_79.f2 = 1UL) , p_10), 15)));
            }
        }
        else
        { 
            l_151 = g_79.f0.f0;
        }
        return p_11;
    }
    else
    { 
        uint8_t l_160[1][1];
        int32_t l_172 = 0xEAFD68FCL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_160[i][j] = 252UL;
        }
        ++l_160[0][0];
        if ((((((((((g_79 , (safe_mod_func_uint16_t_u_u(((0x47L | (((safe_rshift_func_int8_t_s_s(g_79.f1.f1, ((safe_sub_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s(((0xC7933BFEBFBDA806LL | l_134) && g_113), p_10)) < p_12), 0xD52EC9A0CC12B9BELL)) | p_11))) , g_79.f2) != g_45.f0)) < 0x3DF3A3A19F56D68BLL), p_9.f1))) >= l_171) >= g_79.f0.f0) | 65535UL) , l_160[0][0]) > p_9.f0) , l_149) | p_10) > 0x95L))
        { 
            l_172 = g_79.f2;
            return g_79.f1.f0;
        }
        else
        { 
            int16_t l_175 = 0L;
            for (g_113 = 26; (g_113 != 18); g_113 = safe_sub_func_uint8_t_u_u(g_113, 2))
            { 
                uint32_t l_176 = 0UL;
                --l_176;
            }
        }
        for (l_149 = 0; (l_149 <= (-30)); l_149--)
        { 
            return p_12;
        }
    }
    g_137 = (safe_lshift_func_uint8_t_u_u(p_11, (safe_lshift_func_int8_t_s_u((g_187 |= (safe_lshift_func_uint16_t_u_s(((0xD16BL == g_45.f0) <= (p_12 == p_13)), 3))), 0))));
    if (((safe_mod_func_int16_t_s_s((l_134 = 1L), (l_171 && ((l_149 , (l_149 &= l_171)) , p_11)))) | 0xC7L))
    { 
        union U1 l_190 = {{0xA26DL,4294967291UL}};
        int8_t l_193 = 0L;
        int32_t l_226 = 0xF52A38B0L;
        int32_t l_227 = 0x46C8EA0EL;
        if (((l_190 , ((safe_lshift_func_uint8_t_u_u((l_134 = (5L > (((((0xDEL ^ ((0xCD33L & g_35) >= l_193)) , 255UL) < 0xB0L) && p_11) || l_190.f1.f1))), g_79.f1.f1)) <= l_194)) , l_134))
        { 
            return g_79.f0.f0;
        }
        else
        { 
            int16_t l_195 = 0xAE0FL;
            int32_t l_196 = 0x68365652L;
            int32_t l_224 = 1L;
            if (l_195)
            { 
                uint32_t l_199[3][3][4] = {{{3UL,0xEBC93262L,18446744073709551615UL,18446744073709551615UL},{5UL,5UL,3UL,18446744073709551615UL},{18446744073709551615UL,0xEBC93262L,18446744073709551615UL,3UL}},{{18446744073709551615UL,3UL,3UL,18446744073709551615UL},{5UL,3UL,18446744073709551615UL,3UL},{3UL,0xEBC93262L,18446744073709551615UL,18446744073709551615UL}},{{5UL,5UL,18446744073709551615UL,0xEBC93262L},{18446744073709551615UL,5UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}}};
                int32_t l_202 = 0L;
                int i, j, k;
                l_196 = p_11;
                l_134 = ((safe_mul_func_uint16_t_u_u(g_79.f1.f1, l_190.f1.f0)) != (((p_12 &= (l_199[2][2][2] = 0L)) < (safe_add_func_uint64_t_u_u((l_202 = ((((l_196 != p_9.f0) ^ g_45.f0) <= p_10) && 0x99786083ECD7A14ALL)), p_9.f0))) > g_79.f1.f0));
            }
            else
            { 
                uint64_t l_221 = 0UL;
                int32_t l_222 = 1L;
                l_196 = (safe_sub_func_uint64_t_u_u((g_223 |= (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((l_222 = (((safe_div_func_int32_t_s_s(((((((safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((g_137 = (safe_rshift_func_uint8_t_u_u(0x81L, 5))), g_113)), 7)), ((!((((safe_unary_minus_func_uint8_t_u(g_114)) && l_221) , g_79.f0.f1) ^ g_45.f0)) , l_221))) <= 0UL) || g_79.f2) == 0x39FE9454L) != 0xF9L) < p_13), 1UL)) != l_190.f1.f1) | l_221)) <= g_59), l_193)), 1UL))), g_114));
                g_2 = g_45.f1;
            }
            g_228++;
            return l_195;
        }
    }
    else
    { 
        int32_t l_231[5][2] = {{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)},{(-10L),(-10L)}};
        uint8_t l_246 = 255UL;
        int i, j;
lbl_287:
        --g_232;
        for (p_12 = 0; (p_12 == 16); ++p_12)
        { 
            l_231[2][1] ^= (((safe_unary_minus_func_uint64_t_u((g_238 &= l_171))) ^ (!g_113)) && (safe_rshift_func_int16_t_s_s(g_35, (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(0UL, p_9.f1)), l_246)))));
            l_247--;
        }
        for (g_45.f0 = 0; (g_45.f0 >= 37); g_45.f0 = safe_add_func_int8_t_s_s(g_45.f0, 1))
        { 
            int32_t l_255[2][3][3] = {{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}},{{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}}};
            int32_t l_267[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_267[i] = 5L;
            if (((p_13 != (+g_232)) == ((safe_lshift_func_int16_t_s_s(g_238, 15)) > (p_9.f1 && l_255[0][1][0]))))
            { 
                int64_t l_266 = 1L;
                g_2 = (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_s(g_113, 0)) > (l_171 , ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((0xCD1322C4L | (l_266 &= p_9.f1)) , (-1L)), 3)), 0x16A7FFE4C292AF6BLL)) <= p_9.f1))) == 0xC6L) , 0x24A2L), l_231[2][1])) <= l_255[0][1][0]), p_12));
            }
            else
            { 
                l_267[0] = g_79.f0.f0;
            }
            --g_268;
            if ((safe_sub_func_uint8_t_u_u((((l_267[0] != l_267[0]) ^ (safe_sub_func_uint16_t_u_u(g_45.f1, (safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((l_194 ^= g_232), 0x4997L)), g_79.f2))))) <= p_11), 0xF0L)))
            { 
                const int32_t l_283 = 0xC666C740L;
                int64_t l_286 = 0x58F199D2557C3E86LL;
                g_2 = (p_9.f1 & g_79.f0.f1);
                g_137 = (((p_9.f1 & (safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(l_283, (safe_lshift_func_int16_t_s_s((p_9.f0 > (g_228 && l_286)), 6)))) || g_2), 250UL))) && p_9.f1) && 0x9FL);
            }
            else
            { 
                if (l_171)
                    goto lbl_287;
                if (p_9.f1)
                    continue;
                return l_255[1][0][0];
            }
        }
    }
    return g_238;
}



static struct S0  func_14(uint16_t  p_15, uint8_t  p_16, uint16_t  p_17)
{ 
    uint32_t l_82 = 18446744073709551615UL;
    int32_t l_112 = 0L;
    int32_t l_115 = 0xA1AA0697L;
    struct S0 l_125 = {0xE25FL,0x24740B48L};
    l_82++;
    for (p_17 = 0; (p_17 == 38); p_17++)
    { 
        union U1 l_93[4] = {{{0x3614L,0UL}},{{0x3614L,0UL}},{{0x3614L,0UL}},{{0x3614L,0UL}}};
        int i;
        l_115 = (safe_sub_func_uint64_t_u_u(((safe_sub_func_int16_t_s_s((g_114 = (safe_rshift_func_int8_t_s_u((((l_93[0] , ((safe_mul_func_int32_t_s_s(g_79.f0.f1, (((g_113 = (safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((((((safe_sub_func_int32_t_s_s((l_112 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((-1L), (safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((safe_div_func_uint64_t_u_u(0x513D964400D43E6BLL, g_59)) != 0x9F1341B0B2AC45F4LL), 0)), 0x7E9A86F217CF0AE9LL)))) && 0x42BEL), g_59))), p_17)) ^ g_79.f1.f0) , g_79.f0.f1) && l_112) || g_59), 7UL)), 0x17F2L))) | p_15) == p_16))) & p_16)) , 0x2714L) && l_82), p_17))), p_17)) && l_93[0].f1.f1), g_79.f0.f0));
        if (g_2)
            break;
    }
    l_112 |= ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(g_79.f2, (+(safe_lshift_func_int16_t_s_u((g_79 , l_82), (g_59 |= (((safe_rshift_func_int8_t_s_s(0x03L, l_115)) <= 0x84L) <= p_15))))))) >= 0x2C2AL), 0x3D76C945L)) || g_79.f1.f1);
    return l_125;
}



static uint8_t  func_21(union U1  p_22, uint64_t  p_23, int8_t  p_24)
{ 
    uint32_t l_32 = 1UL;
    int32_t l_48 = (-1L);
    int32_t l_51 = 0xF9E84EBFL;
    uint32_t l_78 = 5UL;
    uint64_t l_80[4] = {0x188795192C249DD6LL,0x188795192C249DD6LL,0x188795192C249DD6LL,0x188795192C249DD6LL};
    uint8_t l_81[5] = {2UL,2UL,2UL,2UL,2UL};
    int i;
    for (p_22.f1.f0 = 17; (p_22.f1.f0 != 59); ++p_22.f1.f0)
    { 
        uint32_t l_36 = 0x6C56D20AL;
        int32_t l_58 = 0L;
        if (((safe_mul_func_uint8_t_u_u(0x6DL, ((g_35 = (((safe_mod_func_uint64_t_u_u(l_32, (((safe_lshift_func_uint16_t_u_s((l_32 < ((8UL != 0xA3F3L) ^ g_2)), 7)) , p_22.f1.f0) || p_22.f1.f1))) == g_2) || 65535UL)) < g_2))) | 5L))
        { 
            l_36++;
        }
        else
        { 
            int32_t l_41 = 0x2FC53D8BL;
            g_2 = ((0x659CL != (safe_rshift_func_uint16_t_u_u(((l_41 != (~(safe_rshift_func_uint16_t_u_s(l_36, (g_45 , 1L))))) ^ 1L), 2))) != l_41);
            if (p_22.f1.f0)
                break;
        }
        l_58 ^= ((l_48 ^= (safe_lshift_func_uint8_t_u_u(0x07L, 3))) & ((((safe_sub_func_int16_t_s_s((l_51 ^= 0xB647L), l_36)) >= (safe_lshift_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(0x3AA4L, l_36)) || g_45.f0), 14)) <= g_45.f1) & p_24) | 0x9FL), 11))) & p_22.f0.f0) | g_35));
    }
    ++g_59;
    l_81[3] = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((p_24 >= (safe_add_func_int8_t_s_s(((p_22.f1.f0 <= (safe_rshift_func_int16_t_s_u((((((safe_mod_func_uint16_t_u_u((--g_59), (safe_add_func_int32_t_s_s(l_78, (g_79 , l_80[2]))))) == (-8L)) , p_22.f1.f0) > 1L) > g_45.f0), p_23))) & 0UL), p_22.f2))), l_32)), 12)), g_79.f1.f0)) & 9L);
    return g_79.f1.f0;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
