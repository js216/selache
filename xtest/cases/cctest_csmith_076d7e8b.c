// SPDX-License-Identifier: MIT
// cctest_csmith_076d7e8b.c --- cctest case csmith_076d7e8b (csmith seed 124616331)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xabcab301 */
/* @exp_ticks 0x750a */

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

// Options:   -s 124616331 -o /tmp/csmith_gen_cvfrwvxr/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   const int8_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
   struct S0  f1;
   const struct S0  f2;
   int32_t  f3;
   int8_t  f4;
};


static uint8_t g_5 = 0UL;
static int8_t g_9 = 7L;
static int8_t g_11[1][2] = {{1L,1L}};
static int8_t * const g_10 = &g_11[0][0];
static int32_t g_14 = 0x177CCE45L;
static int32_t g_25 = 1L;
static int32_t *g_24 = &g_25;
static int32_t g_79[7][1][5] = {{{0L,(-6L),(-6L),0L,(-6L)}},{{(-9L),0xC168B3ADL,1L,0xC168B3ADL,(-9L)}},{{(-6L),0L,(-6L),(-6L),0L}},{{(-9L),0x9175C225L,0x3B252958L,0xC168B3ADL,0x3B252958L}},{{0L,0L,0xDC629925L,0L,0L}},{{0x3B252958L,0xC168B3ADL,0x3B252958L,0x9175C225L,(-9L)}},{{0L,(-6L),(-6L),0L,(-6L)}}};
static union U1 *g_81 = (void*)0;
static uint32_t g_130 = 0x4FFBABF7L;
static int32_t g_133 = (-6L);
static uint64_t g_135 = 0UL;
static struct S0 g_142[6][6] = {{{0UL,0x81L,0x5F6FB734L},{65535UL,0x3FL,0x4EB2AB38L},{0UL,0x81L,0x5F6FB734L},{0x4F06L,0xB1L,-4L},{0UL,0x81L,0x5F6FB734L},{65535UL,0x3FL,0x4EB2AB38L}},{{0xA795L,0x7CL,0x939B73AAL},{65535UL,0x3FL,0x4EB2AB38L},{0UL,1L,6L},{65535UL,0x3FL,0x4EB2AB38L},{0xA795L,0x7CL,0x939B73AAL},{65535UL,0x3FL,0x4EB2AB38L}},{{0UL,0x81L,0x5F6FB734L},{0x4F06L,0xB1L,-4L},{0UL,0x81L,0x5F6FB734L},{65535UL,0x3FL,0x4EB2AB38L},{0UL,0x81L,0x5F6FB734L},{0x4F06L,0xB1L,-4L}},{{0xA795L,0x7CL,0x939B73AAL},{0x4F06L,0xB1L,-4L},{0UL,1L,6L},{0x4F06L,0xB1L,-4L},{0xA795L,0x7CL,0x939B73AAL},{0x4F06L,0xB1L,-4L}},{{0UL,0x81L,0x5F6FB734L},{65535UL,0x3FL,0x4EB2AB38L},{0UL,0x81L,0x5F6FB734L},{0x4F06L,0xB1L,-4L},{0UL,0x81L,0x5F6FB734L},{65535UL,0x3FL,0x4EB2AB38L}},{{0xA795L,0x7CL,0x939B73AAL},{65535UL,0x3FL,0x4EB2AB38L},{0UL,1L,6L},{65535UL,0x3FL,0x4EB2AB38L},{0xA795L,0x7CL,0x939B73AAL},{65535UL,0x3FL,0x4EB2AB38L}}};
static uint32_t g_145 = 0xFBC33642L;
static int32_t g_146 = 0x4D1E50D5L;
static uint32_t g_147 = 4UL;
static uint32_t g_157 = 0UL;
static int32_t g_161 = 0x7F617D5CL;
static int32_t g_162 = 0xCC3C0569L;
static int8_t g_163 = 0L;
static uint32_t g_164 = 0x6BC4935FL;
static uint8_t g_167 = 1UL;
static uint32_t g_170 = 0x938573CAL;
static int64_t g_194 = (-9L);
static int8_t **g_199 = (void*)0;
static int8_t *** const g_198[3] = {&g_199,&g_199,&g_199};
static int16_t g_202[5][6] = {{(-7L),(-1L),0xAD49L,8L,(-1L),8L},{0xAD49L,(-7L),0xAD49L,0x6E09L,0xE9F9L,0x03AEL},{0x10D0L,0x6E09L,8L,(-1L),0x385AL,0x385AL},{(-1L),0x385AL,0x385AL,(-1L),8L,0x6E09L},{0x10D0L,0x03AEL,0xE9F9L,0x6E09L,0xAD49L,(-7L)}};
static uint32_t g_203 = 0x152C8EFAL;
static int32_t *g_205 = &g_142[3][5].f2;
static uint64_t *g_239 = &g_135;
static int64_t g_247 = (-1L);
static int32_t *g_273[1] = {&g_79[0][0][4]};
static int32_t **g_272 = &g_273[0];
static int32_t ***g_271 = &g_272;
static uint8_t g_286[2] = {0UL,0UL};
static uint64_t g_314 = 18446744073709551615UL;
static uint16_t g_321 = 1UL;
static int8_t *g_331[7][1] = {{&g_11[0][1]},{&g_9},{&g_11[0][1]},{&g_9},{&g_11[0][1]},{&g_9},{&g_11[0][1]}};
static int8_t **g_330 = &g_331[2][0];
static struct S0 g_365 = {0x335FL,0x27L,8L};
static int64_t g_423 = (-1L);
static int16_t g_424 = 0xAF49L;
static int32_t g_425 = (-1L);
static uint32_t g_434 = 0xD283B58AL;
static uint32_t g_453 = 0UL;
static union U1 g_460 = {0xC84A117DL};
static union U1 * const g_459 = &g_460;
static int32_t g_508 = 0xB5658F5FL;
static int8_t g_509 = 8L;
static uint16_t g_510 = 65531UL;
static uint64_t g_569 = 0x47BF98C7A5CB6D90LL;
static int32_t g_575 = 1L;
static int32_t g_576 = (-1L);
static uint64_t g_577[5] = {0x716D169DCC34096ALL,0x716D169DCC34096ALL,0x716D169DCC34096ALL,0x716D169DCC34096ALL,0x716D169DCC34096ALL};
static uint32_t g_603 = 0x993C7A9BL;
static int32_t **g_616 = &g_205;
static int32_t ** const *g_615 = &g_616;
static const struct S0 *g_651 = (void*)0;
static int32_t g_690[4][4] = {{0x8AE7A560L,1L,0x8AE7A560L,1L},{0x8AE7A560L,1L,0x8AE7A560L,1L},{0x8AE7A560L,1L,0x8AE7A560L,1L},{0x8AE7A560L,1L,0x8AE7A560L,1L}};
static uint32_t g_723 = 18446744073709551615UL;
static uint32_t g_740 = 9UL;
static int8_t ****g_751 = (void*)0;
static int32_t *g_762 = &g_161;
static int32_t ** const g_761 = &g_762;
static int32_t ** const *g_760[7][6] = {{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761},{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761},{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761},{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761},{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761},{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761},{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761}};
static int64_t g_769 = (-1L);
static int16_t g_842 = 0x1C87L;



static int32_t  func_1(void);
static int8_t ** func_12(int8_t  p_13);
static struct S0  func_15(int8_t ** p_16);
static int8_t ** func_17(int64_t  p_18, int32_t  p_19, const int32_t  p_20, int32_t  p_21);
static uint32_t  func_34(int64_t  p_35, uint64_t  p_36, int32_t * p_37, struct S0  p_38);
static int32_t * func_40(int16_t  p_41, uint16_t  p_42, uint32_t  p_43, int64_t  p_44, int32_t  p_45);
static int32_t * func_47(uint16_t  p_48, uint32_t  p_49, union U1  p_50, int8_t * p_51);
static int32_t  func_54(struct S0  p_55, int32_t  p_56, uint32_t  p_57);




static int32_t  func_1(void)
{ 
    int8_t l_4[6];
    int8_t *l_8 = &g_9;
    const int64_t l_533 = 0x708DFF30C610CC38LL;
    int32_t l_539 = 0L;
    int32_t l_568[7][2][1] = {{{6L},{(-1L)}},{{6L},{(-1L)}},{{(-6L)},{(-1L)}},{{6L},{(-1L)}},{{6L},{(-1L)}},{{(-6L)},{(-1L)}},{{6L},{(-1L)}}};
    uint64_t l_580 = 0x1F45896FA061C81ELL;
    uint64_t l_609[4];
    int8_t *l_623 = &g_11[0][0];
    const struct S0 *l_649 = &g_365;
    int8_t ** const *l_675 = &g_199;
    int8_t ** const **l_674 = &l_675;
    int32_t ***l_697 = &g_616;
    int32_t * const *l_718 = &g_273[0];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_4[i] = 9L;
    for (i = 0; i < 4; i++)
        l_609[i] = 5UL;
    if ((safe_rshift_func_int16_t_s_s(((((l_4[2] < g_5) ^ g_5) ^ (safe_mul_func_int8_t_s_s(((*l_8) = g_5), ((g_10 != (void*)0) , (g_5 > l_4[3]))))) , g_5), 14)))
    { 
        int8_t ***l_513 = &g_199;
        union U1 l_514 = {4L};
        int64_t *l_520 = &g_423;
        int64_t *l_521 = &g_423;
        int32_t l_574 = 0x17A8A7A8L;
        int8_t l_606 = (-1L);
        int32_t ***l_617 = (void*)0;
        struct S0 *l_625[6];
        struct S0 **l_624 = &l_625[1];
        int i;
        for (i = 0; i < 6; i++)
            l_625[i] = &g_142[3][5];
        (*l_513) = (g_5 , func_12((l_4[3] || g_11[0][0])));
        g_365.f2 ^= ((l_514 , (((safe_add_func_uint64_t_u_u(18446744073709551607UL, (safe_rshift_func_uint8_t_u_s(l_514.f0, (~l_4[5]))))) > g_133) ^ (l_520 != l_521))) != g_145);
        for (g_460.f1.f0 = 0; (g_460.f1.f0 <= 0); g_460.f1.f0 += 1)
        { 
            int8_t l_524[1][2];
            int32_t l_557 = 0xB928ACADL;
            uint32_t l_563 = 3UL;
            int32_t l_572 = 0x814886A0L;
            int32_t l_573[1];
            int16_t *l_607 = (void*)0;
            int16_t *l_608 = (void*)0;
            int32_t *l_610 = &l_573[0];
            uint16_t l_621 = 65527UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_524[i][j] = 1L;
            }
            for (i = 0; i < 1; i++)
                l_573[i] = 0xA0973064L;
            for (g_509 = 0; (g_509 <= 0); g_509 += 1)
            { 
                int32_t *l_522 = (void*)0;
                int32_t *l_523 = &l_514.f3;
                int i, j;
                (*l_523) = l_4[2];
                for (g_145 = 0; (g_145 <= 0); g_145 += 1)
                { 
                    int i, j, k;
                    return l_514.f4;
                }
            }
            if (l_524[0][1])
                break;
            for (g_247 = 0; (g_247 >= 0); g_247 -= 1)
            { 
                int32_t l_536 = 0xE38AE903L;
                uint32_t *l_537 = (void*)0;
                uint32_t *l_538 = &g_130;
                const uint32_t l_550 = 0xBBC29D85L;
                int i, j;
                if (((safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint8_t_u_u((!(safe_div_func_int32_t_s_s((0x74L && (g_203 != ((*g_10) = ((l_533 ^ (safe_sub_func_uint64_t_u_u((l_539 = ((*g_239) = (18446744073709551615UL & (g_203 <= ((*l_538) = (g_460.f3 && (g_286[0] <= l_536))))))), 1UL))) > l_4[2])))), l_536))), g_170)) ^ g_453))) || g_202[3][5]))
                { 
                    union U1 * const *l_552 = &g_459;
                    union U1 * const **l_551 = &l_552;
                    int32_t l_553[4][1];
                    int32_t *l_554 = &g_425;
                    int32_t *l_555 = (void*)0;
                    int32_t *l_556 = &l_514.f0;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_553[i][j] = 0L;
                    }
                    if (l_524[0][0])
                        break;
                    (*l_554) &= (safe_sub_func_int64_t_s_s(g_460.f0, (g_194 = ((*l_521) = (((*g_239) ^= ((safe_rshift_func_uint8_t_u_s((((((*g_459) , (-1L)) , ((((*g_10) = ((((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((*l_8) = ((l_550 | (((l_536 = ((((*l_551) = &g_459) != (void*)0) <= (g_25 || 0xFD2BC6D8L))) == 2UL) || l_514.f3)) || 0UL)), g_424)), l_514.f0)), l_533)) <= 0xA9FCB1AEL) , l_539) < 252UL)) & 0L) ^ 0x743CL)) && l_4[2]) != g_508), l_553[2][0])) != 1UL)) ^ 18446744073709551615UL)))));
                    l_557 &= ((*l_556) ^= g_425);
                    (*l_556) = l_557;
                }
                else
                { 
                    int32_t *l_558 = &l_514.f1.f2;
                    int32_t *l_559 = (void*)0;
                    int32_t *l_560 = (void*)0;
                    int32_t *l_561 = (void*)0;
                    int32_t *l_562[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_562[i] = &g_425;
                    l_563--;
                }
                for (g_508 = 0; (g_508 <= 0); g_508 += 1)
                { 
                    int32_t *l_566 = (void*)0;
                    int32_t *l_567[4][1][3] = {{{&g_14,(void*)0,&g_14}},{{&g_25,&g_25,&g_25}},{{&g_14,(void*)0,&g_14}},{{&g_25,&g_25,&g_25}}};
                    int i, j, k;
                    --g_569;
                    --g_577[2];
                }
            }
            if (l_580)
                continue;
            (*l_610) ^= (((safe_div_func_uint64_t_u_u((l_568[5][0][0] = (+(((safe_add_func_int8_t_s_s((0xE072FC4A867A1B19LL | ((((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_514.f3 > (((safe_mod_func_int16_t_s_s(l_572, (safe_mul_func_int8_t_s_s((-1L), (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(g_603, ((safe_rshift_func_uint8_t_u_s((l_514.f3 != (g_424 &= l_606)), 4)) > g_130))), 2)))), 9)))))) < 0xE1E21794L) >= l_4[3])), l_580)), 0xD8L)) != g_145), l_4[2])) , l_609[3]) && 8L) && g_460.f0)), (*g_10))) == g_142[3][5].f1) != g_365.f1))), l_557)) == g_509) , l_568[0][0][0]);
            for (l_557 = 0; (l_557 <= 0); l_557 += 1)
            { 
                uint64_t l_619 = 1UL;
                int i;
                l_514.f3 = ((safe_sub_func_uint8_t_u_u(l_533, ((safe_mul_func_uint8_t_u_u(255UL, (l_606 < ((((((g_615 == l_617) , ((((*g_459) , ((+((g_5 != (*g_239)) <= l_619)) != l_619)) & 0x7694DFDFL) ^ g_167)) | (-1L)) < 0x9438L) , g_273[l_557]) != &l_573[0])))) < (*l_610)))) < 1L);
                (**g_615) = &l_568[1][0][0];
                for (l_514.f1.f2 = 0; (l_514.f1.f2 <= 0); l_514.f1.f2 += 1)
                { 
                    struct S0 ***l_626 = (void*)0;
                    struct S0 ***l_627 = (void*)0;
                    struct S0 ***l_628 = &l_624;
                    l_610 = (*g_616);
                    if ((***g_615))
                        break;
                    (*l_628) = l_624;
                }
            }
        }
    }
    else
    { 
        struct S0 l_636 = {7UL,0x12L,0x6E3C59CDL};
        int16_t l_639 = 0L;
        int16_t *l_640 = &g_424;
        struct S0 * const ****l_641 = (void*)0;
        struct S0 *** const *l_643 = (void*)0;
        struct S0 *** const **l_642 = &l_643;
        int32_t *l_644 = (void*)0;
        int32_t *l_645[4][2] = {{&g_14,&g_14},{&g_460.f0,&g_14},{&g_14,&g_460.f0},{&g_14,&g_14}};
        uint8_t l_646[3];
        const struct S0 **l_650 = (void*)0;
        struct S0 *l_657 = &g_365;
        struct S0 **l_656 = &l_657;
        const int32_t l_669[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
        int8_t l_741[1];
        union U1 *l_767 = &g_460;
        int32_t l_787[3];
        uint32_t l_837[2];
        int i, j;
        for (i = 0; i < 3; i++)
            l_646[i] = 0UL;
        for (i = 0; i < 1; i++)
            l_741[i] = 3L;
        for (i = 0; i < 3; i++)
            l_787[i] = (-6L);
        for (i = 0; i < 2; i++)
            l_837[i] = 0xA807433FL;
        (*g_205) = (safe_unary_minus_func_uint32_t_u((((safe_rshift_func_uint8_t_u_u((((((**g_272) = ((safe_mod_func_uint16_t_u_u(g_142[3][5].f2, 0x5AF3L)) | 0xDCEF7BBAL)) , g_202[4][1]) >= ((*l_640) = ((safe_mod_func_int64_t_s_s(0L, (l_636 , (safe_div_func_int8_t_s_s(((*g_10) & l_4[2]), l_533))))) , l_639))) & 7UL), 5)) ^ l_636.f1) , l_568[3][1][0])));
        (*l_642) = (void*)0;
        --l_646[1];
lbl_789:
        g_651 = l_649;
        if (((safe_lshift_func_int8_t_s_s((l_568[4][1][0] , (safe_mod_func_uint16_t_u_u((g_145 , (l_649 != ((*l_656) = (void*)0))), (safe_mod_func_int64_t_s_s((((*g_651) , (((g_365.f0 > ((l_609[3] , &l_568[0][1][0]) == &l_539)) == (*g_24)) || 0xA3BD14C5L)) != 0x922DL), (*g_239)))))), (**g_330))) & (*g_239)))
        { 
            uint32_t l_668 = 0UL;
            const uint32_t l_689 = 18446744073709551608UL;
            int32_t l_714[4][7] = {{0x3AF21BD4L,1L,1L,0x3AF21BD4L,1L,1L,0x3AF21BD4L},{(-9L),(-5L),(-9L),0x22A571AAL,0xE036C3DEL,0x22A571AAL,(-9L)},{0x3AF21BD4L,0x3AF21BD4L,0x6DD4616DL,0x3AF21BD4L,0x3AF21BD4L,0x3AF21BD4L,1L},{(-9L),0L,0xF1CB2617L,0x22A571AAL,0xF1CB2617L,0L,(-9L)}};
            int32_t l_717[3][6][7] = {{{(-1L),(-6L),(-1L),(-5L),(-5L),(-1L),(-6L)},{0x3E8C6C34L,0x52253277L,0x681AB1B8L,(-1L),1L,7L,(-8L)},{(-1L),0x03CFD23AL,0L,(-6L),0L,0x03CFD23AL,(-1L)},{(-8L),7L,1L,(-1L),0x681AB1B8L,0x52253277L,0x3E8C6C34L},{(-6L),(-1L),(-5L),(-5L),(-1L),(-6L),(-1L)},{0xB6EB90E4L,0x15495ECEL,1L,5L,0x98C61F3CL,0x3E5B59ACL,0x681AB1B8L}},{{0x2CA60E73L,(-8L),0L,(-8L),0x2CA60E73L,0L,0x03CFD23AL},{0xDA3F8B6EL,0x15495ECEL,0x681AB1B8L,7L,0L,1L,0L},{1L,(-1L),(-1L),1L,(-8L),0x26D75913L,(-9L)},{0xDA3F8B6EL,7L,0x98C61F3CL,0x0593DDB0L,0x3E8C6C34L,0xF162113BL,(-8L)},{0x2CA60E73L,0x03CFD23AL,0x2CA60E73L,0x26D75913L,(-6L),(-5L),(-9L)},{0xB6EB90E4L,0x52253277L,0L,(-9L),1L,(-9L),0L}},{{(-6L),(-6L),(-8L),(-1L),0x070DCE3BL,(-5L),0x03CFD23AL},{(-8L),0x3E5B59ACL,0x3E8C6C34L,0x15495ECEL,(-1L),0xF162113BL,0x681AB1B8L},{(-1L),0L,(-6L),0x2CA60E73L,0x070DCE3BL,0x26D75913L,(-1L)},{0x3E8C6C34L,1L,1L,0x3E5B59ACL,1L,1L,0x3E8C6C34L},{(-1L),0x26D75913L,0x070DCE3BL,0x2CA60E73L,(-6L),0L,(-1L)},{0x681AB1B8L,0xF162113BL,(-1L),0x15495ECEL,0x3E8C6C34L,0x3E5B59ACL,(-8L)}}};
            int8_t ***l_753[4][7] = {{&g_330,&g_199,&g_330,&g_330,&g_199,&g_330,&g_330},{&g_199,&g_199,(void*)0,&g_199,&g_199,&g_199,&g_199},{&g_199,&g_330,&g_330,&g_199,&g_330,&g_330,&g_199},{(void*)0,&g_199,(void*)0,&g_199,&g_199,&g_199,(void*)0}};
            int8_t ****l_752 = &l_753[1][3];
            int i, j, k;
            if (((safe_div_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_s((g_145 ^ (g_603 > l_539)), 3)) | (g_314 = (((0x0C845685L & g_145) == ((*g_239) = 18446744073709551607UL)) , ((*g_239) &= (safe_div_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((-9L), l_609[3])) == (*g_24)) == l_668), l_580)))))) > 0UL) & l_669[2]), 1UL)) && l_539))
            { 
                const int32_t l_676 = 0x6D3AFC42L;
                int32_t l_708[6][7][4] = {{{0x7792218BL,0L,7L,8L},{0L,0xE0BA73ACL,9L,0x6D45D711L},{7L,0x3B2938D1L,0x3B2938D1L,7L},{5L,1L,0x88C26618L,0x8B1D9C7EL},{(-4L),0x15338EC3L,0L,(-1L)},{9L,0xE73D9AD8L,0x696753ECL,(-1L)},{0xA3B1D79DL,0x15338EC3L,(-1L),0xF835F2CAL}},{{0L,0x88C26618L,6L,0xB72917C4L},{(-2L),0x849FDF0EL,0x5F856B89L,0x15338EC3L},{0xB306AD23L,0x7D7A4E6EL,0x8B1D9C7EL,0x3B2938D1L},{6L,0x48A99CF1L,0xE73D9AD8L,0xAD159F63L},{0xFC1714F3L,6L,0x7792218BL,0x696753ECL},{0x6D45D711L,0x8B1D9C7EL,0L,9L},{(-4L),0xF8DD201FL,(-1L),0L}},{{0L,0xA0B6962AL,0x78FB3CEBL,0x8B1D9C7EL},{0xF835F2CAL,0x09A42870L,5L,1L},{0x7792218BL,2L,1L,(-1L)},{0x88C26618L,0x06F128F3L,0x88C26618L,0L},{0xC0779DB3L,5L,0x6D45D711L,0x6C4ADDD8L},{0xC9A06D34L,0xD1850953L,0xB306AD23L,5L},{0L,0xAD159F63L,0xB306AD23L,0xA0B6962AL}},{{0xC9A06D34L,0xF835F2CAL,0x6D45D711L,0L},{0xC0779DB3L,7L,0x88C26618L,0xE73D9AD8L},{0x88C26618L,0xE73D9AD8L,1L,0xDD023C99L},{0x7792218BL,0xFCAE3C38L,5L,(-4L)},{0xF835F2CAL,0L,0x78FB3CEBL,0x48A99CF1L},{0L,0x78FB3CEBL,(-1L),8L},{(-4L),0x5F856B89L,0L,1L}},{{0x6D45D711L,0xB306AD23L,0x7792218BL,(-7L)},{0xFC1714F3L,0xE0BA73ACL,0xE73D9AD8L,0x78FB3CEBL},{6L,0xBE46D86EL,0x8B1D9C7EL,0xD1850953L},{0xB306AD23L,1L,0x5F856B89L,0x5F856B89L},{(-2L),(-2L),6L,0xFCAE3C38L},{0L,0xFC1714F3L,2L,0x88C26618L},{1L,9L,0L,2L}},{{0xA3B1D79DL,9L,0xD3F069ABL,0x88C26618L},{9L,0xFC1714F3L,0xE6D1893DL,0xFCAE3C38L},{0xAD159F63L,(-2L),0x849FDF0EL,0x5F856B89L},{0xB72917C4L,1L,0xE0BA73ACL,0xD1850953L},{0xD3F069ABL,0xBE46D86EL,0xB72917C4L,0x78FB3CEBL},{0x09A42870L,0xE0BA73ACL,0xF8DD201FL,(-7L)},{0x6C4ADDD8L,0xB306AD23L,(-1L),1L}}};
                uint16_t *l_713[7];
                uint64_t * const l_788 = &l_609[1];
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_713[i] = &g_365.f0;
                l_539 = (((g_9 , (safe_mul_func_int8_t_s_s((((safe_add_func_uint64_t_u_u((&g_198[0] == l_674), (0L == l_676))) | ((+(l_568[0][0][0] = (&g_651 == &g_651))) & l_668)) , l_676), g_162))) , l_4[2]) >= 0x0D1E0643300FEEB2LL);
                g_690[1][1] = (safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_460.f4, ((safe_lshift_func_int16_t_s_s(l_668, 1)) == (g_365.f1 && (l_4[2] >= (((safe_mod_func_uint16_t_u_u((l_645[1][1] == &g_203), (((*l_640) |= ((safe_unary_minus_func_uint16_t_u((safe_mul_func_int16_t_s_s(((g_163 , g_509) < (*g_239)), l_689)))) < 0x3678L)) , g_425))) & 1UL) | g_170)))))), l_689));
                if (l_676)
                { 
                    return (*g_205);
                }
                else
                { 
                    (**g_615) = (*g_616);
                    (**g_615) = func_40(g_577[2], g_286[1], g_577[4], l_568[6][0][0], (***g_615));
                }
                for (l_668 = 0; (l_668 <= 17); l_668 = safe_add_func_uint16_t_u_u(l_668, 1))
                { 
                    int32_t ****l_698 = (void*)0;
                    int32_t ****l_699 = &l_697;
                    (*g_205) = (safe_mod_func_uint8_t_u_u((g_161 | l_676), ((safe_div_func_uint64_t_u_u(((((&g_616 == ((*l_699) = l_697)) | (0x27CEFAB4CC3E22D7LL & (safe_mul_func_int16_t_s_s(0x4AF7L, 0x05CBL)))) != g_162) && g_130), 0x78CFA162D851FC06LL)) && 1L)));
                }
                if ((g_723 = (l_539 = (safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_708[1][6][0] = l_689), (safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((((l_714[1][2] &= 0x3C88L) | (safe_div_func_uint32_t_u_u(l_668, (l_717[2][5][6] = 0x92675F20L)))) , l_718) != (((***g_615) |= (safe_add_func_int16_t_s_s(((*l_640) = (safe_add_func_uint16_t_u_u((0x07DBDFEAF314B036LL || (((*l_8) = ((*g_10) = ((void*)0 == (*g_330)))) > l_689)), g_365.f0))), 0L))) , (*g_271))), (-1L))), 2)))), l_689)) ^ 0x5AL), 4294967290UL)))))
                { 
                    uint64_t l_742 = 0x10FA3F5D78149A3CLL;
                    g_740 ^= (((~g_9) >= (safe_mul_func_int16_t_s_s(((***l_697) , (~(safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(g_286[1], (safe_div_func_int8_t_s_s(0xFDL, (safe_lshift_func_uint8_t_u_s(l_717[2][5][6], (l_689 < (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(0x3799DC04L, l_676)) ^ l_708[4][0][3]), 0x5214L))))))))), l_668)))), g_170))) & (-4L));
                    (**g_616) = 1L;
                    ++l_742;
                }
                else
                { 
                    int32_t *l_757 = &g_79[0][0][4];
                    int32_t *l_758 = &g_79[1][0][3];
                    int32_t *l_759 = &g_690[0][3];
                    int32_t ** const l_756[7][3] = {{&l_757,&l_757,&l_758},{&l_757,&l_757,&l_758},{&l_757,&l_757,&l_758},{&l_757,&l_757,&l_758},{&l_757,&l_757,&l_758},{&l_757,&l_757,&l_758},{&l_757,&l_757,&l_758}};
                    int32_t ** const *l_755 = &l_756[2][2];
                    int32_t ** const **l_754[3];
                    int32_t l_768 = 0xD0E6F752L;
                    int8_t * const *l_770 = &l_8;
                    int8_t * const **l_771 = &l_770;
                    int8_t **l_772[5];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_754[i] = &l_755;
                    for (i = 0; i < 5; i++)
                        l_772[i] = (void*)0;
                    l_717[2][1][3] &= (safe_lshift_func_int16_t_s_s((((++(*g_239)) || ((safe_add_func_int64_t_s_s(((g_751 = g_751) != l_752), 18446744073709551615UL)) < ((*g_10) &= (&g_272 != (g_760[5][2] = &g_272))))) < (((((*g_459) , (*g_459)) , 0xB2L) , (void*)0) != (**l_755))), 12));
                    (***l_697) = ((((*l_640) &= ((--g_365.f0) >= (safe_div_func_int8_t_s_s((((0x98DBB70F7136B57BLL & (((((l_717[2][5][6] , (g_321 |= l_708[1][6][0])) && ((l_767 == ((*g_459) , (g_142[0][0] , &g_460))) == 4294967290UL)) || g_575) > g_286[1]) , l_714[1][2])) | 0xD99D71F3L) , (***l_697)), l_768)))) & g_769) || 0x3D2EEB54L);
                    (***l_697) = (((*l_771) = l_770) != l_772[2]);
                    (**g_616) = (safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((0xFA4FL < 0x2A67L), ((safe_rshift_func_uint16_t_u_u((((g_321 = 1UL) ^ (((***l_697) , (((((safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(g_365.f2, 2)), (***l_697))), ((((safe_mul_func_uint8_t_u_u(((*g_239) > g_79[5][0][4]), l_787[0])) != 7UL) || (-4L)) & (*g_239)))) >= 1UL) <= (-4L)) , &l_609[3]) != l_788)) , 1L)) & 0xB330F2DBB5DA3B73LL), 10)) | g_575))), l_768));
                    (**g_616) = (***l_697);
                }
            }
            else
            { 
                int32_t ****l_790 = (void*)0;
                int32_t ****l_791 = &l_697;
                if (l_636.f0)
                    goto lbl_789;
                (*l_791) = &g_616;
                return (**g_616);
            }
        }
        else
        { 
            int16_t *l_817[3][3] = {{&g_202[4][1],&g_202[4][1],&g_202[4][1]},{&g_202[4][1],&g_202[4][1],&g_202[4][1]},{&g_202[4][1],&g_202[4][1],&g_202[4][1]}};
            int32_t l_831 = 0xFDA36EEFL;
            int8_t *l_833 = &l_741[0];
            int i, j;
            for (l_580 = (-7); (l_580 != 13); l_580 = safe_add_func_int32_t_s_s(l_580, 5))
            { 
                uint32_t l_799 = 0x05531B0EL;
                int16_t l_824 = 0x64ADL;
                uint16_t l_832 = 0x1C0DL;
                for (l_636.f2 = 0; (l_636.f2 < (-19)); --l_636.f2)
                { 
                    int32_t l_796 = 0x25500170L;
                    int32_t l_797 = (-1L);
                    int32_t l_798 = (-4L);
                    (***g_615) = (*g_205);
                    ++l_799;
                    return l_799;
                }
                for (g_460.f1.f0 = 0; (g_460.f1.f0 < 14); g_460.f1.f0++)
                { 
                    uint8_t *l_805 = (void*)0;
                    uint8_t *l_808 = (void*)0;
                    uint8_t *l_809 = &g_286[1];
                    uint8_t *l_825 = (void*)0;
                    uint8_t *l_826 = (void*)0;
                    uint8_t *l_827 = &l_646[1];
                    const int8_t l_830 = (-4L);
                    (**g_616) &= 0xE1B057DAL;
                }
                for (g_460.f3 = 0; (g_460.f3 >= 0); g_460.f3 -= 1)
                { 
                    int32_t l_834 = 0x95D39D32L;
                    int32_t l_835 = 0xFB1A35D9L;
                    int32_t l_836 = 0x0B8606DCL;
                    l_837[0]++;
                    return l_831;
                }
                for (l_824 = 0; (l_824 == (-7)); --l_824)
                { 
                    return (**g_616);
                }
                if ((*g_205))
                    continue;
            }
        }
    }
    return g_842;
}



static int8_t ** func_12(int8_t  p_13)
{ 
    uint32_t l_470[4];
    int32_t l_472 = 8L;
    int8_t **l_476[2];
    uint8_t l_478 = 2UL;
    struct S0 l_486 = {65527UL,0x2EL,-8L};
    int32_t l_505[4][4][6] = {{{0x6F321581L,4L,(-1L),0x283BBB0EL,0x283BBB0EL,(-1L)},{0x283BBB0EL,0x283BBB0EL,(-1L),4L,0x6F321581L,(-1L)},{4L,0x6F321581L,(-1L),0x6F321581L,4L,(-1L)},{0x6F321581L,4L,0x283BBB0EL,0xAE87EE55L,0xAE87EE55L,0x283BBB0EL}},{{0xAE87EE55L,0xAE87EE55L,0x283BBB0EL,(-1L),1L,0x283BBB0EL},{(-1L),1L,0x283BBB0EL,1L,(-1L),0x283BBB0EL},{1L,(-1L),0x283BBB0EL,0xAE87EE55L,0xAE87EE55L,0x283BBB0EL},{0xAE87EE55L,0xAE87EE55L,0x283BBB0EL,(-1L),1L,0x283BBB0EL}},{{(-1L),1L,0x283BBB0EL,1L,(-1L),0x283BBB0EL},{1L,(-1L),0x283BBB0EL,0xAE87EE55L,0xAE87EE55L,0x283BBB0EL},{0xAE87EE55L,0xAE87EE55L,0x283BBB0EL,(-1L),1L,0x283BBB0EL},{(-1L),1L,0x283BBB0EL,1L,(-1L),0x283BBB0EL}},{{1L,(-1L),0x283BBB0EL,0xAE87EE55L,0xAE87EE55L,0x283BBB0EL},{0xAE87EE55L,0xAE87EE55L,0x283BBB0EL,(-1L),1L,0x283BBB0EL},{(-1L),1L,0x283BBB0EL,1L,(-1L),0x283BBB0EL},{1L,(-1L),0x283BBB0EL,0xAE87EE55L,0xAE87EE55L,0x283BBB0EL}}};
    int8_t l_507 = 0xB3L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_470[i] = 4294967289UL;
    for (i = 0; i < 2; i++)
        l_476[i] = &g_331[2][0];
    for (g_5 = 0; (g_5 <= 0); g_5 += 1)
    { 
        int8_t **l_464[1];
        int32_t l_469 = 0x5B6B8E5BL;
        uint32_t *l_489 = &l_470[3];
        int32_t *l_491 = &l_472;
        int32_t *l_492 = &g_25;
        int32_t *l_493 = &l_486.f2;
        int32_t *l_494 = &l_472;
        int32_t *l_495 = &g_460.f3;
        int32_t *l_496 = (void*)0;
        int32_t *l_497 = &l_486.f2;
        int32_t *l_498 = &g_365.f2;
        int32_t *l_499 = &g_425;
        int32_t *l_500 = &g_425;
        int32_t *l_501 = &g_142[3][5].f2;
        int32_t *l_502 = &l_472;
        int32_t *l_503 = (void*)0;
        int32_t *l_504[6] = {&g_365.f2,&g_365.f2,&g_14,&g_365.f2,&g_365.f2,&g_14};
        int32_t l_506 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_464[i] = (void*)0;
        for (g_9 = 0; (g_9 <= 0); g_9 += 1)
        { 
            uint32_t *l_490 = &g_164;
            for (p_13 = 0; (p_13 >= 0); p_13 -= 1)
            { 
                uint16_t l_473 = 6UL;
                for (g_14 = 0; (g_14 <= 0); g_14 += 1)
                { 
                    int32_t *l_465 = (void*)0;
                    int32_t *l_466 = &g_365.f2;
                    int i, j;
                    (*l_466) = ((func_15(func_17((g_11[g_14][(g_5 + 1)] | (safe_lshift_func_uint8_t_u_u((&g_11[0][0] == (void*)0), 4))), (p_13 != p_13), g_5, p_13)) , (void*)0) != l_464[0]);
                    l_469 = (safe_lshift_func_uint16_t_u_u(0x8942L, 15));
                }
                if ((l_470[3] = p_13))
                { 
                    int32_t *l_471[4][3][7] = {{{&g_14,&g_425,&g_142[3][5].f2,&g_25,&g_425,&g_142[3][5].f2,&g_425},{&g_142[3][5].f2,&g_365.f2,&g_365.f2,&g_142[3][5].f2,&g_14,(void*)0,&g_14},{&g_460.f0,&g_365.f2,&g_365.f2,&g_365.f2,&g_14,&g_460.f0,&g_460.f0}},{{&g_365.f2,&g_14,&g_142[3][5].f2,&g_14,&g_365.f2,&g_460.f0,&g_14},{&g_142[3][5].f2,&g_14,(void*)0,&g_14,&g_365.f2,(void*)0,&g_425},{&g_365.f2,&g_425,&g_365.f2,&g_365.f2,&g_425,&g_365.f2,&g_14}},{{&g_142[3][5].f2,&g_14,&g_142[3][5].f2,&g_142[3][5].f2,&g_425,&g_14,&g_14},{&g_365.f2,&g_460.f0,&g_365.f2,&g_25,&g_365.f2,&g_460.f0,&g_365.f2},{&g_460.f0,&g_14,&g_365.f2,&g_365.f2,&g_365.f2,&g_460.f0,&g_365.f2}},{{&g_142[3][5].f2,&g_425,&g_14,&g_14,&g_14,&g_14,&g_425},{&g_14,&g_14,&g_365.f2,&g_25,&g_14,&g_365.f2,&g_425},{(void*)0,&g_14,&g_365.f2,(void*)0,&g_425,(void*)0,&g_365.f2}}};
                    int i, j, k;
                    --l_473;
                    return l_476[1];
                }
                else
                { 
                    int8_t **l_477 = &g_331[5][0];
                    return l_477;
                }
            }
            if (l_478)
                continue;
            for (g_425 = 0; (g_425 >= 0); g_425 -= 1)
            { 
                (*g_205) &= (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((g_365.f2 != 18446744073709551615UL), (safe_sub_func_uint32_t_u_u(((((!p_13) , ((-3L) & ((l_486 , 1UL) & (safe_rshift_func_int16_t_s_s((l_489 != l_490), 13))))) | l_469) < 0xBFD3EBC54D4B183ALL), p_13)))), p_13));
            }
        }
        if ((*g_205))
            break;
        ++g_510;
        return l_464[0];
    }
    g_205 = &g_14;
    return l_476[1];
}



static struct S0  func_15(int8_t ** p_16)
{ 
    int32_t l_335 = 0L;
    int32_t **l_339 = (void*)0;
    int32_t **l_340 = &g_205;
    const struct S0 l_382 = {0xEE43L,0xC7L,1L};
    int32_t l_385 = 0x6652E78CL;
    uint32_t l_401 = 4294967295UL;
    int32_t l_431 = 9L;
    int32_t l_433[4][1] = {{0x39530AEDL},{5L},{0x39530AEDL},{5L}};
    int32_t *l_462 = &l_431;
    int32_t *l_463[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j;
    for (g_145 = 0; (g_145 > 53); ++g_145)
    { 
        int32_t *l_338 = &g_25;
        for (g_321 = 0; g_321 < 1; g_321 += 1)
        {
            for (g_157 = 0; g_157 < 2; g_157 += 1)
            {
                g_11[g_321][g_157] = 0xDDL;
            }
        }
        l_335 &= (+(0x98D5531B2F3483B8LL || 18446744073709551612UL));
        (*l_338) = (safe_div_func_uint8_t_u_u(249UL, (**p_16)));
    }
    (*l_340) = &l_335;
    (**l_340) = (-1L);
    for (g_133 = 0; (g_133 >= (-23)); g_133 = safe_sub_func_uint16_t_u_u(g_133, 3))
    { 
        int64_t l_358 = 0x982EFF8BAF22FB55LL;
        union U1 l_359 = {0L};
        int32_t l_430 = 0xE166F187L;
        int32_t l_432 = 6L;
        int32_t l_461 = (-5L);
        for (g_130 = (-1); (g_130 < 53); g_130 = safe_add_func_uint64_t_u_u(g_130, 9))
        { 
            uint8_t l_360 = 0UL;
            struct S0 *l_362[7] = {&g_142[4][4],&g_142[4][4],&g_142[4][4],&g_142[4][4],&g_142[4][4],&g_142[4][4],&g_142[4][4]};
            int32_t *l_383 = (void*)0;
            int32_t *l_384[6][7] = {{&g_142[3][5].f2,&g_142[3][5].f2,&l_335,(void*)0,&l_335,&l_335,&l_335},{&g_142[3][5].f2,&l_335,&l_335,&g_142[3][5].f2,(void*)0,&g_142[3][5].f2,&g_142[3][5].f2},{&g_142[3][5].f2,&l_359.f3,(void*)0,(void*)0,&l_359.f3,&g_142[3][5].f2,&l_335},{&l_359.f3,&g_142[3][5].f2,&g_142[3][5].f2,&l_359.f0,&l_359.f0,&g_142[3][5].f2,&g_142[3][5].f2},{&l_359.f3,&l_335,&g_142[3][5].f2,&l_359.f3,(void*)0,(void*)0,&l_359.f3},{&g_142[3][5].f2,&g_142[3][5].f2,&g_142[3][5].f2,(void*)0,&g_142[3][5].f2,&l_335,&l_335}};
            uint32_t l_386[1];
            int8_t ***l_398 = &g_330;
            int8_t ****l_397 = &l_398;
            const union U1 l_451 = {-1L};
            int i, j;
            for (i = 0; i < 1; i++)
                l_386[i] = 9UL;
            for (g_162 = 0; (g_162 > (-23)); g_162--)
            { 
                int16_t *l_351 = &g_202[2][2];
                int64_t *l_356[3];
                const int32_t l_357[3][3][1] = {{{0xD4369DB7L},{1L},{0xD4369DB7L}},{{1L},{0xD4369DB7L},{1L}},{{0xD4369DB7L},{1L},{0xD4369DB7L}}};
                uint32_t *l_361 = &g_164;
                struct S0 **l_363 = &l_362[3];
                struct S0 *l_364[7][6] = {{&g_365,(void*)0,&g_142[3][4],&g_142[4][5],&g_142[4][5],&g_142[3][4]},{(void*)0,(void*)0,&g_365,(void*)0,&g_142[4][5],(void*)0},{&g_142[4][5],(void*)0,&g_142[3][5],(void*)0,(void*)0,&g_365},{(void*)0,&g_142[4][5],&g_142[3][5],&g_142[4][5],(void*)0,(void*)0},{&g_365,&g_142[4][5],&g_365,&g_365,(void*)0,&g_142[3][4]},{&g_365,(void*)0,&g_142[3][4],&g_142[4][5],&g_142[4][5],&g_142[3][4]},{(void*)0,(void*)0,&g_365,(void*)0,&g_142[4][5],(void*)0}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_356[i] = &g_194;
                l_364[1][5] = ((*l_363) = ((safe_mul_func_int16_t_s_s(((*l_351) = (safe_add_func_int64_t_s_s(g_25, (*g_239)))), ((safe_add_func_uint32_t_u_u(((*l_361) = (safe_add_func_uint32_t_u_u(0xD633C8C3L, (((((*l_340) = (((g_194 = 5L) > (l_357[2][0][0] != ((l_358 | (l_359 , (*g_239))) | l_360))) , &g_25)) != (void*)0) && g_9) >= l_358)))), l_360)) == l_358))) , l_362[6]));
                return g_142[0][0];
            }
            for (l_359.f1.f2 = 17; (l_359.f1.f2 <= 5); l_359.f1.f2 = safe_sub_func_int16_t_s_s(l_359.f1.f2, 3))
            { 
                int8_t l_372 = 0xF2L;
                int32_t l_374 = 1L;
                for (l_358 = 6; (l_358 >= 0); l_358 -= 1)
                { 
                    uint64_t l_368 = 0xC67FAAF16EB98691LL;
                    int32_t *l_373 = &g_365.f2;
                    int16_t *l_379 = &g_202[2][0];
                    int i;
                    (**l_340) = l_368;
                    (*l_373) ^= ((0x034214085D790C8DLL != ((~l_372) <= 0xFA8D580E14417E8BLL)) > (((*g_239) , (**l_340)) , (*g_239)));
                    if ((*g_205))
                        continue;
                    l_374 = l_358;
                    (**l_340) &= (l_372 , (((l_372 , (((safe_div_func_uint8_t_u_u((((*l_379) = (safe_rshift_func_int8_t_s_u((**p_16), 5))) != l_360), (safe_mod_func_int64_t_s_s(((l_382 , 0x4A0EE2407592093BLL) == l_374), 0xAA1835EFA3F52DB4LL)))) >= (**p_16)) , 0x57L)) , (*l_373)) || 2UL));
                }
                if (l_360)
                    continue;
            }
            --l_386[0];
            if (((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((((*l_397) = &p_16) == (void*)0), (safe_mod_func_int32_t_s_s(((g_286[1] == l_401) || l_359.f4), (safe_rshift_func_int8_t_s_s((**p_16), ((~l_358) || 0xE4C1123FF1388ADDLL))))))) < g_79[0][0][4]), (**l_340))), (**l_340))), (**l_340))) == g_79[0][0][4]))
            { 
                int32_t **l_410 = &g_273[0];
                int8_t *l_411 = &g_163;
                uint16_t *l_412 = &g_142[3][5].f0;
                int32_t l_419 = 0x535DEE8CL;
                int32_t l_422 = 1L;
                int32_t l_426[2];
                uint32_t l_427 = 0xD9942291L;
                int i;
                for (i = 0; i < 2; i++)
                    l_426[i] = 7L;
                for (l_335 = (-24); (l_335 <= 1); l_335 = safe_add_func_uint8_t_u_u(l_335, 6))
                { 
                    struct S0 l_407 = {0x352CL,-1L,0x2BA41123L};
                    return l_407;
                }
                if (((g_142[4][2] , ((*l_412) ^= (safe_mod_func_uint32_t_u_u((((l_410 != (void*)0) , (g_11[0][0] == g_130)) == ((*l_411) ^= 1L)), 0xA9890DADL)))) < 0x5023L))
                { 
                    uint64_t l_413 = 0x9A46A21A4FC54CE3LL;
                    l_413--;
                }
                else
                { 
                    uint32_t l_416 = 0xC890624DL;
                    int32_t l_420 = (-5L);
                    int32_t l_421 = 0xB4FA158DL;
                    l_416++;
                    --l_427;
                    if (l_359.f3)
                        break;
                }
                l_359.f0 |= ((4UL != (((((l_426[0] | (**p_16)) > (*g_205)) , l_419) , g_425) , (((void*)0 == &g_198[0]) & 0x2263929AFEC63DF8LL))) , 0x9ACC03EEL);
                --g_434;
                for (l_427 = 0; (l_427 < 27); l_427++)
                { 
                    const int8_t *l_441 = &g_142[3][5].f1;
                    const int8_t **l_440 = &l_441;
                    const int8_t ***l_439 = &l_440;
                    int32_t l_447 = 0xA023C1FAL;
                    int64_t *l_448[7] = {&l_358,&l_358,&g_423,&l_358,&l_358,&g_423,&l_358};
                    int32_t l_452 = (-1L);
                    uint8_t *l_454[2];
                    struct S0 *l_455 = &g_142[3][0];
                    struct S0 **l_456 = (void*)0;
                    struct S0 **l_457 = &l_362[6];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_454[i] = &g_286[1];
                    (*g_205) = ((*g_239) || (((**l_340) && ((((*l_439) = (void*)0) != (((l_426[0] <= ((g_286[1] = (+(safe_lshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((g_194 = (l_447 &= ((**p_16) , (l_422 &= 0xCFB551B8BC6B3AAELL)))), (safe_sub_func_int16_t_s_s((l_451 , g_425), l_452)))) >= g_453), g_147)))) <= l_430)) == (-1L)) , p_16)) ^ l_427)) || l_447));
                    (*l_457) = l_455;
                }
            }
            else
            { 
                int32_t *l_458 = &g_365.f2;
                l_458 = &l_432;
                (*l_340) = (*l_340);
                g_81 = g_459;
            }
            (*g_205) ^= l_461;
        }
    }
    g_460.f1.f2 = ((*l_462) = ((*g_205) = 9L));
    return l_382;
}



static int8_t ** func_17(int64_t  p_18, int32_t  p_19, const int32_t  p_20, int32_t  p_21)
{ 
    uint16_t l_39 = 0x19BAL;
    uint32_t l_46 = 18446744073709551611UL;
    struct S0 l_319 = {65529UL,0xC3L,1L};
    uint16_t *l_320 = &g_321;
    int32_t *l_322 = (void*)0;
    int32_t *l_323 = &l_319.f2;
    int8_t *l_325 = (void*)0;
    int8_t **l_324[6][6] = {{&l_325,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325,&l_325,&l_325}};
    int8_t **l_326 = &l_325;
    int8_t **l_327[5][7][4] = {{{&l_325,&l_325,&l_325,(void*)0},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,(void*)0},{&l_325,&l_325,&l_325,&l_325}},{{&l_325,&l_325,&l_325,(void*)0},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,(void*)0},{&l_325,&l_325,&l_325,&l_325}},{{&l_325,&l_325,&l_325,(void*)0},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325}},{{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325}},{{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325},{&l_325,&l_325,&l_325,&l_325}}};
    int8_t **l_328 = &l_325;
    int8_t **l_329 = &l_325;
    int i, j, k;
    g_24 = (void*)0;
    (*l_323) = ((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((((***g_271) = (safe_rshift_func_uint16_t_u_s(((*l_320) |= ((g_11[0][1] == ((safe_rshift_func_int8_t_s_u(0xAAL, (&p_21 != (void*)0))) | (func_34(l_39, g_11[0][0], func_40((l_39 , p_21), p_18, p_18, l_46, l_46), l_319) , g_142[3][5].f1))) , g_162)), p_20))) , 0x2BCBL) >= 65535UL), g_146)) < p_19), 6)) ^ p_18);
    return g_330;
}



static uint32_t  func_34(int64_t  p_35, uint64_t  p_36, int32_t * p_37, struct S0  p_38)
{ 
    return g_194;
}



static int32_t * func_40(int16_t  p_41, uint16_t  p_42, uint32_t  p_43, int64_t  p_44, int32_t  p_45)
{ 
    struct S0 l_58 = {0UL,0x47L,-1L};
    union U1 l_64 = {0L};
    int32_t **l_233 = (void*)0;
    int32_t **l_234 = &g_205;
    uint64_t *l_240[4][3][7] = {{{&g_135,&g_135,&g_135,&g_135,&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135}},{{(void*)0,&g_135,(void*)0,&g_135,(void*)0,&g_135,(void*)0},{(void*)0,&g_135,&g_135,&g_135,&g_135,(void*)0,&g_135},{&g_135,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135}},{{(void*)0,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135},{(void*)0,&g_135,&g_135,&g_135,(void*)0,&g_135,&g_135},{&g_135,&g_135,&g_135,&g_135,(void*)0,(void*)0,&g_135}},{{&g_135,&g_135,&g_135,&g_135,&g_135,&g_135,&g_135},{&g_135,&g_135,&g_135,&g_135,(void*)0,&g_135,&g_135},{(void*)0,&g_135,(void*)0,&g_135,(void*)0,&g_135,(void*)0}}};
    uint8_t *l_245 = (void*)0;
    uint8_t *l_246[3][5] = {{&g_167,&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167,&g_167}};
    int8_t *l_256 = &l_64.f4;
    int32_t *l_270 = (void*)0;
    int32_t **l_269 = &l_270;
    int32_t *** const l_268[1][1] = {{&l_269}};
    const int8_t *l_275 = &g_9;
    const int8_t **l_274[1][3][2];
    uint64_t l_301 = 0x1B6FD6401BE5F65DLL;
    union U1 **l_318 = &g_81;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
                l_274[i][j][k] = &l_275;
        }
    }
    (*l_234) = func_47((((safe_lshift_func_uint8_t_u_s(g_11[0][0], 6)) < func_54(l_58, p_45, g_25)) > (safe_mod_func_int64_t_s_s(((~1UL) >= ((g_14 , p_44) <= l_58.f1)), g_25))), g_11[0][1], l_64, &g_9);
    if ((251UL | (safe_sub_func_uint8_t_u_u((**l_234), (((g_247 = (safe_rshift_func_uint16_t_u_u((g_11[0][1] > ((-9L) | (g_239 == (l_240[2][0][2] = l_240[2][0][2])))), (((safe_sub_func_int64_t_s_s(((p_42 == 0xB983273023F3548BLL) <= p_42), p_44)) && 0L) > 0x9FF18445L)))) <= (*g_10)) > 4L)))))
    { 
        int32_t *l_248 = &l_64.f3;
        (*l_234) = l_248;
    }
    else
    { 
        uint16_t *l_249 = &l_58.f0;
        int32_t **l_257 = &g_24;
        (**l_234) = (((((((*l_249) = g_79[0][0][4]) != ((*g_205) < ((safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((l_256 = l_246[2][4]) != ((l_257 != l_233) , ((safe_sub_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(p_44, (safe_sub_func_uint8_t_u_u((((((g_157 & p_42) > p_41) , (*g_205)) != 0x086BB410L) > (**l_234)), (*g_10))))) ^ (*g_205)), p_43)) && (*g_10)) , p_45) & 0x65F4L), g_9)), p_44)) , (void*)0))), 2)) , p_44), 11)) || g_142[3][5].f1), (**l_234))) >= 0x0412A0F1875F9D22LL))) ^ p_44) , p_41) , l_268[0][0]) != g_271);
    }
    if ((l_274[0][2][0] != &l_275))
    { 
        int32_t **l_278 = &g_205;
        int32_t l_283 = 1L;
        int32_t l_285 = 1L;
        int32_t *l_298 = (void*)0;
        int32_t *l_313[2][4][4] = {{{&l_58.f2,(void*)0,(void*)0,&l_58.f2},{(void*)0,&l_58.f2,(void*)0,(void*)0},{&l_58.f2,&l_58.f2,&l_283,&l_58.f2},{(void*)0,&l_283,&l_283,(void*)0}},{{&l_283,(void*)0,&l_283,&l_283},{(void*)0,(void*)0,&l_58.f2,(void*)0},{(void*)0,&l_283,&l_283,(void*)0},{&l_283,(void*)0,&l_283,&l_283}}};
        int i, j, k;
        for (g_145 = 0; (g_145 <= 32); ++g_145)
        { 
            int32_t **l_280[7];
            int8_t l_299 = (-1L);
            uint32_t *l_300 = &g_203;
            int32_t ***l_312 = &l_233;
            int i;
            for (i = 0; i < 7; i++)
                l_280[i] = &g_24;
            for (p_42 = 0; (p_42 <= 2); p_42 += 1)
            { 
                int32_t ***l_279 = &l_234;
                int32_t ***l_281 = &l_233;
                int32_t l_282 = 0x0EF95768L;
                int32_t l_284 = 0L;
                g_25 = (g_142[3][5].f2 = (l_64.f3 = (((*l_279) = l_278) != ((*l_281) = l_280[0]))));
                if (p_44)
                    break;
                ++g_286[1];
                (**l_281) = (*l_278);
                for (l_64.f1.f2 = 0; (l_64.f1.f2 <= 0); l_64.f1.f2 += 1)
                { 
                    if (p_44)
                        break;
                }
            }
        }
        g_314++;
    }
    else
    { 
        int32_t *l_317 = &g_25;
        return l_317;
    }
    (*l_318) = (((&g_25 != &g_25) || g_157) , &l_64);
    return &g_14;
}



static int32_t * func_47(uint16_t  p_48, uint32_t  p_49, union U1  p_50, int8_t * p_51)
{ 
    int8_t l_76[2];
    int32_t *l_80 = &g_25;
    int8_t * const *l_93 = &g_10;
    int32_t *l_96 = &g_25;
    int8_t l_131[6] = {6L,6L,6L,6L,6L,6L};
    int32_t *l_139 = &g_133;
    int32_t **l_138 = &l_139;
    int32_t ***l_143 = (void*)0;
    int32_t l_151 = 0x4D167296L;
    int32_t l_153 = 0x9182FBE4L;
    int i;
    for (i = 0; i < 2; i++)
        l_76[i] = 0L;
    for (p_50.f3 = 0; (p_50.f3 == 11); p_50.f3 = safe_add_func_int16_t_s_s(p_50.f3, 1))
    { 
        int8_t l_73[4];
        int32_t **l_74 = &g_24;
        struct S0 l_75 = {0xE115L,-5L,0xC4269725L};
        int32_t *l_77 = (void*)0;
        int32_t *l_78 = &g_79[0][0][4];
        int8_t * const **l_94 = &l_93;
        int8_t *l_95 = &l_76[0];
        int i;
        for (i = 0; i < 4; i++)
            l_73[i] = 4L;
        l_80 = (((*l_78) ^= ((safe_mod_func_int16_t_s_s((g_14 & (((((void*)0 == &g_10) & (safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_u(0x69L, 5)) , ((l_73[2] == ((l_74 == (l_75 , &g_24)) | l_76[0])) || 65535UL)) || l_76[1]), l_76[0]))) & l_76[0]) <= (-5L))), 1L)) && p_50.f4)) , l_80);
        g_81 = &p_50;
        (*l_80) = (safe_div_func_int32_t_s_s(0xB92859F9L, ((safe_sub_func_int8_t_s_s(((*l_95) = (safe_unary_minus_func_uint32_t_u(((safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((p_49 > (((safe_rshift_func_uint8_t_u_s((&g_9 == &g_11[0][0]), 1)) & (((((*l_94) = l_93) != (void*)0) == p_50.f3) ^ (**l_74))) < 0xBDC2D20EL)), p_49)), (*l_80))) <= (*g_24))))), (**l_74))) , (*g_24))));
        return l_96;
    }
    for (p_50.f3 = (-3); (p_50.f3 <= (-30)); --p_50.f3)
    { 
        int32_t *l_101 = &g_79[0][0][4];
        int32_t **l_126[5][5] = {{&l_96,&l_96,(void*)0,&l_96,&l_96},{(void*)0,&g_24,(void*)0,(void*)0,&g_24},{&l_96,&l_96,&l_96,&l_96,&l_96},{&g_24,&g_24,&g_24,&g_24,&g_24},{&l_96,&l_96,&l_96,&l_96,&l_96}};
        int32_t **l_129 = &l_80;
        int32_t **l_141 = &l_101;
        uint64_t *l_220 = &g_135;
        int i, j;
        for (p_49 = (-26); (p_49 > 55); p_49++)
        { 
            int32_t **l_102 = &l_101;
            int32_t **l_103 = &l_96;
            struct S0 l_132 = {0UL,-1L,6L};
            int32_t l_156[6] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
            int32_t l_160 = 0x6BB0A552L;
            int i;
            (*l_96) = (&g_79[0][0][4] != ((*l_102) = l_101));
            (*l_103) = l_96;
            for (g_25 = 0; (g_25 <= (-6)); --g_25)
            { 
                int32_t **l_127 = &g_24;
                int32_t ***l_128[3];
                uint64_t *l_134 = &g_135;
                int32_t ***l_140[4][1][5] = {{{&l_138,(void*)0,&l_138,(void*)0,&l_102}},{{(void*)0,&l_102,&l_102,&l_102,(void*)0}},{{&l_138,&l_102,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&l_102,(void*)0,(void*)0}}};
                int64_t *l_144 = (void*)0;
                uint8_t l_204 = 0UL;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_128[i] = &l_127;
                g_133 = (safe_add_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((*p_51), (safe_unary_minus_func_int64_t_s((((((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(p_50.f0, 2)), (((+((((((**l_103) , 0x36L) == (safe_mod_func_int32_t_s_s((g_130 ^= (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_5, (safe_div_func_uint8_t_u_u((l_126[1][0] != (l_129 = l_127)), p_50.f3)))), g_11[0][0]))), p_50.f0))) && 0xE742L) != p_49) >= l_131[5])) , l_132) , p_50.f0))) | 0x2BC7L) <= p_50.f4) , g_5) > p_49))))), (*p_51))) == 0xB7A3L) > (*g_24)) < (**l_103)), p_49));
                if ((((*l_134) = 8UL) && (g_145 = (safe_sub_func_int64_t_s_s((((((((l_138 != (l_141 = l_102)) , &g_9) != (g_142[3][5] , &g_9)) <= (((((void*)0 == l_143) & 0x6BL) >= 0x411D375A9F46BED5LL) || g_79[6][0][4])) <= (*p_51)) >= 0x2746L) != 0x91L), p_49)))))
                { 
                    int32_t l_150 = 0xB7756587L;
                    int32_t l_152 = 0xB004275FL;
                    int32_t l_154 = 0xC12866A8L;
                    int32_t l_155[5][1][1] = {{{0x5B685524L}},{{(-5L)}},{{0x5B685524L}},{{(-5L)}},{{0x5B685524L}}};
                    int i, j, k;
                    ++g_147;
                    ++g_157;
                    if (p_50.f0)
                        continue;
                    ++g_164;
                }
                else
                { 
                    --g_167;
                    (*l_127) = &l_153;
                    (*g_24) = (18446744073709551609UL & p_49);
                }
                g_170++;
                if ((*g_24))
                { 
                    uint32_t l_173 = 8UL;
                    ++l_173;
                }
                else
                { 
                    uint32_t *l_190 = &g_157;
                    int64_t *l_191 = (void*)0;
                    int64_t *l_192 = (void*)0;
                    int64_t *l_193 = &g_194;
                    int8_t *l_200 = &l_76[1];
                    int16_t *l_201 = &g_202[4][1];
                    g_203 = (g_142[3][5].f2 ^= ((safe_rshift_func_int16_t_s_u(((*l_201) = (safe_sub_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(0x1389889316105567LL, ((g_146 ^ ((*l_193) = ((safe_rshift_func_uint16_t_u_s(((void*)0 == &g_79[0][0][4]), 10)) | ((*l_190) = (safe_rshift_func_uint8_t_u_s(g_142[3][5].f0, 7)))))) ^ (~0L)))), ((!(+(((*l_139) |= ((*l_101) = ((((*l_200) = (g_198[0] == &g_199)) , (*l_96)) != g_142[3][5].f0))) , g_25))) < p_49))), 0x765FF4329A422D8ALL)), g_142[3][5].f1))), 9)) < (**l_103)));
                    g_142[3][5].f2 = l_204;
                    g_205 = ((*l_129) = (void*)0);
                    return l_190;
                }
            }
        }
        for (g_163 = (-29); (g_163 == (-15)); ++g_163)
        { 
            uint32_t *l_210[4] = {&g_130,&g_130,&g_130,&g_130};
            int32_t l_219 = (-7L);
            int i;
        }
    }
    return &g_25;
}



static int32_t  func_54(struct S0  p_55, int32_t  p_56, uint32_t  p_57)
{ 
    int32_t *l_59 = &g_25;
    int32_t **l_60[2][1][6] = {{{&g_24,&g_24,&l_59,&g_24,&g_24,&g_24}},{{&g_24,&g_24,&g_24,&g_24,&l_59,&g_24}}};
    int i, j, k;
    g_24 = l_59;
    p_55.f2 = p_55.f1;
    return (*g_24);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_79[i][j][k], "g_79[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_142[i][j].f0, "g_142[i][j].f0", print_hash_value);
            transparent_crc(g_142[i][j].f1, "g_142[i][j].f1", print_hash_value);
            transparent_crc(g_142[i][j].f2, "g_142[i][j].f2", print_hash_value);

        }
    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_202[i][j], "g_202[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_286[i], "g_286[i]", print_hash_value);

    }
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_365.f0, "g_365.f0", print_hash_value);
    transparent_crc(g_365.f1, "g_365.f1", print_hash_value);
    transparent_crc(g_365.f2, "g_365.f2", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_460.f0, "g_460.f0", print_hash_value);
    transparent_crc(g_460.f3, "g_460.f3", print_hash_value);
    transparent_crc(g_460.f4, "g_460.f4", print_hash_value);
    transparent_crc(g_508, "g_508", print_hash_value);
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_577[i], "g_577[i]", print_hash_value);

    }
    transparent_crc(g_603, "g_603", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_690[i][j], "g_690[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    transparent_crc(g_842, "g_842", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
