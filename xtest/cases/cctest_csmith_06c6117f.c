// SPDX-License-Identifier: MIT
// cctest_csmith_06c6117f.c --- cctest case csmith_06c6117f (csmith seed 113643903)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbad3a315 */
/* @exp_ticks 0x73f0 */

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

// Options:   -s 113643903 -o /tmp/csmith_gen_i6yv8l7j/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint8_t  f1;
   int32_t  f2;
   uint64_t  f3;
   int8_t  f4;
};
#pragma pack(pop)

union U1 {
   uint8_t  f0;
   uint64_t  f1;
};

union U2 {
   int8_t * const  f0;
   int8_t * f1;
   int32_t  f2;
};

union U3 {
   int8_t * f0;
   const int8_t * f1;
   uint32_t  f2;
   int16_t  f3;
};

union U4 {
   uint64_t  f0;
};


static int8_t g_6 = 0L;
static int8_t *g_5 = &g_6;
static int32_t g_42 = 0x55126ED4L;
static int8_t g_64 = 0x26L;
static int32_t *g_72[6] = {&g_42,&g_42,&g_42,&g_42,&g_42,&g_42};
static struct S0 g_74 = {0xA746704BC7F4BD8ALL,255UL,0xCAB38427L,18446744073709551615UL,0x6FL};
static uint64_t g_97 = 0UL;
static union U3 g_99 = {0};
static uint8_t g_119 = 0x6BL;
static uint16_t g_132 = 0xA013L;
static uint64_t *g_145 = (void*)0;
static uint64_t *g_146 = &g_74.f0;
static union U4 g_175 = {0x81213417209D6907LL};
static int32_t g_186 = 0xD2F6D196L;
static int32_t **g_196 = &g_72[0];
static const int32_t g_200 = 0x37D4FFB9L;
static union U2 g_213 = {0};
static int32_t g_239[3][5][6] = {{{(-1L),(-4L),0x6BD2BF71L,0xBFC915AAL,(-7L),8L},{0x5C321AE1L,0xBFC915AAL,0L,0L,0xBFC915AAL,0x5C321AE1L},{0L,0xBFC915AAL,0x5C321AE1L,0x5C51B945L,(-7L),0x6BD2BF71L},{0x6BD2BF71L,(-4L),(-1L),(-4L),0x6BD2BF71L,0xBFC915AAL},{0x6BD2BF71L,0L,(-4L),0x5C51B945L,0xFD9BC95FL,0xFD9BC95FL}},{{0L,(-7L),(-7L),0L,(-1L),0xFD9BC95FL},{0x5C321AE1L,0xFD9BC95FL,(-4L),0xBFC915AAL,0xFD9BC95FL,0L},{0xBFC915AAL,0x5C51B945L,0xBFC915AAL,(-4L),0xFD9BC95FL,0x5C321AE1L},{(-10L),0x6BD2BF71L,(-1L),0xBFC915AAL,0xBFC915AAL,(-1L)},{8L,8L,(-7L),0xBFC915AAL,0x6BD2BF71L,(-4L)}},{{(-10L),(-7L),0x5C321AE1L,(-4L),0x5C321AE1L,(-7L)},{0xBFC915AAL,(-10L),0x5C321AE1L,0L,8L,(-4L)},{(-1L),0L,(-7L),(-7L),0L,(-1L)},{(-7L),0L,(-1L),0xFD9BC95FL,8L,0x5C321AE1L},{0x5C321AE1L,(-10L),0xBFC915AAL,(-10L),0x5C321AE1L,0L}}};
static int32_t * const *g_240 = (void*)0;
static int16_t *g_337 = (void*)0;
static union U4 g_350 = {0x90955C7851B67495LL};
static int32_t *g_374 = &g_186;
static int8_t g_394 = 8L;
static uint32_t g_427[2][3] = {{0x63E840A2L,0x63E840A2L,0x63E840A2L},{1UL,1UL,1UL}};
static uint64_t g_432 = 0xA0D95A0C63FABA53LL;
static int32_t ***g_489 = &g_196;
static int64_t **g_558 = (void*)0;
static int32_t g_612 = (-4L);
static union U1 g_633 = {246UL};
static uint8_t *g_637 = (void*)0;
static uint8_t **g_636 = &g_637;
static uint64_t g_770 = 1UL;
static int64_t g_785 = 0xDE7643916F83309FLL;
static uint16_t g_907 = 1UL;
static union U2 *g_960 = (void*)0;
static union U2 **g_959 = &g_960;
static union U4 *g_984 = &g_350;
static uint32_t g_1012 = 0xA0A8169FL;
static int8_t g_1091 = 3L;
static struct S0 g_1153[6] = {{0xD98F36F0DFA17536LL,0x2DL,-1L,18446744073709551615UL,0x5FL},{1UL,255UL,-7L,0xEDD12B1459B43CDDLL,0xCCL},{0xD98F36F0DFA17536LL,0x2DL,-1L,18446744073709551615UL,0x5FL},{0xD98F36F0DFA17536LL,0x2DL,-1L,18446744073709551615UL,0x5FL},{1UL,255UL,-7L,0xEDD12B1459B43CDDLL,0xCCL},{0xD98F36F0DFA17536LL,0x2DL,-1L,18446744073709551615UL,0x5FL}};
static union U1 *g_1188[2][7] = {{(void*)0,&g_633,&g_633,&g_633,&g_633,&g_633,&g_633},{(void*)0,&g_633,&g_633,&g_633,&g_633,&g_633,&g_633}};
static uint32_t g_1274 = 0x4AF13135L;
static union U3 *g_1301[5][1][2] = {{{&g_99,&g_99}},{{&g_99,&g_99}},{{&g_99,&g_99}},{{&g_99,&g_99}},{{&g_99,&g_99}}};
static union U3 **g_1300[6][2][7] = {{{&g_1301[3][0][0],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[3][0][0]},{&g_1301[2][0][1],&g_1301[2][0][1],(void*)0,&g_1301[4][0][0],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1]}},{{&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[1][0][1],&g_1301[2][0][1],&g_1301[2][0][1]},{&g_1301[3][0][0],&g_1301[2][0][1],(void*)0,&g_1301[1][0][1],&g_1301[1][0][1],(void*)0,&g_1301[2][0][1]}},{{&g_1301[1][0][1],&g_1301[3][0][0],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1]},{&g_1301[2][0][1],&g_1301[3][0][0],&g_1301[1][0][1],&g_1301[3][0][0],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1]}},{{(void*)0,&g_1301[2][0][1],&g_1301[3][0][0],&g_1301[2][0][1],&g_1301[4][0][0],&g_1301[2][0][1],&g_1301[3][0][0]},{&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[1][0][1],&g_1301[2][0][1],&g_1301[2][0][1],(void*)0}},{{(void*)0,&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],(void*)0,&g_1301[4][0][0]},{&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[3][0][0],&g_1301[4][0][0],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[4][0][0]}},{{&g_1301[1][0][1],&g_1301[2][0][1],&g_1301[1][0][1],&g_1301[2][0][1],&g_1301[4][0][0],&g_1301[2][0][1],(void*)0},{&g_1301[3][0][0],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[2][0][1],&g_1301[3][0][0]}}};
static int16_t g_1356 = 0x84DFL;
static const int32_t *g_1502[5] = {&g_42,&g_42,&g_42,&g_42,&g_42};
static int32_t ****g_1576[1] = {&g_489};
static int32_t *****g_1575 = &g_1576[0];
static int32_t *****g_1578 = (void*)0;
static int32_t g_1718[2] = {0L,0L};
static uint8_t g_1720 = 0x36L;
static int64_t *g_1739[5] = {&g_785,&g_785,&g_785,&g_785,&g_785};
static const uint32_t g_1747 = 0UL;
static int32_t g_1775[6][7] = {{(-8L),3L,1L,1L,3L,(-8L),7L},{(-1L),0x8CE2DF00L,0x42F795A3L,0x42F795A3L,0x8CE2DF00L,0xCAD32595L,1L},{4L,1L,7L,7L,1L,4L,1L},{0xCAD32595L,0x8CE2DF00L,0x42F795A3L,0x42F795A3L,0x8CE2DF00L,0xCAD32595L,1L},{4L,1L,7L,7L,1L,4L,1L},{0xCAD32595L,0x8CE2DF00L,0x42F795A3L,0x42F795A3L,0x8CE2DF00L,0xCAD32595L,1L}};
static const int32_t g_1800[1] = {(-1L)};
static int32_t g_1805 = 0x8264BD56L;
static int64_t **g_1844[2] = {&g_1739[0],&g_1739[0]};
static int8_t *g_1904[5][7] = {{&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394},{&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394},{&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394},{&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394},{&g_394,&g_394,&g_394,&g_394,&g_394,&g_394,&g_394}};
static const struct S0 *g_1928 = &g_1153[0];
static const struct S0 **g_1927 = &g_1928;
static const struct S0 ***g_1926[1][2] = {{&g_1927,&g_1927}};
static int8_t ***g_2010 = (void*)0;
static int8_t ****g_2009 = &g_2010;
static uint16_t g_2084 = 0UL;
static uint8_t g_2085 = 250UL;
static uint64_t **g_2141 = &g_146;
static uint64_t ***g_2140 = &g_2141;
static int16_t g_2152 = (-1L);
static uint32_t g_2153 = 2UL;
static int8_t **g_2190[4][7][7] = {{{&g_5,(void*)0,&g_5,&g_1904[0][3],&g_5,&g_5,&g_1904[3][1]},{&g_5,(void*)0,&g_5,&g_1904[3][1],(void*)0,&g_5,&g_1904[3][6]},{&g_1904[3][1],&g_5,&g_5,&g_5,&g_5,&g_1904[3][1],&g_5},{&g_1904[0][3],&g_1904[3][6],&g_5,&g_1904[2][3],&g_5,&g_1904[3][6],&g_1904[0][3]},{&g_1904[0][2],&g_1904[0][3],&g_1904[3][1],&g_1904[3][6],(void*)0,&g_1904[4][3],&g_1904[3][1]},{&g_5,(void*)0,&g_1904[3][1],&g_5,&g_5,&g_1904[3][1],&g_5},{&g_1904[0][0],&g_1904[3][1],&g_1904[3][1],(void*)0,(void*)0,&g_1904[3][1],&g_5}},{{&g_5,(void*)0,&g_5,&g_5,&g_1904[2][3],&g_5,&g_1904[0][2]},{(void*)0,(void*)0,&g_5,&g_1904[2][6],&g_5,&g_1904[2][6],&g_1904[2][6]},{&g_5,&g_5,&g_5,&g_5,&g_1904[4][3],&g_1904[1][5],&g_1904[2][6]},{(void*)0,(void*)0,&g_5,&g_1904[3][1],&g_1904[2][6],&g_5,&g_1904[0][2]},{&g_5,&g_5,&g_1904[3][1],(void*)0,(void*)0,&g_1904[3][1],&g_5},{&g_5,&g_5,&g_1904[3][1],&g_5,&g_1904[3][6],&g_1904[3][1],&g_5},{&g_5,&g_1904[0][0],&g_5,&g_5,&g_1904[2][6],&g_5,&g_1904[3][1]}},{{&g_1904[3][1],&g_5,&g_5,&g_5,&g_5,&g_5,&g_1904[0][3]},{(void*)0,&g_1904[3][1],&g_5,(void*)0,&g_1904[3][1],&g_5,&g_5},{&g_5,&g_1904[2][6],&g_5,&g_1904[3][1],&g_5,&g_1904[3][1],&g_5},{&g_5,&g_5,(void*)0,&g_5,&g_1904[3][1],(void*)0,&g_5},{&g_5,&g_1904[3][1],&g_5,&g_5,&g_5,&g_1904[3][1],&g_1904[3][1]},{&g_1904[3][1],&g_1904[3][1],&g_1904[4][3],&g_1904[3][1],&g_5,&g_1904[3][1],&g_1904[4][3]},{&g_5,&g_5,&g_5,&g_1904[3][1],(void*)0,(void*)0,&g_5}},{{&g_1904[3][6],&g_1904[1][5],&g_5,&g_5,&g_1904[3][1],&g_1904[3][1],&g_1904[3][1]},{&g_1904[3][1],&g_5,&g_1904[3][1],&g_5,(void*)0,&g_1904[3][1],&g_1904[3][1]},{&g_1904[3][6],&g_1904[1][5],&g_5,&g_5,&g_5,&g_1904[2][6],&g_5},{&g_1904[3][1],&g_5,&g_1904[4][2],&g_5,&g_5,&g_1904[3][1],(void*)0},{&g_1904[4][2],&g_1904[3][1],(void*)0,&g_5,&g_1904[3][1],&g_5,&g_1904[1][5]},{&g_1904[0][2],&g_1904[3][1],&g_1904[0][0],&g_1904[1][5],&g_5,&g_1904[0][3],&g_1904[3][6]},{&g_1904[3][1],&g_5,&g_5,&g_5,(void*)0,(void*)0,&g_5}}};
static const union U3 g_2362 = {0};
static uint32_t **g_2452[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static const uint8_t *g_2538 = &g_633.f0;
static const uint8_t **g_2537 = &g_2538;
static union U1 g_2548 = {0x42L};
static union U3 ***g_2630 = (void*)0;
static union U3 ****g_2629 = &g_2630;
static union U3 *****g_2628[4] = {&g_2629,&g_2629,&g_2629,&g_2629};
static uint32_t *g_2646 = &g_2153;
static uint32_t **g_2645 = &g_2646;
static int32_t g_2717 = 0x5ACAF726L;
static int32_t g_2763 = 0xC1AE88D8L;
static const uint64_t g_2797 = 18446744073709551612UL;
static const uint64_t *g_2796 = &g_2797;
static const uint64_t **g_2795 = &g_2796;
static int16_t **g_2854 = (void*)0;
static struct S0 *g_2862 = &g_1153[4];
static struct S0 **g_2861 = &g_2862;
static uint64_t g_2865 = 0UL;
static uint64_t g_2920[1][3] = {{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL}};
static uint32_t g_2947 = 0x9CE33AB6L;
static int32_t g_2976[6][4] = {{0x6A4A5107L,0x9EEC9340L,0x9EEC9340L,0x6A4A5107L},{0x9EEC9340L,0x6A4A5107L,0xA6013C98L,(-1L)},{0x9EEC9340L,0xA6013C98L,0x9EEC9340L,0x4E633D14L},{0x6A4A5107L,(-1L),0x4E633D14L,0x4E633D14L},{0xA6013C98L,0xA6013C98L,(-6L),(-1L)},{(-1L),0x6A4A5107L,(-6L),0x6A4A5107L}};
static uint16_t g_3098 = 7UL;
static uint64_t g_3120 = 0xCFE8CEDEEDAC05EFLL;



static uint16_t  func_1(void);
static int32_t  func_2(int8_t * p_3, union U1  p_4);
static union U1  func_7(union U1  p_8, union U4  p_9, int32_t  p_10, int64_t  p_11, const int8_t * p_12);
static union U1  func_13(int8_t * p_14, uint64_t  p_15, uint32_t  p_16, union U2  p_17);
static int8_t * func_18(union U2  p_19);
static union U2  func_21(int8_t * p_22, const union U4  p_23, int8_t * const  p_24, uint16_t  p_25, const union U4  p_26);
static const union U4  func_28(union U3  p_29, uint8_t  p_30, int8_t * p_31, int8_t * p_32, int8_t * p_33);
static union U3  func_34(int8_t * p_35, int64_t  p_36, int8_t * p_37, uint8_t  p_38, int32_t  p_39);




static uint16_t  func_1(void)
{ 
    union U4 l_20 = {2UL};
    int8_t *l_27[3];
    const union U4 l_679 = {0xD5DDF56A5AE75EB9LL};
    union U2 l_1185 = {0};
    uint8_t l_2782 = 250UL;
    int32_t l_2785 = 0L;
    const uint64_t *l_2794 = &g_350.f0;
    const uint64_t **l_2793 = &l_2794;
    union U3 *l_2801 = (void*)0;
    union U3 *l_2803 = (void*)0;
    const uint32_t l_2826 = 7UL;
    const struct S0 *l_2847 = &g_74;
    int16_t **l_2852[5][1][2] = {{{&g_337,&g_337}},{{&g_337,&g_337}},{{&g_337,&g_337}},{{&g_337,&g_337}},{{&g_337,&g_337}}};
    uint16_t l_2871 = 0xD10EL;
    uint64_t l_2872[7][4][3] = {{{18446744073709551607UL,0UL,0UL},{0x65C29D53F6221271LL,0x65C29D53F6221271LL,0x4FE8C688B297A403LL},{18446744073709551607UL,0x4FE8C688B297A403LL,0UL},{0UL,0x4FE8C688B297A403LL,18446744073709551607UL}},{{0x4FE8C688B297A403LL,0x65C29D53F6221271LL,0x65C29D53F6221271LL},{0UL,0UL,18446744073709551607UL},{18446744073709551615UL,0x572A8E22FB3AFDA1LL,0UL},{18446744073709551615UL,0x3B60ABAF94BFF970LL,0x4FE8C688B297A403LL}},{{0UL,0UL,0UL},{0x4FE8C688B297A403LL,0x3B60ABAF94BFF970LL,18446744073709551615UL},{0UL,0x572A8E22FB3AFDA1LL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL}},{{0x65C29D53F6221271LL,0x65C29D53F6221271LL,0x4FE8C688B297A403LL},{18446744073709551607UL,0x4FE8C688B297A403LL,0UL},{0UL,0x4FE8C688B297A403LL,18446744073709551607UL},{0x4FE8C688B297A403LL,0x65C29D53F6221271LL,0x65C29D53F6221271LL}},{{0UL,0UL,18446744073709551607UL},{18446744073709551615UL,0x572A8E22FB3AFDA1LL,0UL},{18446744073709551615UL,0x3B60ABAF94BFF970LL,0x4FE8C688B297A403LL},{0UL,0UL,0UL}},{{0x4FE8C688B297A403LL,0x3B60ABAF94BFF970LL,18446744073709551615UL},{0UL,0x572A8E22FB3AFDA1LL,18446744073709551615UL},{18446744073709551615UL,0UL,0x3B60ABAF94BFF970LL},{18446744073709551615UL,18446744073709551615UL,0x65C29D53F6221271LL}},{{18446744073709551615UL,0x65C29D53F6221271LL,0UL},{0UL,0x65C29D53F6221271LL,18446744073709551615UL},{0x65C29D53F6221271LL,18446744073709551615UL,18446744073709551615UL},{0x3B60ABAF94BFF970LL,0UL,18446744073709551615UL}}};
    int32_t l_2882 = 0x9D513AB4L;
    uint16_t l_2883[4] = {0xB824L,0xB824L,0xB824L,0xB824L};
    const int32_t l_2909[6] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
    int32_t l_2910[2][1][4] = {{{0xEB96C3E1L,0xEB96C3E1L,0xEB96C3E1L,0xEB96C3E1L}},{{0xEB96C3E1L,0xEB96C3E1L,0xEB96C3E1L,0xEB96C3E1L}}};
    struct S0 ***l_2941 = &g_2861;
    struct S0 ****l_2940 = &l_2941;
    int32_t l_2961 = 0xD954040EL;
    const int32_t l_3000 = 1L;
    uint32_t l_3083[7][4] = {{18446744073709551615UL,18446744073709551615UL,1UL,0UL},{0xB69A4FD8L,18446744073709551615UL,0xB69A4FD8L,1UL},{0xB69A4FD8L,1UL,1UL,0xB69A4FD8L},{18446744073709551615UL,1UL,0UL,1UL},{1UL,18446744073709551615UL,0UL,0UL},{18446744073709551615UL,18446744073709551615UL,1UL,0UL},{0xB69A4FD8L,18446744073709551615UL,0xB69A4FD8L,1UL}};
    int32_t l_3123 = 0xA9CCC65EL;
    union U3 l_3124 = {0};
    uint32_t l_3125 = 0xD6801420L;
    uint16_t *l_3126[4][2] = {{&g_3098,&g_3098},{&g_3098,&g_3098},{&g_3098,&g_3098},{&g_3098,&g_3098}};
    uint16_t l_3127 = 0x865CL;
    int32_t *l_3128 = &g_42;
    union U3 ****l_3133 = &g_2630;
    union U3 ****l_3134 = &g_2630;
    int8_t ***l_3138 = &g_2190[0][3][0];
    int32_t *l_3139 = &g_239[1][2][3];
    int64_t ***l_3142 = &g_1844[1];
    int32_t *l_3143 = &l_3123;
    int8_t l_3144 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_27[i] = (void*)0;
    return l_3144;
}



static int32_t  func_2(int8_t * p_3, union U1  p_4)
{ 
    int32_t l_1816[2];
    union U4 *l_1832 = (void*)0;
    union U4 *l_1833 = &g_175;
    const union U4 l_1834 = {0x0C5AD3D820203EBELL};
    int8_t *l_1835 = &g_1091;
    uint8_t l_1836 = 0xB3L;
    int32_t l_1837 = 1L;
    int32_t l_1868 = 0x2FCE5036L;
    int32_t l_1870 = 0L;
    int32_t l_1872 = 0L;
    int32_t l_1873 = 1L;
    int32_t l_1874 = 9L;
    int32_t l_1875[1];
    int64_t l_1897 = (-1L);
    const int8_t l_1911[4] = {0xF8L,0xF8L,0xF8L,0xF8L};
    int32_t l_1939 = 1L;
    uint64_t l_2004 = 0xA5F0EF6F4DFAC948LL;
    union U3 l_2025 = {0};
    int32_t **l_2088 = &g_72[1];
    union U2 *l_2105[2];
    int32_t *l_2109 = &l_1868;
    const union U1 *l_2124 = &g_633;
    const union U1 ** const l_2123 = &l_2124;
    int32_t l_2125[2][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L}};
    uint64_t ** const *l_2139 = (void*)0;
    int32_t l_2149 = 0x9BD662E9L;
    uint64_t ***l_2162 = &g_2141;
    uint64_t ***l_2163 = &g_2141;
    int64_t l_2169 = (-9L);
    union U1 *l_2225 = &g_633;
    uint32_t l_2240 = 0x8DA1DDBEL;
    struct S0 l_2249 = {0x63294EEDCF594CAFLL,0UL,6L,0xF824D9733126D1AALL,4L};
    union U3 l_2375 = {0};
    int64_t ** const *l_2413 = &g_558;
    int8_t ****l_2447 = &g_2010;
    int8_t l_2502 = 0xE3L;
    struct S0 l_2504[1] = {{1UL,1UL,1L,0x4CA16465F3A46659LL,0xFAL}};
    const uint8_t **l_2539[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_2592 = 0x5338064EL;
    uint16_t *l_2619 = &g_907;
    int32_t l_2637 = (-7L);
    uint32_t l_2641 = 0x5634ED92L;
    uint64_t l_2659 = 0xA4B75907F9FC0D8ALL;
    uint32_t *l_2670 = &g_1012;
    uint32_t **l_2669 = &l_2670;
    uint8_t l_2674 = 1UL;
    const uint16_t l_2697[1][5] = {{0x88AFL,0x88AFL,0x88AFL,0x88AFL,0x88AFL}};
    struct S0 *l_2700 = &g_74;
    struct S0 **l_2699 = &l_2700;
    uint32_t l_2721 = 4294967292UL;
    uint8_t l_2738 = 248UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1816[i] = 0x61E66ACAL;
    for (i = 0; i < 1; i++)
        l_1875[i] = 0xAD8AB961L;
    for (i = 0; i < 2; i++)
        l_2105[i] = &g_213;
    return p_4.f0;
}



static union U1  func_7(union U1  p_8, union U4  p_9, int32_t  p_10, int64_t  p_11, const int8_t * p_12)
{ 
    int64_t l_1404 = (-9L);
    int32_t l_1405 = 0L;
    union U2 l_1412 = {0};
    int16_t *l_1413 = &g_99.f3;
    union U1 l_1414 = {8UL};
    union U3 l_1438 = {0};
    int32_t l_1458 = (-7L);
    int32_t l_1460[4][5][7] = {{{(-1L),(-1L),(-1L),0xFF4813DFL,(-5L),0x9A67A663L,(-7L)},{0x517AD005L,0x111A5B77L,0x1F7E794DL,(-7L),0xFD4B01D0L,2L,0xFD4B01D0L},{(-1L),(-1L),(-1L),(-1L),(-5L),0xA9CEE151L,(-7L)},{0x0B0BBE87L,0x111A5B77L,0xB6163DEDL,(-7L),(-8L),2L,(-8L)},{(-1L),(-1L),(-1L),0xFF4813DFL,(-5L),0x9A67A663L,(-7L)}},{{0x517AD005L,0x111A5B77L,0x1F7E794DL,(-7L),0xFD4B01D0L,2L,0xFD4B01D0L},{(-1L),(-1L),(-1L),(-1L),(-5L),0xA9CEE151L,(-7L)},{0x0B0BBE87L,0x111A5B77L,0xB6163DEDL,(-7L),(-8L),2L,(-8L)},{(-1L),(-1L),(-1L),0xFF4813DFL,(-5L),0x9A67A663L,(-7L)},{0x517AD005L,0x111A5B77L,0x1F7E794DL,(-7L),0xFD4B01D0L,2L,0xFD4B01D0L}},{{(-1L),(-1L),(-1L),(-1L),(-5L),0xA9CEE151L,(-7L)},{0x0B0BBE87L,0x111A5B77L,0xB6163DEDL,(-7L),(-8L),2L,(-8L)},{(-1L),(-1L),(-1L),0xFF4813DFL,(-5L),0x9A67A663L,(-7L)},{0x517AD005L,0x111A5B77L,0x1F7E794DL,(-7L),9L,0L,9L},{(-1L),0xA9CEE151L,0xA9CEE151L,(-1L),0xE5D4C31BL,(-3L),0x8FF36B14L}},{{0xB6163DEDL,2L,0x8652EED7L,0x111A5B77L,0xFBE345DAL,0L,0xFBE345DAL},{(-1L),0x9A67A663L,0xA9CEE151L,(-1L),0xE5D4C31BL,0xFB4C06FFL,0x8FF36B14L},{0x1F7E794DL,2L,0xCBD90012L,0x111A5B77L,9L,0L,9L},{(-1L),0xA9CEE151L,0xA9CEE151L,(-1L),0xE5D4C31BL,(-3L),0x8FF36B14L},{0xB6163DEDL,2L,0x8652EED7L,0x111A5B77L,0xFBE345DAL,0L,0xFBE345DAL}}};
    uint32_t l_1462 = 4294967287UL;
    struct S0 l_1467 = {0UL,0xCEL,0x1E3B65AAL,0x999AF2611D3F9557LL,1L};
    uint32_t l_1524[4][6] = {{4294967295UL,0xD3FBF2B1L,0xD3FBF2B1L,4294967295UL,0xD3FBF2B1L,0xD3FBF2B1L},{4294967295UL,0xD3FBF2B1L,0xD3FBF2B1L,4294967295UL,0xD3FBF2B1L,0xD3FBF2B1L},{4294967295UL,0xD3FBF2B1L,0xD3FBF2B1L,4294967295UL,0xD3FBF2B1L,0xD3FBF2B1L},{4294967295UL,0xD3FBF2B1L,0xD3FBF2B1L,4294967295UL,0xD3FBF2B1L,0xD3FBF2B1L}};
    uint64_t l_1525[3][4][7];
    const union U4 l_1536 = {18446744073709551615UL};
    union U3 ***l_1538 = &g_1300[5][1][0];
    uint64_t l_1548 = 2UL;
    int64_t *l_1566 = &l_1404;
    int64_t **l_1565 = &l_1566;
    int8_t *l_1590[2][4][4] = {{{&g_394,&g_74.f4,&g_1091,&g_394},{&g_6,&g_1091,&g_6,&g_1091},{&g_74.f4,&g_1091,&g_6,&g_394},{&g_1091,&g_74.f4,&g_74.f4,&g_1091}},{{&g_6,&g_394,&g_74.f4,&g_1091},{&g_1091,&g_74.f4,&g_6,&g_74.f4},{&g_74.f4,&g_74.f4,&g_6,&g_74.f4},{&g_6,&g_74.f4,&g_1091,&g_1091}}};
    struct S0 l_1601[4][1][3] = {{{{0x01CA9464EC8A767ALL,253UL,1L,18446744073709551608UL,-3L},{0x01CA9464EC8A767ALL,253UL,1L,18446744073709551608UL,-3L},{0x01CA9464EC8A767ALL,253UL,1L,18446744073709551608UL,-3L}}},{{{0x5400D8540711C7F6LL,1UL,0x29C13698L,9UL,-1L},{1UL,252UL,-1L,0UL,0L},{0x5400D8540711C7F6LL,1UL,0x29C13698L,9UL,-1L}}},{{{0x01CA9464EC8A767ALL,253UL,1L,18446744073709551608UL,-3L},{0x01CA9464EC8A767ALL,253UL,1L,18446744073709551608UL,-3L},{0x01CA9464EC8A767ALL,253UL,1L,18446744073709551608UL,-3L}}},{{{0x5400D8540711C7F6LL,1UL,0x29C13698L,9UL,-1L},{1UL,252UL,-1L,0UL,0L},{0x5400D8540711C7F6LL,1UL,0x29C13698L,9UL,-1L}}}};
    int8_t *l_1612 = &g_1091;
    const int32_t l_1613 = 0x763ABAC1L;
    int32_t l_1674 = 0xFEC5EDADL;
    int32_t l_1792 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
                l_1525[i][j][k] = 0x5D054BABF60DFEACLL;
        }
    }
lbl_1453:
    for (g_119 = 0; (g_119 < 40); g_119 = safe_add_func_int8_t_s_s(g_119, 4))
    { 
        const int16_t l_1390 = 0xCBC5L;
        if (l_1390)
            break;
    }
    (*g_374) = (safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u((+((safe_mul_func_uint8_t_u_u((((g_612 ^= (safe_rshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s((((((((l_1405 = l_1404) ^ ((l_1404 || ((((((safe_lshift_func_uint8_t_u_s((((*l_1413) = (((safe_div_func_uint16_t_u_u(g_74.f3, (((l_1412 , p_8.f0) & 0x83L) | (&g_984 != (void*)0)))) , g_132) >= l_1404)) <= l_1404), 3)) > p_9.f0) & l_1404) | 0L) ^ p_11) < p_9.f0)) & p_11)) < 0UL) <= (*g_146)) & 0x4FL) , p_11) ^ (*g_374)), l_1404)) >= g_427[1][0]), l_1404))) , l_1414) , p_11), (*p_12))) && l_1404)), l_1414.f0)), l_1414.f0)) < l_1404), g_907));
    for (g_394 = 0; (g_394 >= (-7)); --g_394)
    { 
        int32_t l_1417 = 1L;
        union U2 l_1436[3] = {{0},{0},{0}};
        int32_t l_1456 = (-6L);
        union U3 l_1466[7] = {{0},{0},{0},{0},{0},{0},{0}};
        int32_t l_1482[6][6][6] = {{{0x98F45897L,0L,(-10L),0x98F45897L,0x04314DFBL,0L},{6L,0x109E2A44L,0L,(-9L),(-10L),0xB816D92CL},{0x3BC2DF7DL,0L,0L,0x1F76145BL,(-10L),0xF25FB920L},{0L,0x109E2A44L,(-5L),(-3L),0x04314DFBL,0L},{(-3L),0L,0x4DB82639L,(-9L),1L,1L},{(-8L),0L,0L,(-8L),0x04314DFBL,0L}},{{0x98F45897L,0x109E2A44L,0xB816D92CL,0L,(-10L),0L},{(-3L),0L,1L,0xF569A375L,(-10L),1L},{0x74F706B3L,0x109E2A44L,(-1L),0x1F76145BL,0x04314DFBL,1L},{(-6L),0L,(-5L),0L,1L,0L},{6L,0L,1L,6L,0x04314DFBL,0xB816D92CL},{(-8L),0x109E2A44L,6L,0L,0xFA85E1DCL,0x29A805A5L}},{{1L,0x55D11033L,0xFA85E1DCL,1L,0xFA85E1DCL,0x55D11033L},{0xB816D92CL,0xFB2583E5L,0xEC7B767FL,0x04314DFBL,5L,0xFA85E1DCL},{0L,0x4304F6B2L,0L,0L,0L,0x48B6F942L},{0x4DB82639L,0x4304F6B2L,0xFA85E1DCL,0x4DB82639L,5L,6L},{(-5L),0xFB2583E5L,0x29A805A5L,0xB816D92CL,0xFA85E1DCL,0L},{0L,0x55D11033L,0x4304F6B2L,0x109E2A44L,0xFA85E1DCL,0x48B6F942L}},{{0L,0xFB2583E5L,5L,1L,5L,0x4304F6B2L},{(-10L),0x4304F6B2L,0xEC7B767FL,0xB816D92CL,0L,0L},{(-1L),0x4304F6B2L,0x4304F6B2L,(-1L),5L,0x29A805A5L},{0x4DB82639L,0xFB2583E5L,0L,0L,0xFA85E1DCL,6L},{(-10L),0x55D11033L,(-6L),0x04314DFBL,0xFA85E1DCL,0L},{0L,0xFB2583E5L,0L,0x109E2A44L,5L,(-6L)}},{{1L,0x4304F6B2L,5L,0L,0L,0x55D11033L},{(-5L),0x4304F6B2L,(-6L),(-5L),5L,0L},{(-1L),0xFB2583E5L,6L,0L,0xFA85E1DCL,0x29A805A5L},{1L,0x55D11033L,0xFA85E1DCL,1L,0xFA85E1DCL,0x55D11033L},{0xB816D92CL,0xFB2583E5L,0xEC7B767FL,0x04314DFBL,5L,0xFA85E1DCL},{0L,0x4304F6B2L,0L,0L,0L,0x48B6F942L}},{{0x4DB82639L,0x4304F6B2L,0xFA85E1DCL,0x4DB82639L,5L,6L},{(-5L),0xFB2583E5L,0x29A805A5L,0xB816D92CL,0xFA85E1DCL,0L},{0L,0x55D11033L,0x4304F6B2L,0x109E2A44L,0xFA85E1DCL,0x48B6F942L},{0L,0xFB2583E5L,5L,1L,5L,0x4304F6B2L},{(-10L),0x4304F6B2L,0xEC7B767FL,0xB816D92CL,0L,0L},{(-1L),0x4304F6B2L,0x4304F6B2L,(-1L),5L,0x29A805A5L}}};
        int32_t l_1500 = 0xBDEBF8D1L;
        int32_t *l_1514 = (void*)0;
        int32_t *l_1515 = &g_42;
        int32_t *l_1516 = (void*)0;
        uint64_t l_1517 = 0xD515E2D3976CEDF4LL;
        int i, j, k;
        if (l_1417)
            break;
        for (g_97 = (-8); (g_97 < 40); g_97 = safe_add_func_uint16_t_u_u(g_97, 9))
        { 
            int32_t l_1452 = 0L;
            int32_t l_1461 = 0x86959B5DL;
            int32_t l_1483 = 0x491FC48EL;
            int32_t l_1484 = 0xF352D836L;
            int32_t l_1485 = 1L;
            int32_t l_1486 = 0x6EC8C60CL;
            uint32_t l_1487[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1487[i] = 0xE9B72BB4L;
            for (l_1404 = 1; (l_1404 <= 12); l_1404++)
            { 
                const int32_t l_1424 = 9L;
                uint32_t *l_1429 = &g_99.f2;
                uint32_t *l_1430 = &g_427[1][0];
                int64_t *l_1433 = &g_785;
                int32_t l_1459[3][3];
                uint16_t l_1470 = 1UL;
                int32_t l_1472 = 6L;
                int32_t *l_1475 = &l_1460[1][4][6];
                int32_t *l_1476 = &l_1459[1][1];
                int32_t *l_1477 = &g_42;
                int32_t *l_1478 = &l_1405;
                int32_t *l_1479 = &l_1460[3][4][6];
                int32_t *l_1480 = &l_1405;
                int32_t *l_1481[2][5][7] = {{{&l_1452,&l_1405,&l_1405,&l_1452,&l_1405,&l_1405,&l_1452},{&l_1405,&l_1452,&l_1405,&l_1405,&l_1452,&l_1405,&l_1405},{&l_1452,&l_1452,(void*)0,&l_1452,&l_1452,(void*)0,&l_1452},{&l_1452,&l_1405,&l_1405,&l_1452,&l_1405,&l_1405,&l_1452},{&l_1405,&l_1452,&l_1405,&l_1405,&l_1452,&l_1405,&l_1405}},{{&l_1452,&l_1452,(void*)0,&l_1452,&l_1452,(void*)0,&l_1452},{&l_1405,(void*)0,(void*)0,&l_1405,(void*)0,(void*)0,&l_1405},{(void*)0,&l_1405,(void*)0,(void*)0,&l_1405,(void*)0,(void*)0},{&l_1405,&l_1405,&l_1452,&l_1405,&l_1405,&l_1452,&l_1405},{&l_1405,(void*)0,(void*)0,&l_1405,(void*)0,(void*)0,&l_1405}}};
                struct S0 l_1492 = {0UL,0xD4L,0L,0xBAF796AA5EAD356DLL,-3L};
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1459[i][j] = 0L;
                }
                if (((safe_div_func_int8_t_s_s(l_1424, ((safe_rshift_func_uint8_t_u_u(g_394, p_9.f0)) , (safe_mod_func_uint64_t_u_u((&p_11 != ((++(*l_1430)) , l_1433)), (safe_rshift_func_int16_t_s_u(((g_74 , l_1436[1]) , 0xD27FL), 13))))))) || l_1424))
                { 
                    (*g_374) ^= (p_11 | (safe_unary_minus_func_uint64_t_u(0xDE3F2028A4D3EEA6LL)));
                    (*g_196) = &g_239[0][4][5];
                    (*g_374) = ((((l_1438 = l_1438) , l_1417) | ((g_427[1][1] ^ (safe_mul_func_int16_t_s_s((-1L), p_11))) >= (safe_mod_func_int64_t_s_s((p_8.f0 ^ (safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((*p_12), 2)), p_11)))) ^ g_1153[0].f4), 0x572F57C8C66C6940LL))), 0xD62A85D998E0AB1BLL)))) < 255UL);
                    l_1452 = (((safe_lshift_func_uint16_t_u_u(g_42, 6)) , l_1404) & (-10L));
                }
                else
                { 
                    int32_t *l_1454 = &g_239[0][4][5];
                    int32_t *l_1455[3];
                    int64_t l_1457 = 0x0C712462B160B117LL;
                    uint64_t *l_1471[6] = {&l_1467.f3,&g_97,&l_1467.f3,&l_1467.f3,&g_97,&l_1467.f3};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1455[i] = &l_1405;
                    if (g_907)
                        goto lbl_1453;
                    if (p_9.f0)
                        break;
                    if (p_10)
                        continue;
                    l_1462++;
                    l_1472 = (l_1461 = ((g_770 &= (p_9.f0 |= ((*g_146) = ((l_1462 > (!(p_11 < p_8.f0))) || ((l_1466[5] , ((*l_1429) = (l_1467 , (safe_div_func_int8_t_s_s(((*g_5) = (l_1459[0][2] = l_1470)), ((((p_10 != 18446744073709551608UL) & l_1462) ^ 0L) & 0x5FC38806L)))))) , 0x8C22290CL))))) >= l_1424));
                }
                for (l_1452 = (-28); (l_1452 <= 3); ++l_1452)
                { 
                    return p_8;
                }
                --l_1487[0];
                for (l_1472 = 0; (l_1472 == 27); l_1472 = safe_add_func_uint16_t_u_u(l_1472, 3))
                { 
                    int16_t *l_1496 = &l_1466[5].f3;
                    int32_t l_1497 = 0x4F467BFBL;
                    g_1153[1] = l_1492;
                    l_1497 |= (safe_lshift_func_uint8_t_u_s((+(((*l_1496) = ((*l_1413) |= ((void*)0 == &p_10))) && p_9.f0)), 1));
                }
            }
        }
        for (p_9.f0 = 0; (p_9.f0 <= 0); p_9.f0 += 1)
        { 
            l_1458 |= p_8.f0;
            l_1482[4][5][1] = ((*g_374) = 0x1AFDA61EL);
            for (g_132 = 0; (g_132 <= 0); g_132 += 1)
            { 
                union U2 l_1499 = {0};
                struct S0 l_1504 = {18446744073709551614UL,1UL,0xB47463E2L,0UL,0x84L};
                struct S0 *l_1505 = &g_1153[0];
                (*g_374) = 0xABD1E4F4L;
                l_1500 &= ((*g_146) > ((((0xF9L || (~l_1460[1][4][6])) || 0x783AL) <= ((l_1499 , l_1462) ^ p_10)) > l_1456));
                for (g_119 = 0; (g_119 <= 6); g_119 += 1)
                { 
                    const int32_t *l_1501 = &l_1482[2][4][2];
                    struct S0 *l_1503 = &l_1467;
                    g_1502[2] = l_1501;
                    (*l_1503) = g_1153[0];
                    (*g_374) |= l_1482[5][4][5];
                }
                if (g_186)
                    goto lbl_1453;
                (*l_1505) = l_1504;
            }
        }
        (*g_196) = ((l_1482[4][5][1] = ((-1L) & (0x01F2BA8CL > (safe_rshift_func_int16_t_s_s((g_1153[0].f4 < ((*g_374) |= (safe_div_func_int16_t_s_s(1L, (safe_div_func_uint16_t_u_u(p_10, (safe_lshift_func_int16_t_s_u((l_1500 , (((p_10 ^ l_1500) >= (*g_146)) > p_9.f0)), 10)))))))), 10))))) , &l_1460[2][2][4]);
        l_1517++;
    }
    for (l_1405 = (-8); (l_1405 >= (-26)); --l_1405)
    { 
        int8_t * const l_1537 = &l_1467.f4;
        int32_t l_1547[3];
        union U3 *l_1550 = &g_99;
        uint64_t ** const l_1557 = (void*)0;
        int64_t **l_1561 = (void*)0;
        int32_t *l_1567 = (void*)0;
        uint64_t l_1595 = 0xC21E43ACC7014A95LL;
        int64_t l_1609 = 0xE296EC25905BF531LL;
        uint32_t l_1638 = 1UL;
        int16_t l_1644[6][4][1] = {{{(-8L)},{0x9E3CL},{(-1L)},{(-5L)}},{{(-5L)},{(-1L)},{0x9E3CL},{(-8L)}},{{0x9E3CL},{(-1L)},{(-5L)},{(-5L)}},{{(-1L)},{0x9E3CL},{(-8L)},{0x9E3CL}},{{(-1L)},{(-5L)},{(-5L)},{(-1L)}},{{0x9E3CL},{(-8L)},{0x9E3CL},{(-1L)}}};
        int32_t l_1668 = 0L;
        int32_t l_1671 = 1L;
        int32_t l_1673 = 0L;
        int32_t l_1675[4][2];
        uint32_t l_1680 = 0x6E6F701BL;
        int64_t l_1716 = (-1L);
        int64_t l_1717[7] = {0x9794506B1CBBD640LL,0x9794506B1CBBD640LL,0x9794506B1CBBD640LL,0x9794506B1CBBD640LL,0x9794506B1CBBD640LL,0x9794506B1CBBD640LL,0x9794506B1CBBD640LL};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1547[i] = (-5L);
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_1675[i][j] = 0x4C7EC36BL;
        }
        for (l_1458 = (-30); (l_1458 != 24); l_1458++)
        { 
            struct S0 *l_1541[2];
            int32_t l_1549 = 1L;
            int64_t *l_1564 = &l_1404;
            int64_t **l_1563 = &l_1564;
            uint32_t *l_1608 = &l_1462;
            uint32_t *l_1610 = &g_427[1][1];
            int8_t *l_1611 = &g_394;
            union U3 l_1643 = {0};
            int32_t l_1669 = 0xFEFA20B2L;
            int32_t l_1670 = 0L;
            int32_t l_1672 = 0L;
            int32_t l_1676 = 0xB1E22444L;
            int32_t l_1679 = 0x000E2C3BL;
            uint64_t **l_1707 = &g_145;
            int8_t l_1715 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_1541[i] = &g_1153[2];
            if (p_11)
            { 
                uint8_t *l_1531 = &l_1467.f1;
                uint8_t **l_1530 = &l_1531;
                union U3 ***l_1533[5][2][3];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1533[i][j][k] = &g_1300[1][1][5];
                    }
                }
                l_1524[0][5] ^= p_9.f0;
                if (l_1525[2][1][6])
                    continue;
                if (p_8.f0)
                    break;
                (*g_374) |= ((((safe_mul_func_int16_t_s_s(0x54AFL, (safe_mod_func_uint8_t_u_u(((*g_636) != ((*l_1530) = (*g_636))), (safe_unary_minus_func_int32_t_s((l_1533[3][1][2] == ((safe_add_func_int8_t_s_s(((((*g_960) , p_9.f0) , (**g_959)) , 0x49L), 5L)) , l_1538)))))))) && 0L) && (*p_12)) , p_9.f0);
            }
            else
            { 
                uint32_t l_1539 = 0x70F46D4AL;
                struct S0 *l_1540 = &g_74;
                const int32_t l_1542 = 1L;
                union U3 **l_1551 = &l_1550;
                int64_t ***l_1562 = &g_558;
                int64_t l_1568[2][5] = {{0xDBA26709A598BFBELL,0xDBA26709A598BFBELL,0xDBA26709A598BFBELL,0xDBA26709A598BFBELL,0xDBA26709A598BFBELL},{6L,6L,6L,6L,6L}};
                int32_t *****l_1577 = &g_1576[0];
                union U1 l_1583 = {0x0AL};
                int i, j;
                if (l_1539)
                    break;
                l_1460[3][4][3] = ((((*g_5) >= ((l_1540 == l_1541[1]) >= ((((l_1542 & (safe_add_func_uint64_t_u_u((4UL > ((l_1414.f0 , (safe_sub_func_int64_t_s_s(((l_1438 , (*g_5)) || l_1542), l_1458))) | 0xB1FF19E2L)), 1L))) || l_1547[0]) , l_1548) > p_8.f0))) == l_1458) , l_1549);
                (*l_1540) = (p_11 , g_1153[0]);
                (*l_1551) = l_1550;
                if ((!((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((void*)0 == l_1557), l_1547[0])), p_9.f0)) < (safe_unary_minus_func_uint8_t_u((l_1539 < (((*g_146) = (((safe_rshift_func_uint8_t_u_u(((l_1563 = (l_1548 , ((*l_1562) = l_1561))) == l_1565), p_9.f0)) , 0xF83F41B4L) != l_1539)) == 6UL)))))))
                { 
                    l_1567 = &l_1549;
                }
                else
                { 
                    union U3 l_1588 = {0};
                    int32_t l_1589 = 0L;
                    uint8_t *l_1596[2][4] = {{&g_1153[0].f1,&g_119,&g_119,&g_1153[0].f1},{&g_119,&g_1153[0].f1,&g_119,&g_119}};
                    int i, j;
                    l_1549 = l_1568[1][2];
                    (*g_374) |= (l_1460[1][0][1] & (safe_lshift_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((g_1575 != (l_1577 = (g_1578 = l_1577))) | (safe_mod_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((p_10 == (l_1583 , p_8.f0)), l_1568[1][4])) != (*g_146)) <= l_1524[2][4]), l_1549))) , (*p_12)), p_11)), 11)) , (**g_1578)) == (**g_1575)) != p_9.f0), g_1356)));
                    (*g_374) = (safe_sub_func_uint8_t_u_u((p_8.f0 = (safe_mul_func_uint8_t_u_u((l_1588 , ((l_1589 , p_11) < (&g_1091 != l_1590[1][0][3]))), ((safe_mod_func_uint64_t_u_u(((p_8.f0 >= (safe_lshift_func_int8_t_s_u((*g_5), 3))) != 0x35L), l_1595)) || p_8.f0)))), l_1589));
                }
            }
        }
        for (g_770 = (-26); (g_770 < 24); g_770++)
        { 
            int64_t *l_1738[7][2] = {{&l_1716,(void*)0},{&l_1609,&g_785},{&g_785,&l_1609},{(void*)0,&l_1716},{(void*)0,&l_1609},{&g_785,&g_785},{&l_1609,(void*)0}};
            uint32_t *l_1744 = &l_1638;
            int32_t l_1752 = 0x5DA19028L;
            const struct S0 l_1765[2][4][1] = {{{{1UL,0x5CL,0xD2D0D2B6L,18446744073709551615UL,0x1BL}},{{0xC036001AAF3F6A45LL,0UL,0x05840148L,0x337560511C5FD0CBLL,1L}},{{0xC036001AAF3F6A45LL,0UL,0x05840148L,0x337560511C5FD0CBLL,1L}},{{1UL,0x5CL,0xD2D0D2B6L,18446744073709551615UL,0x1BL}}},{{{0xC036001AAF3F6A45LL,0UL,0x05840148L,0x337560511C5FD0CBLL,1L}},{{0xC036001AAF3F6A45LL,0UL,0x05840148L,0x337560511C5FD0CBLL,1L}},{{1UL,0x5CL,0xD2D0D2B6L,18446744073709551615UL,0x1BL}},{{0xC036001AAF3F6A45LL,0UL,0x05840148L,0x337560511C5FD0CBLL,1L}}}};
            int16_t *l_1780[7][5][7] = {{{(void*)0,&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[4][1][0],&l_1644[1][2][0],&g_1356,&l_1644[4][1][0]},{&g_1356,&g_1356,&l_1644[1][2][0],&l_1644[4][2][0],&l_1644[1][2][0],(void*)0,&l_1644[2][1][0]},{&l_1644[3][1][0],(void*)0,&l_1644[3][2][0],(void*)0,&g_1356,&l_1644[1][2][0],&l_1644[1][1][0]},{&l_1644[1][2][0],&g_1356,(void*)0,&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[4][1][0],&g_1356},{&l_1644[0][2][0],&l_1644[4][0][0],&g_1356,&l_1644[1][2][0],&l_1644[3][2][0],&l_1644[1][2][0],&l_1644[1][2][0]}},{{&l_1644[1][1][0],&l_1644[1][2][0],&g_1356,&g_1356,&l_1644[3][2][0],&g_1356,(void*)0},{&g_1356,&l_1644[1][2][0],&l_1644[4][1][0],(void*)0,&l_1644[1][2][0],&l_1644[1][2][0],(void*)0},{(void*)0,&l_1644[0][2][0],&l_1644[1][2][0],&l_1644[1][2][0],&g_1356,&l_1644[1][2][0],&g_1356},{&l_1644[1][2][0],(void*)0,(void*)0,&l_1644[5][3][0],&l_1644[1][2][0],&g_1356,&l_1644[3][1][0]},{&l_1644[4][0][0],&g_1356,&l_1644[1][2][0],&l_1644[3][2][0],&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[3][1][0]}},{{(void*)0,&g_1356,&l_1644[1][2][0],&l_1644[1][2][0],&g_1356,(void*)0,&l_1644[0][2][0]},{&l_1644[1][2][0],(void*)0,(void*)0,&g_1356,(void*)0,&l_1644[5][2][0],&l_1644[4][1][0]},{&g_1356,&g_1356,&l_1644[3][1][0],&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[4][2][0],&l_1644[1][2][0]},{&g_1356,&g_1356,&g_1356,(void*)0,&l_1644[2][1][0],(void*)0,&l_1644[3][3][0]},{&g_1356,&l_1644[1][2][0],&g_1356,&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[1][2][0]}},{{&g_1356,&g_1356,&l_1644[2][3][0],&g_1356,&l_1644[4][2][0],&l_1644[3][2][0],&l_1644[1][2][0]},{&g_1356,(void*)0,&l_1644[4][1][0],&l_1644[4][2][0],&l_1644[1][2][0],&l_1644[0][0][0],&l_1644[3][2][0]},{&l_1644[1][2][0],(void*)0,&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[4][2][0],&l_1644[0][2][0],&l_1644[1][2][0]},{&l_1644[2][1][0],&l_1644[3][3][0],&g_1356,&g_1356,&l_1644[4][2][0],&l_1644[1][2][0],&l_1644[1][2][0]},{&g_1356,&l_1644[4][1][0],&l_1644[1][2][0],(void*)0,&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[3][3][0]}},{{&l_1644[4][2][0],&l_1644[1][2][0],(void*)0,&l_1644[1][2][0],(void*)0,&l_1644[0][2][0],&l_1644[1][2][0]},{&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[5][2][0],&l_1644[1][2][0],(void*)0,&l_1644[0][0][0],&l_1644[1][2][0]},{&g_1356,&g_1356,&g_1356,&l_1644[1][2][0],(void*)0,&l_1644[3][2][0],&l_1644[5][2][0]},{&g_1356,&l_1644[3][2][0],(void*)0,&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[1][2][0],&g_1356},{(void*)0,(void*)0,&l_1644[4][2][0],&l_1644[1][2][0],&l_1644[4][2][0],(void*)0,(void*)0}},{{&l_1644[5][2][0],&l_1644[0][2][0],&l_1644[4][1][0],&l_1644[1][2][0],&l_1644[1][2][0],&l_1644[4][2][0],&g_1356},{&g_1356,&l_1644[1][2][0],(void*)0,&g_1356,&l_1644[1][2][0],&g_1356,&l_1644[1][2][0]},{&g_1356,&l_1644[3][2][0],&l_1644[4][1][0],&g_1356,&l_1644[4][2][0],&g_1356,(void*)0},{&l_1644[3][1][0],&g_1356,&l_1644[4][2][0],(void*)0,&l_1644[4][2][0],&l_1644[1][2][0],(void*)0},{&l_1644[1][2][0],&g_1356,(void*)0,(void*)0,(void*)0,&g_1356,&l_1644[1][2][0]}},{{&l_1644[1][2][0],&l_1644[3][2][0],&g_1356,&l_1644[1][2][0],&l_1644[1][2][0],(void*)0,&g_1356},{&g_1356,&l_1644[1][2][0],&l_1644[5][2][0],&l_1644[4][2][0],(void*)0,(void*)0,&l_1644[4][1][0]},{&l_1644[1][2][0],&l_1644[1][2][0],(void*)0,&l_1644[1][2][0],&l_1644[1][2][0],&g_1356,&g_1356},{(void*)0,(void*)0,&l_1644[1][2][0],&g_1356,&l_1644[4][2][0],&l_1644[3][2][0],&g_1356},{&l_1644[3][1][0],&g_1356,&g_1356,(void*)0,&g_1356,&l_1644[4][2][0],&l_1644[4][1][0]}}};
            const uint64_t *l_1789 = &g_770;
            const uint64_t **l_1788 = &l_1789;
            union U1 l_1797[4] = {{1UL},{1UL},{1UL},{1UL}};
            int32_t *l_1801 = &l_1460[0][2][2];
            int32_t *l_1802 = &g_42;
            int32_t *l_1803 = &l_1460[1][4][6];
            int32_t *l_1804[4] = {&l_1671,&l_1671,&l_1671,&l_1671};
            uint32_t l_1806 = 0x7A501A6CL;
            int i, j, k;
            for (g_74.f4 = 8; (g_74.f4 >= 0); g_74.f4 = safe_sub_func_uint16_t_u_u(g_74.f4, 1))
            { 
                uint16_t l_1737[2];
                int32_t l_1748 = 1L;
                int32_t l_1753[2];
                uint64_t *l_1773 = &l_1548;
                int16_t *l_1774[5][7] = {{&g_1356,&l_1644[3][1][0],&g_1356,(void*)0,(void*)0,&g_1356,&l_1644[3][1][0]},{(void*)0,&l_1644[3][1][0],&l_1644[4][3][0],&l_1644[4][3][0],&l_1644[3][1][0],(void*)0,&l_1644[3][1][0]},{&g_1356,(void*)0,(void*)0,&g_1356,&l_1644[3][1][0],&g_1356,(void*)0},{&l_1644[1][2][0],&l_1644[1][2][0],(void*)0,&l_1644[3][1][0],&g_1356,(void*)0,(void*)0},{(void*)0,&g_1356,&l_1644[3][1][0],&g_1356,(void*)0,(void*)0,&g_1356}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1737[i] = 5UL;
                for (i = 0; i < 2; i++)
                    l_1753[i] = 7L;
                (*g_196) = ((safe_rshift_func_int8_t_s_s(l_1467.f4, ((safe_mul_func_int16_t_s_s(g_1012, ((p_8.f0 > p_10) && (safe_lshift_func_uint16_t_u_u((p_9.f0 ^ (l_1413 != &g_132)), p_11))))) ^ g_1356))) , (void*)0);
                for (g_74.f2 = (-28); (g_74.f2 >= 10); g_74.f2 = safe_add_func_int32_t_s_s(g_74.f2, 4))
                { 
                    uint32_t *l_1735 = &g_1274;
                    int32_t *l_1745 = &g_1153[0].f2;
                    int32_t l_1746 = 1L;
                    int32_t l_1749 = 1L;
                    int32_t *l_1750 = (void*)0;
                    int32_t *l_1751[3][6] = {{&l_1746,(void*)0,(void*)0,&l_1746,&l_1675[1][1],(void*)0},{&l_1405,(void*)0,&l_1675[1][1],&l_1405,&l_1675[1][1],(void*)0},{&l_1668,(void*)0,(void*)0,&l_1668,&l_1675[1][1],&l_1675[1][1]}};
                    uint32_t l_1754 = 9UL;
                    int i, j;
                    (****g_1575) = &l_1405;
                    (*g_374) = (((((*l_1735) = 0UL) , ((~(l_1737[1] >= (((((*l_1565) = l_1738[6][0]) == (g_1739[3] = &p_11)) & (1UL < (safe_mod_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((((((*l_1745) &= (l_1744 != (void*)0)) , p_9.f0) || g_74.f2) <= (*g_146)) > l_1737[1]), p_10)) | l_1467.f1) | l_1746), g_1747)))) | p_8.f0))) != p_11)) ^ (*p_12)) > 0xBC8EL);
                    ++l_1754;
                }
                l_1748 = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_1460[2][0][0] = ((((l_1765[1][3][0] , (*g_984)) , ((((*g_374) = (safe_div_func_int8_t_s_s(0x86L, (safe_lshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((*g_146) & p_8.f0), (l_1753[0] = ((*l_1413) = ((p_11 = 0x5FEC5D6EB38DD0F2LL) & ((*l_1773) = (!(l_1765[1][3][0].f3 == p_9.f0)))))))), 7))))) > g_1775[3][3]) | l_1737[1])) < p_8.f0) | 0xC0F6CA8083199DB7LL)), 0x9E835A88L)), 1)) ^ 0x2CD5L), g_1720)), 0));
            }
            l_1458 ^= (safe_sub_func_int16_t_s_s(((*l_1413) |= g_1775[1][5]), (safe_rshift_func_int8_t_s_s((((g_1356 = 0xFBD7L) > (l_1460[0][4][3] , ((safe_rshift_func_uint8_t_u_s((l_1467.f1 >= (4294967295UL & (((safe_rshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((+3UL), l_1467.f0)), (*p_12))) , (void*)0) == (void*)0))), 1)) , g_612))) , l_1467.f1), (*g_5)))));
            (*g_374) ^= (((*g_146) = (&g_146 != l_1788)) , (safe_add_func_int8_t_s_s(0xD1L, (l_1792 > (((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_1797[0] , (safe_add_func_int32_t_s_s(l_1675[1][1], (g_1800[0] && l_1765[1][3][0].f0)))), 0x8C5BL)), p_8.f0)) == 1UL) != l_1601[2][0][0].f0)))));
            l_1806++;
        }
    }
    return l_1414;
}



static union U1  func_13(int8_t * p_14, uint64_t  p_15, uint32_t  p_16, union U2  p_17)
{ 
    union U1 *l_1187 = (void*)0;
    union U1 **l_1186[1];
    int32_t l_1198 = 0x6C1B43C7L;
    int8_t *l_1199 = &g_1091;
    const union U4 l_1200 = {18446744073709551615UL};
    int32_t **l_1211 = &g_72[1];
    struct S0 l_1219 = {7UL,0xF1L,-1L,0UL,-1L};
    uint16_t l_1226 = 0x0ACDL;
    union U3 *l_1259 = &g_99;
    union U3 **l_1258 = &l_1259;
    int32_t l_1272 = 0xD5F01F53L;
    int32_t l_1273 = (-1L);
    uint8_t l_1295 = 0xA4L;
    int32_t l_1312 = 0x2DB716D8L;
    int32_t l_1313 = 0L;
    int32_t l_1314 = 0x8B5932F2L;
    int32_t l_1315 = (-5L);
    int32_t l_1316[5][6][7] = {{{0xF059B1D5L,0x9E46039DL,5L,0x56AC4377L,1L,0L,2L},{0L,5L,0x32CBB3A6L,1L,0xBD30668DL,5L,0x7845E6CCL},{0xBD30668DL,5L,0L,0x83215A64L,0L,0x2C592EE1L,0x1D96ECBEL},{(-5L),0x8A0521D8L,(-8L),0x2C592EE1L,8L,9L,0x82E4A39BL},{0xF762FB73L,0L,0L,0xA915B428L,0xA915B428L,0L,0L},{1L,0x1D96ECBEL,8L,0x52AE0CADL,0L,(-1L),0L}},{{1L,0x2C592EE1L,(-9L),0x240A5241L,0x20538D8DL,5L,1L},{0x7845E6CCL,0xE014A2EBL,4L,0x52AE0CADL,0L,0L,0x4C495F31L},{0xFB2141E2L,1L,0x357EF8BAL,0xA915B428L,1L,0x9AC82271L,0x80B9BBFDL},{1L,(-5L),9L,0x2C592EE1L,0xF762FB73L,(-9L),(-1L)},{(-8L),0xE84F8828L,0xC9088DA8L,0x83215A64L,0x9B1EFE19L,0x0C9EE0ADL,5L},{0x092F6BC1L,(-8L),0xB4BA76D7L,1L,0xB4960F34L,0L,5L}},{{0L,0x240A5241L,0L,0x56AC4377L,0x1D96ECBEL,0xFB2141E2L,0xFBB59077L},{0x32CBB3A6L,0L,0xBC586AD4L,(-9L),0xCF8E2BA5L,0x0788636DL,0xFBB59077L},{0x1236A676L,0xE6A92E61L,0x4C495F31L,0x3A72A948L,0xFBB59077L,0xC9088DA8L,5L},{8L,9L,1L,9L,0x52AE0CADL,0xDB058790L,5L},{0xE6A92E61L,0L,0xCFE11740L,0x5A062869L,0x1236A676L,0xA915B428L,(-1L)},{0xB84FE89EL,0xBC586AD4L,0x20538D8DL,(-2L),0x240A5241L,9L,0x80B9BBFDL}},{{0x4C495F31L,0xCFE11740L,0xE014A2EBL,0xB84FE89EL,0xE014A2EBL,0xCFE11740L,0x4C495F31L},{(-2L),0xF059B1D5L,0x1236A676L,1L,0xFB2141E2L,0xB84FE89EL,1L},{0x3A72A948L,0x5A062869L,0xB84FE89EL,9L,1L,0x2BAFB97EL,0L},{0x2C592EE1L,0x80B9BBFDL,0x1236A676L,0xB4BA76D7L,4L,1L,0L},{0xFBB59077L,0x1236A676L,0xE014A2EBL,1L,9L,0x9D7C55EEL,0x82E4A39BL},{0L,0xF762FB73L,0x4C495F31L,1L,1L,0xB3FB945FL,0x74E8A053L}},{{0x79E148E5L,0xB4BA76D7L,0x9E46039DL,(-8L),0xBD30668DL,(-2L),(-1L)},{0xB3FB945FL,0L,9L,0x240A5241L,(-9L),0x32CBB3A6L,0x9AC82271L},{(-5L),0xE84F8828L,0xE6A92E61L,0x159290C4L,0x80B9BBFDL,(-1L),1L},{0x159290C4L,0x79E148E5L,0xDB058790L,0L,(-8L),(-1L),0xBC586AD4L},{1L,0x3A72A948L,0x4B01CA85L,0xDB058790L,1L,0x32CBB3A6L,0L},{0x20538D8DL,0xFBB59077L,9L,9L,0xE84F8828L,(-2L),0xF484B749L}}};
    int32_t ****l_1331 = (void*)0;
    int32_t l_1346 = 0xDDB5ADD4L;
    union U1 l_1366[6] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
    union U1 l_1367 = {0xEAL};
    int8_t l_1373 = 0xA4L;
    int32_t l_1375[3][6];
    uint16_t l_1376[7] = {0xCA12L,0xCA12L,0xCA12L,0xCA12L,0xCA12L,0xCA12L,0xCA12L};
    union U1 l_1387 = {255UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1186[i] = &l_1187;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
            l_1375[i][j] = 0xF7D7B73EL;
    }
    g_1188[0][5] = &g_633;
    l_1198 = ((g_99 , ((*g_374) = (safe_rshift_func_int8_t_s_s((1L <= (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((((*g_5) = ((((*l_1199) = (~((func_21((l_1198 , l_1199), l_1200, &g_1091, l_1200.f0, l_1200) , 0xB40365B14F543BF7LL) < l_1200.f0))) , l_1198) , l_1200.f0)) , 65526UL), g_1153[0].f4)), 13)), 0xFDL))), 0)))) > l_1198);
    if ((((safe_mod_func_uint16_t_u_u(((~0x84L) || (0x927CD5AAL <= (safe_lshift_func_uint8_t_u_s(0x1EL, (safe_rshift_func_int16_t_s_u(((g_1153[5] , p_16) < ((safe_unary_minus_func_int8_t_s(l_1200.f0)) < (l_1211 != l_1211))), g_239[0][4][5])))))), g_74.f4)) || p_16) == 4L))
    { 
        union U3 l_1227 = {0};
        int32_t l_1228 = 1L;
        int32_t l_1229 = 4L;
        int32_t l_1236 = (-1L);
        int32_t l_1238 = 0x9D41DCBAL;
        int32_t l_1290 = 0xC6360D8CL;
        int32_t l_1291 = 3L;
        int32_t l_1292 = 1L;
        int32_t l_1293[6] = {0x1B351000L,(-6L),0x1B351000L,0x1B351000L,(-6L),0x1B351000L};
        int32_t l_1294 = 0x213B2235L;
        uint32_t l_1317 = 0UL;
        uint8_t l_1332 = 253UL;
        union U1 **l_1357[1][7][3] = {{{&g_1188[0][5],&g_1188[0][5],&g_1188[0][5]},{&g_1188[0][5],&g_1188[0][1],&g_1188[0][1]},{&g_1188[0][5],&l_1187,&g_1188[0][5]},{&g_1188[0][5],&g_1188[0][5],&g_1188[0][5]},{&g_1188[0][5],&g_1188[0][1],&g_1188[0][1]},{&g_1188[0][5],&l_1187,&g_1188[0][5]},{&g_1188[0][5],&g_1188[0][5],&g_1188[0][5]}}};
        struct S0 l_1360 = {0UL,1UL,0x733DFB1EL,0x18C30F8F85B342E9LL,0xB6L};
        struct S0 *l_1361 = &g_1153[0];
        uint64_t **l_1364 = (void*)0;
        union U1 l_1365 = {246UL};
        int i, j, k;
        for (p_15 = 0; (p_15 != 40); p_15 = safe_add_func_uint32_t_u_u(p_15, 5))
        { 
            const union U1 *l_1214 = &g_633;
            const union U1 **l_1215 = &l_1214;
            const union U1 *l_1217[7];
            const union U1 **l_1216 = &l_1217[2];
            int i;
            for (i = 0; i < 7; i++)
                l_1217[i] = &g_633;
            (*l_1216) = ((*l_1215) = l_1214);
        }
        if (p_15)
        { 
            struct S0 *l_1218[5];
            int32_t *l_1237 = &g_42;
            int32_t *l_1239[7] = {&g_42,&l_1236,&g_42,&g_42,&l_1236,&g_42,&g_42};
            uint64_t l_1240 = 0x1BF1382994C5F334LL;
            int i;
            for (i = 0; i < 5; i++)
                l_1218[i] = &g_1153[0];
            l_1219 = g_74;
            l_1238 = ((*l_1237) |= ((safe_rshift_func_uint16_t_u_s(((l_1229 = (safe_lshift_func_int16_t_s_u((l_1228 = (safe_rshift_func_uint16_t_u_u((l_1226 != (l_1227 , ((void*)0 == p_14))), 14))), 4))) && g_612), (safe_mod_func_int64_t_s_s(((((((safe_sub_func_int8_t_s_s((((l_1236 = (safe_add_func_int32_t_s_s(p_16, ((*g_374) = 0x3F6F0EA3L)))) < p_15) && l_1236), 0x62L)) | p_16) & p_16) , p_15) == g_1153[0].f2) , p_16), 3L)))) ^ g_99.f3));
            l_1240--;
        }
        else
        { 
            int8_t *l_1260 = &g_6;
            union U2 l_1262 = {0};
            const union U4 l_1263 = {18446744073709551615UL};
            const int32_t l_1265 = (-1L);
            int32_t l_1270 = (-1L);
            int32_t l_1271[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1271[i] = 0xA30FECBCL;
            for (p_15 = 0; (p_15 <= 24); p_15++)
            { 
                const union U4 l_1261[2][4][4] = {{{{0x956AC09E06A657FFLL},{0x956AC09E06A657FFLL},{0x2511BF0E06984033LL},{0x956AC09E06A657FFLL}},{{0x956AC09E06A657FFLL},{1UL},{1UL},{0x956AC09E06A657FFLL}},{{1UL},{0x956AC09E06A657FFLL},{1UL},{1UL}},{{0x956AC09E06A657FFLL},{0x956AC09E06A657FFLL},{0x2511BF0E06984033LL},{0x956AC09E06A657FFLL}}},{{{0x956AC09E06A657FFLL},{1UL},{1UL},{0x956AC09E06A657FFLL}},{{1UL},{0x956AC09E06A657FFLL},{1UL},{1UL}},{{0x956AC09E06A657FFLL},{0x956AC09E06A657FFLL},{0x2511BF0E06984033LL},{0x956AC09E06A657FFLL}},{{0x956AC09E06A657FFLL},{1UL},{1UL},{0x956AC09E06A657FFLL}}}};
                uint8_t *l_1264[5][2] = {{&g_1153[0].f1,&g_1153[0].f1},{&g_1153[0].f1,&g_1153[0].f1},{&g_1153[0].f1,&g_1153[0].f1},{&g_1153[0].f1,&g_1153[0].f1},{&g_1153[0].f1,&g_1153[0].f1}};
                int32_t *l_1267[5][6] = {{&g_186,&g_186,(void*)0,&g_186,&g_186,(void*)0},{&g_186,&g_186,(void*)0,&g_186,&g_186,(void*)0},{&g_186,&g_186,(void*)0,&g_186,&g_186,(void*)0},{&g_186,&g_186,(void*)0,&g_186,&g_186,(void*)0},{&g_186,&g_186,(void*)0,&g_186,&g_186,(void*)0}};
                int i, j, k;
                if ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((+(safe_mul_func_int8_t_s_s(0xD1L, ((((safe_add_func_int16_t_s_s((p_16 , (safe_div_func_uint8_t_u_u((g_74.f1 = (((safe_lshift_func_int8_t_s_s((l_1258 == (void*)0), 0)) && ((p_17 , &l_1199) != &g_5)) && p_16)), 0x3CL))), l_1265)) <= l_1261[0][0][0].f0) | 0xC420DC35L) && 0x0055AFAAL)))), 0)), (*p_14))))
                { 
                    int8_t l_1266[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    if (l_1266[4])
                        break;
                }
                else
                { 
                    int32_t *l_1268 = &g_239[0][4][5];
                    union U1 l_1269 = {0xD8L};
                    l_1268 = l_1267[0][0];
                    return l_1269;
                }
                (*l_1211) = l_1267[2][4];
                ++g_1274;
                if (g_1274)
                    goto lbl_1359;
            }
        }
lbl_1359:
        for (p_16 = 0; (p_16 == 44); p_16 = safe_add_func_int32_t_s_s(p_16, 3))
        { 
            int32_t l_1286[5][2] = {{0x7BC10DDAL,0x7BC10DDAL},{0x7BC10DDAL,0x7BC10DDAL},{0x7BC10DDAL,0x7BC10DDAL},{0x7BC10DDAL,0x7BC10DDAL},{0x7BC10DDAL,0x7BC10DDAL}};
            int32_t l_1287 = 0L;
            int32_t l_1288 = 1L;
            int32_t l_1289[6][5][4] = {{{(-10L),1L,0x4BF44F17L,1L},{0x1A46A85AL,2L,1L,0x7A9FA31DL},{0x4BF44F17L,0x5A578AC5L,(-7L),0x521FC661L},{(-1L),0x4BF44F17L,0x05925976L,0xBA96985FL},{1L,(-3L),7L,7L}},{{7L,7L,(-3L),1L},{0xBA96985FL,0x05925976L,0x4BF44F17L,(-1L)},{0x521FC661L,(-7L),0x5A578AC5L,0x4BF44F17L},{0x7A9FA31DL,(-7L),(-10L),(-1L)},{(-7L),0x05925976L,0x7A9FA31DL,1L}},{{0xFA038FD3L,7L,0x9DFCCDA0L,7L},{0x8535ABE6L,(-3L),(-1L),0xBA96985FL},{1L,0x4BF44F17L,1L,0x521FC661L},{0x9DFCCDA0L,0x5A578AC5L,9L,0x7A9FA31DL},{0x9DFCCDA0L,(-10L),1L,(-7L)}},{{1L,0x7A9FA31DL,(-1L),0xFA038FD3L},{0x8535ABE6L,0x9DFCCDA0L,0x9DFCCDA0L,0x8535ABE6L},{0xFA038FD3L,(-1L),0x7A9FA31DL,1L},{(-7L),1L,(-10L),0x9DFCCDA0L},{0x7A9FA31DL,9L,0x5A578AC5L,0x9DFCCDA0L}},{{0x521FC661L,1L,0x4BF44F17L,1L},{0xBA96985FL,(-1L),(-3L),0x8535ABE6L},{7L,0x9DFCCDA0L,7L,0xFA038FD3L},{1L,0x7A9FA31DL,0x05925976L,(-7L)},{(-1L),(-10L),(-7L),0x7A9FA31DL}},{{0x4BF44F17L,0x5A578AC5L,(-7L),0x521FC661L},{(-1L),0x4BF44F17L,0x05925976L,0xBA96985FL},{1L,(-3L),7L,7L},{7L,7L,(-3L),1L},{0xBA96985FL,0x05925976L,0x4BF44F17L,(-1L)}}};
            int32_t *l_1304 = &l_1289[2][4][2];
            int32_t *l_1305 = &g_42;
            int32_t *l_1306 = &l_1272;
            int32_t *l_1307 = (void*)0;
            int32_t *l_1308 = &l_1288;
            int32_t *l_1309 = &l_1291;
            int32_t *l_1310 = &l_1288;
            int32_t *l_1311[1];
            const union U1 *l_1350 = &g_633;
            const union U1 **l_1349 = &l_1350;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1311[i] = &l_1236;
            for (g_1091 = (-10); (g_1091 >= (-16)); --g_1091)
            { 
                int32_t *l_1281 = &g_239[0][2][5];
                int32_t *l_1282 = &l_1228;
                int32_t *l_1283 = &l_1198;
                int32_t *l_1284 = &g_239[0][4][5];
                int32_t *l_1285[7][5][7] = {{{&l_1238,&g_42,&l_1236,&g_42,&g_42,&l_1273,&g_186},{&l_1198,&l_1272,&l_1228,&l_1272,&l_1228,&l_1273,&l_1228},{&l_1273,&l_1273,&l_1273,&l_1273,&g_239[2][4][5],&l_1198,&g_239[2][2][4]},{&g_186,&g_239[0][4][5],&g_186,&l_1198,&l_1238,&l_1229,(void*)0},{&l_1228,&l_1272,&g_42,&l_1229,&g_239[2][4][2],&g_239[1][3][0],&g_239[2][2][4]}},{{&g_186,(void*)0,&g_42,&g_186,&l_1229,&l_1228,&l_1228},{&l_1236,&l_1229,&l_1236,&g_186,&g_239[1][3][0],&l_1228,&g_186},{&l_1236,&g_42,(void*)0,(void*)0,&g_42,&l_1236,&l_1229},{&g_186,&g_42,&g_239[1][2][5],&g_239[2][2][4],&l_1228,&g_186,&l_1272},{&l_1228,&l_1273,(void*)0,&g_186,&g_42,&l_1198,&g_42}},{{&g_186,&g_42,&g_186,&g_239[0][4][5],&l_1229,&l_1273,&l_1198},{&l_1273,&l_1272,&l_1236,&g_42,(void*)0,&l_1228,&g_239[2][4][5]},{&g_186,&l_1229,&l_1236,&g_186,&g_186,&l_1236,&l_1229},{&l_1228,&l_1273,&g_186,&l_1236,&l_1238,&g_42,&l_1273},{&g_239[0][4][5],&l_1229,&l_1228,&l_1272,&g_42,&l_1229,&g_239[2][4][2]}},{{&g_239[0][4][5],&g_239[0][4][5],&g_186,&l_1236,&g_186,&l_1238,&g_186},{&l_1236,&g_239[2][4][2],&l_1273,&g_186,&l_1229,&l_1198,&g_42},{&l_1273,&g_186,&l_1198,&g_42,&l_1229,&l_1229,&g_42},{&l_1238,&l_1273,&l_1238,&g_42,&g_186,&l_1228,&l_1236},{&l_1229,&l_1198,&g_239[0][4][5],&g_239[2][4][5],&g_42,&l_1228,&g_239[0][4][5]}},{{&g_186,&g_186,&g_42,&g_239[1][3][0],&l_1238,&l_1228,(void*)0},{&l_1236,&l_1236,&g_239[2][4][2],&l_1273,&g_186,&l_1229,&l_1198},{&g_186,&l_1228,(void*)0,&g_42,(void*)0,&l_1198,&l_1198},{&l_1198,&l_1228,&g_42,&l_1228,&l_1198,&l_1238,(void*)0},{&g_186,&g_239[1][3][0],&l_1272,&l_1198,&l_1273,&l_1229,&g_239[0][4][5]}},{{&l_1198,&l_1229,&l_1198,&g_186,&g_42,&g_42,&l_1236},{&g_186,&l_1198,&l_1228,&l_1238,&l_1272,&l_1236,&g_42},{&l_1198,&l_1273,&g_186,&l_1229,&g_239[1][2][5],&l_1228,&g_42},{&g_186,&l_1273,&l_1229,&g_239[0][4][5],&l_1229,&l_1273,&g_186},{&l_1236,&l_1198,&l_1272,&l_1273,&l_1236,&g_186,&g_239[2][4][2]}},{{&g_186,&l_1229,&l_1236,&l_1238,&l_1228,&g_42,&l_1273},{&l_1229,&g_239[1][3][0],&l_1272,&l_1229,&g_42,&g_42,&l_1229},{&l_1238,&l_1228,&l_1229,(void*)0,&l_1272,&l_1236,&g_239[2][4][5]},{&l_1273,&l_1228,&g_186,(void*)0,&l_1238,(void*)0,&g_186},{&l_1236,&l_1236,&l_1228,&l_1229,&g_186,&g_239[1][2][5],&l_1238}}};
                int i, j, k;
                l_1295--;
            }
            for (l_1229 = (-30); (l_1229 < 27); l_1229 = safe_add_func_int64_t_s_s(l_1229, 3))
            { 
                union U3 ***l_1302 = (void*)0;
                union U3 ***l_1303 = &l_1258;
                (*l_1303) = g_1300[4][1][6];
            }
            (*l_1211) = &l_1294;
            l_1317--;
            for (g_74.f4 = 0; (g_74.f4 >= (-21)); g_74.f4 = safe_sub_func_uint8_t_u_u(g_74.f4, 9))
            { 
                int32_t ****l_1328 = &g_489;
                int32_t ****l_1330 = &g_489;
                int32_t *****l_1329[3];
                union U4 *l_1343 = &g_350;
                int i;
                for (i = 0; i < 3; i++)
                    l_1329[i] = &l_1330;
                (*l_1308) = (safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((((((safe_add_func_int8_t_s_s(((*l_1199) |= (g_74 , 0x08L)), ((void*)0 != &g_1300[4][1][6]))) <= ((l_1328 != (l_1331 = l_1328)) ^ (0L == 0x93L))) & g_1153[0].f1) == g_770) != p_16) != p_15), (-1L))), 9UL));
                ++l_1332;
                for (l_1236 = 4; (l_1236 <= (-30)); --l_1236)
                { 
                    int64_t *l_1339 = &g_785;
                    union U4 *l_1342[7][1] = {{&g_350},{&g_175},{&g_350},{&g_175},{&g_350},{&g_175},{&g_350}};
                    int i, j;
                    (*l_1309) &= (0x337F0402L > ((safe_sub_func_int32_t_s_s(p_15, (((((*l_1310) = ((*l_1339) = 0x4034C29D31A6C83ELL)) & (safe_rshift_func_uint16_t_u_u((l_1342[4][0] == (l_1343 = &g_175)), (safe_div_func_int64_t_s_s(0L, (*g_146)))))) ^ 0xF4L) > g_612))) > l_1346));
                }
                for (l_1292 = 0; (l_1292 >= (-6)); l_1292 = safe_sub_func_uint8_t_u_u(l_1292, 1))
                { 
                    int32_t *l_1351[5][3][2] = {{{&l_1316[3][5][4],&l_1273},{&l_1273,&l_1316[3][5][4]},{&l_1229,&g_239[0][4][5]}},{{&l_1229,&l_1316[3][5][4]},{&l_1273,&l_1273},{&l_1316[3][5][4],&l_1229}},{{&g_239[0][4][5],&l_1229},{&l_1316[3][5][4],&l_1273},{(void*)0,&g_239[0][4][5]}},{{&l_1316[3][5][4],&l_1228},{&l_1316[3][5][4],&g_239[0][4][5]},{(void*)0,(void*)0}},{{&g_239[0][4][5],&l_1316[3][5][4]},{&l_1228,&l_1316[3][5][4]},{&g_239[0][4][5],(void*)0}}};
                    int i, j, k;
                    l_1349 = (void*)0;
                    (*g_196) = l_1351[4][0][0];
                    if (p_16)
                        continue;
                    (*l_1308) = (-2L);
                }
                (*l_1309) = ((*l_1304) &= ((0x7235L >= (-5L)) == ((*l_1306) = ((safe_lshift_func_uint8_t_u_u((((~(~((*p_14) > (g_1356 > ((l_1357[0][2][0] == &l_1350) , (+(p_15 != g_239[0][1][5]))))))) ^ l_1317) > 0xCD15DD42L), l_1317)) <= 4294967291UL))));
            }
        }
        (*l_1361) = l_1360;
        (*g_374) = (safe_rshift_func_uint16_t_u_s((l_1364 == ((*g_960) , ((l_1367 = (l_1366[5] = l_1365)) , l_1364))), 5));
    }
    else
    { 
        uint8_t l_1368 = 1UL;
        int32_t l_1371 = (-1L);
        int32_t *l_1372[3];
        int32_t l_1374 = 0x5CED08B3L;
        int i;
        for (i = 0; i < 3; i++)
            l_1372[i] = &l_1371;
        l_1368++;
        if (g_1091)
            goto lbl_1379;
lbl_1379:
        l_1376[6]++;
        (*g_374) = ((safe_mul_func_uint8_t_u_u((l_1219 , (((safe_rshift_func_int8_t_s_s((*p_14), 3)) > p_15) < (*p_14))), ((safe_unary_minus_func_int8_t_s((*p_14))) != (safe_rshift_func_uint8_t_u_s(p_16, (0xA8L && (*g_5))))))) && p_16);
    }
    return l_1387;
}



static int8_t * func_18(union U2  p_19)
{ 
    union U2 * const l_1177 = &g_213;
    union U2 **l_1178 = &g_960;
    const union U4 *l_1183 = &g_175;
    const union U4 **l_1182[3][1];
    int32_t l_1184[1];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1182[i][j] = &l_1183;
    }
    for (i = 0; i < 1; i++)
        l_1184[i] = 0x4B6A9A33L;
    (*l_1178) = l_1177;
    for (g_612 = (-17); (g_612 == (-14)); g_612++)
    { 
        union U4 **l_1181 = (void*)0;
        l_1184[0] = ((l_1181 != l_1182[1][0]) && l_1184[0]);
    }
    return &g_6;
}



static union U2  func_21(int8_t * p_22, const union U4  p_23, int8_t * const  p_24, uint16_t  p_25, const union U4  p_26)
{ 
    struct S0 l_681 = {0x4C36D2DF4143F0F6LL,0xC0L,-1L,0xA64009C529D1C4F2LL,-1L};
    int32_t l_685[3];
    uint32_t l_686 = 0UL;
    const int32_t l_718 = (-3L);
    int32_t l_731 = 0x08827BBDL;
    uint64_t * const l_769 = &g_770;
    uint64_t * const *l_768[6][4] = {{&l_769,(void*)0,(void*)0,&l_769},{(void*)0,&l_769,(void*)0,&l_769},{&l_769,&l_769,&l_769,&l_769},{&l_769,(void*)0,(void*)0,&l_769},{(void*)0,&l_769,&l_769,&l_769},{&l_769,&l_769,&l_769,&l_769}};
    uint32_t l_893 = 0UL;
    struct S0 *l_945[4] = {&l_681,&l_681,&l_681,&l_681};
    int64_t *l_950 = &g_785;
    int32_t l_991[4];
    int64_t l_992 = 0x07A662169CA6F411LL;
    uint32_t l_997 = 1UL;
    int32_t *l_1061 = &l_991[3];
    union U3 *l_1073 = &g_99;
    union U2 l_1118 = {0};
    uint32_t l_1150[5] = {0x76A82FCDL,0x76A82FCDL,0x76A82FCDL,0x76A82FCDL,0x76A82FCDL};
    int32_t l_1165 = 0x8199CB21L;
    int32_t *l_1166 = &g_239[2][3][5];
    int32_t *l_1167 = (void*)0;
    int32_t *l_1168 = &l_991[3];
    int32_t *l_1169 = &l_685[2];
    int32_t *l_1170 = (void*)0;
    int32_t *l_1171 = &l_1165;
    int32_t *l_1172[1][4][5] = {{{&l_991[3],&l_685[2],&l_685[2],&l_991[3],&l_685[2]},{&g_239[0][1][5],&g_239[0][1][5],(void*)0,&g_239[0][1][5],&g_239[0][1][5]},{&l_685[2],&l_991[3],&l_685[2],&l_685[2],&l_991[3]},{&g_239[0][1][5],&g_239[0][3][1],&g_239[0][3][1],&g_239[0][1][5],&g_239[0][3][1]}}};
    int32_t l_1173 = 0x6316248CL;
    uint32_t l_1174 = 0xBDDD4D48L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_685[i] = (-1L);
    for (i = 0; i < 4; i++)
        l_991[i] = (-1L);
    if (p_23.f0)
    { 
        int32_t *l_680 = &g_239[2][2][2];
        struct S0 *l_682 = &g_74;
        int32_t *l_683 = &g_42;
        int32_t *l_684[7][6] = {{&g_42,&g_42,(void*)0,&g_42,&g_42,(void*)0},{&g_42,&g_42,(void*)0,&g_42,&g_42,(void*)0},{&g_42,&g_42,(void*)0,&g_42,&g_42,(void*)0},{&g_42,&g_42,(void*)0,&g_42,&g_42,(void*)0},{&g_42,&g_42,(void*)0,&g_42,&g_42,(void*)0},{&g_42,&g_42,(void*)0,&g_42,&g_42,(void*)0},{&g_42,&g_42,(void*)0,&g_42,&g_42,(void*)0}};
        uint32_t l_689[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_689[i] = 0xC3385880L;
        (*g_196) = l_680;
        (*l_682) = l_681;
        l_686--;
        --l_689[0];
        return g_213;
    }
    else
    { 
        uint32_t l_696 = 0xC715764BL;
        int32_t l_719 = (-1L);
        int32_t l_722 = 0xE80CCD65L;
        int32_t l_729 = 0x74750872L;
        int32_t l_730 = 0x6280FB58L;
        int16_t l_732 = 0x7116L;
        union U4 *l_754 = &g_175;
        int32_t l_763[5][3] = {{0x1C7C31D7L,0x8F753518L,0x1C7C31D7L},{0xBDB78647L,1L,0xE1BD0CECL},{0xBDB78647L,0xBDB78647L,1L},{0x1C7C31D7L,1L,1L},{1L,0x8F753518L,0xE1BD0CECL}};
        uint16_t l_824 = 0x08AEL;
        struct S0 l_831 = {18446744073709551609UL,0x1EL,0x55D021D9L,0UL,-1L};
        uint16_t l_841 = 65535UL;
        union U2 **l_847 = (void*)0;
        int8_t *l_856 = &l_681.f4;
        uint16_t l_857 = 1UL;
        uint32_t l_860 = 0x294DD1F8L;
        int32_t l_878 = 0x655E0EF1L;
        int32_t l_879 = 0L;
        int32_t l_884 = 0x6DE29193L;
        int32_t l_885 = 1L;
        int32_t l_886 = 9L;
        int32_t l_887 = (-1L);
        int32_t l_888[4][3][6] = {{{(-1L),0x1B7BA36AL,0x4C0724D2L,0xE3D4A6AFL,0x2D64CC06L,0x1305A61BL},{0x1305A61BL,0xE3D4A6AFL,0L,0x2D64CC06L,0x2D64CC06L,0L},{0x1B7BA36AL,0x1B7BA36AL,2L,0x4C0724D2L,(-1L),0x1305A61BL}},{{0x1B7BA36AL,0x4C0724D2L,0xE3D4A6AFL,0x2D64CC06L,0x1305A61BL,2L},{0x1305A61BL,0x1B7BA36AL,0xE3D4A6AFL,0xE3D4A6AFL,0x1B7BA36AL,0x1305A61BL},{(-1L),0xE3D4A6AFL,2L,0x2D64CC06L,0x1B7BA36AL,0L}},{{0x2D64CC06L,0x1B7BA36AL,0L,0x4C0724D2L,0x1305A61BL,0x1305A61BL},{0x2D64CC06L,0x4C0724D2L,0x4C0724D2L,0x2D64CC06L,(-1L),2L},{(-1L),0x1B7BA36AL,0x4C0724D2L,0xE3D4A6AFL,0x2D64CC06L,0x1305A61BL}},{{0x1305A61BL,0xE3D4A6AFL,0L,0x2D64CC06L,0x2D64CC06L,0L},{0x1B7BA36AL,0x1B7BA36AL,2L,0x4C0724D2L,(-1L),0x1305A61BL},{0x1B7BA36AL,0x4C0724D2L,0xE3D4A6AFL,0x2D64CC06L,0x1305A61BL,2L}}};
        int32_t l_891[7] = {0x2F6495AFL,0x2F6495AFL,0x2F6495AFL,0x2F6495AFL,0x2F6495AFL,0x2F6495AFL,0x2F6495AFL};
        uint64_t l_896 = 0x176731B71C4329DCLL;
        int32_t * const **l_902 = &g_240;
        uint64_t **l_921 = &g_145;
        struct S0 *l_944 = &l_831;
        struct S0 **l_943 = &l_944;
        int i, j, k;
        for (g_633.f0 = 2; (g_633.f0 >= 29); g_633.f0 = safe_add_func_int32_t_s_s(g_633.f0, 5))
        { 
            uint32_t l_711[1][1];
            uint8_t *l_720 = &g_119;
            int32_t l_721[6];
            uint32_t *l_723[3];
            int32_t *l_724 = (void*)0;
            int32_t *l_725 = &g_213.f2;
            uint32_t l_733 = 2UL;
            struct S0 l_737 = {0x6BE4C92B778DA3DFLL,0xEFL,-2L,0xB8967DF5CD59339BLL,3L};
            const uint8_t ***l_759 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_711[i][j] = 4294967295UL;
            }
            for (i = 0; i < 6; i++)
                l_721[i] = 0x9D1D4AC0L;
            for (i = 0; i < 3; i++)
                l_723[i] = (void*)0;
            if ((safe_mod_func_int64_t_s_s((((((*l_725) = (l_696 == (((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((l_685[1] = (((safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((l_722 = (((((((*l_720) = (p_25 <= ((safe_sub_func_uint8_t_u_u((l_711[0][0] = 0xAEL), p_25)) > (((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((((l_719 = (((p_24 != p_24) < (safe_rshift_func_int8_t_s_u(((*g_5) |= (p_23.f0 && p_26.f0)), l_718))) < 0UL)) > g_42) <= (-8L)) && p_26.f0), l_696)), p_23.f0)) == g_394) <= l_696)))) <= l_696) , g_97) <= 0x038F4125E313B12BLL) || l_711[0][0]) >= l_721[0])) != l_721[0]), l_681.f1)) != p_23.f0), l_696)) && 1UL), l_718)) | p_26.f0) | 247UL)) , 0x17L), 2)), 0xD657ED509A4B8EA1LL)) & p_23.f0) < p_23.f0))) , p_26.f0) & l_696) <= l_681.f4), 0x5E386C1F170A98B6LL)))
            { 
                int32_t *l_726 = &g_42;
                int32_t *l_727 = (void*)0;
                int32_t *l_728[1][2][1];
                struct S0 *l_736[7][7][1] = {{{&l_681},{(void*)0},{&l_681},{&g_74},{&l_681},{(void*)0},{&l_681}},{{&l_681},{(void*)0},{&g_74},{&l_681},{&g_74},{(void*)0},{&l_681}},{{&l_681},{(void*)0},{&l_681},{&g_74},{&l_681},{(void*)0},{&l_681}},{{&l_681},{(void*)0},{&g_74},{&l_681},{&g_74},{(void*)0},{&l_681}},{{&l_681},{(void*)0},{&l_681},{&g_74},{&l_681},{(void*)0},{&l_681}},{{&l_681},{(void*)0},{&g_74},{&l_681},{&g_74},{(void*)0},{&l_681}},{{&l_681},{(void*)0},{&l_681},{&g_74},{&l_681},{(void*)0},{&l_681}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_728[i][j][k] = &l_722;
                    }
                }
                --l_733;
                l_737 = (p_23.f0 , g_74);
            }
            else
            { 
                int32_t *l_740 = &l_685[0];
                if ((safe_sub_func_uint8_t_u_u(l_681.f3, (-1L))))
                { 
                    uint8_t l_741 = 255UL;
                    int32_t l_762 = 0x62387E68L;
                    (**g_489) = l_740;
                    (*g_196) = ((((l_741++) ^ (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((((void*)0 != l_754) != ((l_696 & ((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((g_633 , (l_759 = (void*)0)) == &g_636), ((safe_rshift_func_uint8_t_u_s(l_762, l_711[0][0])) & p_25))), g_74.f1)) & l_732)) < 0L)), (*l_740))), l_763[0][0])), 3)), g_239[0][4][5])), p_25))) <= g_97) , (void*)0);
                }
                else
                { 
                    const int64_t l_764 = 0xC40130E3FE9772C1LL;
                    uint64_t **l_767 = &g_146;
                    struct S0 *l_771 = &l_681;
                    int8_t *l_780 = &g_74.f4;
                    int8_t **l_781 = &l_780;
                    int64_t *l_784 = &g_785;
                    int32_t l_786 = 1L;
                    (*g_374) ^= (l_764 ^ (((*l_740) = 0x7056F124L) <= (l_767 != (l_768[2][0] = &g_145))));
                    (*l_771) = g_74;
                    (*l_771) = l_681;
                    l_786 = (safe_sub_func_int64_t_s_s(((*l_784) = ((g_213 , (safe_div_func_int16_t_s_s((((*l_720) = (*l_740)) == (((void*)0 != &p_26) <= (((safe_add_func_uint8_t_u_u(((~(safe_unary_minus_func_uint8_t_u((((*l_781) = l_780) == (void*)0)))) && ((safe_div_func_int8_t_s_s(((*g_5) |= l_764), 255UL)) == 0x0FL)), 0xD3L)) || 0UL) > 0UL))), l_721[4]))) ^ p_26.f0)), p_23.f0));
                    if (l_786)
                        break;
                }
            }
        }
        for (g_785 = 13; (g_785 != 13); g_785 = safe_add_func_int8_t_s_s(g_785, 3))
        { 
            int8_t l_794[3];
            uint8_t *l_795 = (void*)0;
            uint8_t *l_796[6][5] = {{&g_119,(void*)0,&g_119,(void*)0,&g_119},{&l_681.f1,&l_681.f1,&g_74.f1,&l_681.f1,&l_681.f1},{&g_119,(void*)0,&g_119,(void*)0,&g_119},{&l_681.f1,&l_681.f1,&g_74.f1,&l_681.f1,&l_681.f1},{&g_119,(void*)0,&g_119,(void*)0,&g_119},{&l_681.f1,&l_681.f1,&g_74.f1,&l_681.f1,&l_681.f1}};
            uint8_t l_797[3][7] = {{0x1EL,0x95L,1UL,1UL,0x95L,0x1EL,0UL},{0x95L,248UL,255UL,3UL,3UL,255UL,248UL},{0x95L,0UL,0x1EL,0x95L,1UL,1UL,0x95L}};
            int32_t l_820 = 1L;
            int32_t l_823 = 4L;
            int32_t *l_827 = &l_820;
            union U2 *l_846 = &g_213;
            union U2 **l_845 = &l_846;
            int32_t l_873 = 0xD54F8FF3L;
            int32_t l_874 = 0xD6553C02L;
            int32_t l_877 = 0L;
            int32_t l_882 = (-1L);
            int32_t l_889 = 0x3AC473AAL;
            int32_t l_890[5][7] = {{5L,(-10L),0xA8EC9068L,0xA8EC9068L,(-10L),5L,0x909B0D05L},{0L,(-1L),1L,1L,(-1L),0L,0xC1EF28D3L},{5L,(-10L),0xA8EC9068L,0xA8EC9068L,(-10L),5L,0x909B0D05L},{0L,(-1L),1L,1L,(-1L),0L,0xC1EF28D3L},{5L,(-10L),0xA8EC9068L,0xA8EC9068L,(-10L),5L,0x909B0D05L}};
            uint64_t * const *l_910 = &g_146;
            uint64_t **l_922 = &g_145;
            int i, j;
            for (i = 0; i < 3; i++)
                l_794[i] = 0x05L;
            if ((0L | (((!((safe_mod_func_uint8_t_u_u((l_797[0][2] = (safe_mod_func_uint16_t_u_u(0x325BL, l_794[1]))), (safe_add_func_int8_t_s_s(0x0DL, (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(0x74A600FCL, (l_732 && ((l_719 ^= 0x433D532E13A38B08LL) || 0x7EB1B4A7E82508DALL)))), (*g_5))))))) == l_763[4][0])) ^ l_794[0]) && l_763[3][0])))
            { 
                uint32_t *l_806 = &l_686;
                int32_t l_807 = 0x3011A3FAL;
                int32_t l_815 = (-6L);
                int32_t l_819 = 0x37FCABC4L;
                int32_t l_821 = 0x76BDE665L;
                int32_t l_822[3];
                struct S0 l_830 = {1UL,0x72L,0x99C5B5B1L,18446744073709551607UL,0x3CL};
                uint32_t l_838 = 1UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_822[i] = 0xCEFC86E5L;
                for (l_696 = 0; (l_696 <= 2); l_696 += 1)
                { 
                    int32_t *l_810 = (void*)0;
                    int32_t *l_811 = &l_685[2];
                    int32_t *l_812 = &l_730;
                    int32_t *l_813 = &l_685[0];
                    int32_t *l_814 = &l_807;
                    int32_t *l_816 = &l_685[1];
                    int32_t *l_817 = &l_730;
                    int32_t *l_818[3][1][7] = {{{(void*)0,&l_719,&l_719,(void*)0,&l_719,&l_719,(void*)0}},{{&l_719,(void*)0,&l_719,&l_719,(void*)0,&l_719,&l_719}},{{(void*)0,(void*)0,&g_239[1][1][2],(void*)0,(void*)0,&g_239[1][1][2],(void*)0}}};
                    int i, j, k;
                    (*l_811) = ((*g_374) = (safe_add_func_uint8_t_u_u(((void*)0 != l_806), (--g_74.f1))));
                    ++l_824;
                    (*l_813) = p_23.f0;
                    (**g_489) = l_827;
                }
                for (g_97 = 17; (g_97 <= 7); g_97 = safe_sub_func_uint16_t_u_u(g_97, 1))
                { 
                    l_831 = l_830;
                    if (p_26.f0)
                        break;
                }
                for (p_25 = 14; (p_25 != 5); p_25--)
                { 
                    int32_t *l_834 = &l_815;
                    int32_t *l_835 = &l_719;
                    int32_t *l_836 = (void*)0;
                    int32_t *l_837[1][7][7] = {{{(void*)0,&l_819,&l_719,&g_186,&l_685[0],&l_820,&l_821},{&g_186,&l_820,&l_822[1],&l_820,&l_820,&l_822[1],&l_820},{(void*)0,&g_186,&l_819,(void*)0,&g_42,&l_822[1],&l_807},{&l_685[2],&l_807,&l_820,&g_186,&g_42,&l_685[2],&g_42},{(void*)0,&g_42,&g_42,(void*)0,&l_819,&l_719,&g_186},{&l_719,&g_42,&l_807,&l_685[2],&l_822[1],&l_819,&l_807},{&g_186,&l_729,&l_719,(void*)0,&l_719,&l_729,&g_186}}};
                    int16_t *l_844[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_844[i] = &l_732;
                    ++l_838;
                    l_841++;
                    if (p_23.f0)
                        break;
                    (*l_827) |= 0xE6BB446BL;
                    (**g_489) = ((((l_730 & (l_685[1] = ((*l_827) = p_26.f0))) , l_845) != l_847) , &l_685[0]);
                }
            }
            else
            { 
                int32_t *l_861 = (void*)0;
                int32_t l_875 = (-5L);
                int32_t l_876 = 0xC4F48A65L;
                int8_t l_880 = (-10L);
                int32_t l_881 = 0x2B97E775L;
                int32_t l_883[7][2] = {{0xBDF44BB5L,0x8A99DE57L},{0x8A99DE57L,0xBDF44BB5L},{0x8A99DE57L,0x8A99DE57L},{0xBDF44BB5L,0x8A99DE57L},{0x8A99DE57L,0xBDF44BB5L},{0x8A99DE57L,0x8A99DE57L},{0xBDF44BB5L,0x8A99DE57L}};
                uint16_t *l_916[2][6] = {{&l_841,&l_824,&g_907,&l_824,&l_841,&l_841},{&l_824,&l_824,&l_824,&l_824,&l_857,&l_824}};
                int64_t *l_930[3];
                int64_t **l_929[1][3][3] = {{{&l_930[0],&l_930[0],&l_930[0]},{&l_930[0],&l_930[0],&l_930[0]},{&l_930[0],&l_930[0],&l_930[0]}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_930[i] = &g_785;
                for (l_696 = 0; (l_696 > 37); l_696 = safe_add_func_int32_t_s_s(l_696, 5))
                { 
                    int8_t *l_859 = &g_394;
                    int8_t **l_858 = &l_859;
                    (*l_827) &= l_831.f4;
                    (*g_196) = ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((*l_827) = (safe_rshift_func_int8_t_s_u((g_239[0][4][5] , (func_34(l_856, l_857, (p_23 , ((*l_858) = &g_6)), l_685[2], l_860) , 0x8CL)), 7))), 5)) || 0x50L), 0xA3L)) , (void*)0);
                    (**g_489) = l_861;
                }
                for (l_831.f2 = (-20); (l_831.f2 > (-24)); --l_831.f2)
                { 
                    int32_t *l_864 = &g_42;
                    int32_t *l_865 = &l_730;
                    int32_t *l_866 = &l_685[2];
                    int32_t *l_867 = &l_820;
                    int32_t *l_868 = &l_729;
                    int32_t *l_869 = &l_820;
                    int32_t *l_870 = &l_719;
                    int32_t *l_871 = &g_42;
                    int32_t *l_872[7][2][7] = {{{&g_239[1][1][4],&g_42,&g_42,&l_685[2],&g_42,&l_719,&l_722},{&g_42,&g_239[2][3][0],&l_730,(void*)0,&l_820,(void*)0,&l_730}},{{&g_42,&g_42,&l_729,(void*)0,&l_685[2],&l_729,&l_820},{&l_820,&l_719,(void*)0,&l_722,&l_730,&l_685[2],&l_685[2]}},{{&l_685[2],&g_42,(void*)0,&g_42,&l_685[2],&g_42,&l_729},{&g_239[0][4][5],&l_685[2],&g_42,&l_729,&l_820,&g_42,&g_239[2][3][0]}},{{(void*)0,(void*)0,(void*)0,&g_42,&g_42,(void*)0,(void*)0},{&g_239[0][4][5],&l_729,&l_685[2],&l_820,&l_719,(void*)0,&l_722}},{{&l_685[2],&l_729,&l_820,(void*)0,&g_42,&g_42,&g_42},{&l_820,&l_722,&l_722,&l_820,&l_685[2],&l_722,&g_42}},{{&g_42,&g_42,&l_685[2],&g_42,&l_719,&l_722,&g_42},{&g_42,&g_239[1][3][0],&l_722,&l_729,&l_722,&g_239[1][3][0],&g_42}},{{&g_239[1][1][4],(void*)0,&l_729,&g_42,&g_42,(void*)0,&g_42},{&g_239[2][3][0],(void*)0,&g_42,&l_722,&g_239[0][4][5],&g_239[0][4][5],&l_722}}};
                    int8_t l_892[4][5][4] = {{{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L}},{{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L}},{{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L}},{{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L},{7L,0x40L,7L,0x40L}}};
                    struct S0 *l_899 = &l_681;
                    int32_t * const ***l_903 = &l_902;
                    uint16_t *l_906[7] = {&g_132,&g_132,&g_132,&g_132,&g_132,&g_132,&g_132};
                    int i, j, k;
                    --l_893;
                    (*l_827) = (((p_23.f0 & ((l_896 | (safe_mul_func_int16_t_s_s((((l_899 == &l_831) ^ ((((g_907 |= (g_132 = (safe_sub_func_uint64_t_u_u(((&g_196 == ((*l_903) = l_902)) ^ (safe_rshift_func_int8_t_s_u(((*l_856) = (g_350 , (*l_869))), 4))), p_23.f0)))) & 4L) > 0x86504AB2D820C8CCLL) || 1L)) < (*l_865)), g_6))) == p_23.f0)) < (*l_870)) , p_26.f0);
                }
                for (l_820 = (-14); (l_820 > 20); l_820++)
                { 
                    uint64_t * const **l_911 = &l_768[2][0];
                    (*l_911) = l_910;
                }
                if ((0x35666EF8L & ((*g_374) = (((*l_827) |= 0xC5334899L) , (safe_lshift_func_uint16_t_u_s(65530UL, ((safe_rshift_func_uint16_t_u_u(p_26.f0, ((((p_25 ^= p_26.f0) , (safe_lshift_func_int8_t_s_s(((&g_350 != (g_633 , &p_26)) <= 0x48DEL), 6))) < 1UL) , l_681.f4))) & 0x06L)))))))
                { 
                    uint64_t **l_920 = &g_145;
                    uint64_t ***l_923 = (void*)0;
                    uint64_t **l_924[7][5] = {{(void*)0,&g_145,&g_145,&g_145,&g_145},{&g_146,&g_145,(void*)0,&g_145,&g_146},{&g_145,&g_145,&g_145,&g_145,(void*)0},{&g_145,&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145,(void*)0},{&g_146,&g_145,(void*)0,&g_145,&g_146},{(void*)0,&g_145,&g_145,&g_145,&g_145}};
                    int16_t *l_931 = &g_99.f3;
                    int i, j;
                    (*g_374) = ((safe_unary_minus_func_int16_t_s(((l_920 = (l_921 = l_920)) == (l_924[0][3] = (l_922 = &g_145))))) >= (safe_rshift_func_int16_t_s_u(((*l_931) = (((g_633 , g_74.f0) == ((g_337 == g_337) ^ (safe_lshift_func_uint8_t_u_u((l_685[2] = (g_558 == l_929[0][1][0])), 0)))) > (*l_827))), 5)));
                }
                else
                { 
                    int8_t l_940 = 1L;
                    uint32_t l_941 = 1UL;
                    int32_t l_942 = 1L;
                    l_942 = (safe_mul_func_int8_t_s_s(l_731, ((+(g_633 , ((((safe_sub_func_uint64_t_u_u(l_685[0], (*g_146))) == (safe_mod_func_uint64_t_u_u((((*l_769) = (*g_146)) >= (p_23.f0 <= (((safe_unary_minus_func_int32_t_s((l_940 = l_893))) ^ 0x21L) && p_25))), l_941))) | (*l_827)) > l_893))) ^ p_26.f0)));
                }
            }
        }
        (*g_374) = (&l_685[2] == &l_718);
        (*l_943) = (void*)0;
        l_685[2] &= (l_681.f4 && (*g_146));
    }
    g_74 = (((2L < g_6) & l_686) , g_74);
    return l_1118;
}



static const union U4  func_28(union U3  p_29, uint8_t  p_30, int8_t * p_31, int8_t * p_32, int8_t * p_33)
{ 
    const uint64_t *l_663 = &g_74.f3;
    const uint64_t ** const l_662 = &l_663;
    uint64_t **l_664 = &g_146;
    uint64_t **l_666[6] = {(void*)0,&g_146,(void*)0,(void*)0,&g_146,(void*)0};
    uint64_t ***l_665 = &l_666[0];
    struct S0 l_671 = {0xAE02D1406AA8FEB2LL,0xF7L,0x03527C7BL,18446744073709551610UL,-1L};
    int32_t ***l_672 = &g_196;
    int16_t *l_673 = &g_99.f3;
    uint8_t *l_674[1];
    int32_t l_675 = (-1L);
    int32_t l_676 = 6L;
    int32_t *l_677 = &l_676;
    const union U4 l_678 = {0x7287E1DEE07BB626LL};
    int i;
    for (i = 0; i < 1; i++)
        l_674[i] = &g_74.f1;
    l_676 ^= ((safe_mod_func_uint8_t_u_u((l_675 &= (0x2CL != (safe_mul_func_int8_t_s_s((((*l_673) = (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((((l_662 != ((*l_665) = (l_664 = l_664))) || p_30) , (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((l_671 , ((void*)0 == l_672)), 13)), p_30))), l_671.f3)), 0xC8BA70F3AF7CC6D2LL)), 6UL))) | p_30), l_671.f3)))), l_671.f0)) , p_30);
    (**l_672) = l_677;
    return l_678;
}



static union U3  func_34(int8_t * p_35, int64_t  p_36, int8_t * p_37, uint8_t  p_38, int32_t  p_39)
{ 
    int64_t l_40[4] = {0x4939E63A5BED8572LL,0x4939E63A5BED8572LL,0x4939E63A5BED8572LL,0x4939E63A5BED8572LL};
    int32_t l_43 = 0xEA0E4020L;
    int32_t l_44 = (-7L);
    int32_t l_45 = 0xA1241A59L;
    int32_t l_46[7] = {0x3F50E16FL,0x3F50E16FL,0x3F50E16FL,0x3F50E16FL,0x3F50E16FL,0x3F50E16FL,0x3F50E16FL};
    int8_t *l_55 = &g_6;
    uint8_t l_69 = 0xBCL;
    union U2 l_80[4][3][3] = {{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}},{{{0},{0},{0}},{{0},{0},{0}},{{0},{0},{0}}}};
    union U3 l_130[7] = {{0},{0},{0},{0},{0},{0},{0}};
    uint16_t *l_131 = &g_132;
    int32_t l_134 = 0x5B5DF624L;
    uint16_t * const l_150 = (void*)0;
    uint64_t **l_190 = &g_146;
    const int16_t l_211 = 0L;
    uint32_t l_212 = 4UL;
    union U2 *l_217 = (void*)0;
    union U2 **l_216 = &l_217;
    const union U1 l_220[5][3][5] = {{{{0x01L},{253UL},{0UL},{0UL},{253UL}},{{252UL},{1UL},{250UL},{252UL},{255UL}},{{2UL},{253UL},{246UL},{253UL},{2UL}}},{{{250UL},{0x83L},{1UL},{255UL},{0x83L}},{{2UL},{0x55L},{0x55L},{2UL},{0UL}},{{252UL},{8UL},{0x6DL},{0x83L},{0x83L}}},{{{0x01L},{2UL},{0x01L},{0UL},{2UL}},{{0x83L},{1UL},{255UL},{0x83L},{255UL}},{{0x01L},{0x01L},{255UL},{0x55L},{0UL}}},{{{0xBEL},{255UL},{1UL},{1UL},{255UL}},{{0UL},{246UL},{247UL},{0UL},{0xBAL}},{{1UL},{255UL},{0x83L},{255UL},{1UL}}},{{{247UL},{0x01L},{246UL},{0xBAL},{0x01L}},{{1UL},{0x6DL},{0x6DL},{1UL},{1UL}},{{0UL},{0x55L},{255UL},{0x01L},{0x01L}}}};
    int16_t l_276 = 0L;
    int64_t l_277[5];
    uint16_t l_278 = 65535UL;
    union U4 l_338 = {4UL};
    int16_t l_370 = 0xFCCBL;
    int32_t l_397 = 0x7C5F0BD4L;
    uint64_t l_439 = 2UL;
    int32_t ***l_488[1];
    int32_t l_515 = 0L;
    uint8_t l_559 = 0xD4L;
    int16_t l_617 = 0x386EL;
    uint8_t **l_640 = &g_637;
    int64_t l_648 = 3L;
    uint32_t l_650 = 0xF02C1839L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_277[i] = 0xBCB4674152F9C739LL;
    for (i = 0; i < 1; i++)
        l_488[i] = &g_196;
    for (p_36 = 0; (p_36 <= 3); p_36 += 1)
    { 
        uint64_t l_47 = 0UL;
        int32_t l_65[6];
        int64_t l_94 = (-1L);
        int64_t l_95 = 1L;
        int i;
        for (i = 0; i < 6; i++)
            l_65[i] = (-1L);
        for (g_6 = 3; (g_6 >= 0); g_6 -= 1)
        { 
            int32_t *l_41[3][1];
            uint8_t l_66 = 0x55L;
            union U1 l_91[7] = {{5UL},{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}};
            struct S0 *l_93 = &g_74;
            union U3 l_100 = {0};
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_41[i][j] = &g_42;
            }
            l_47++;
            if ((!(safe_add_func_int16_t_s_s(l_40[p_36], (((18446744073709551609UL ^ (p_39 & (g_42 , (0UL >= (safe_div_func_uint32_t_u_u(4294967295UL, ((p_37 != l_55) & g_42))))))) < (-8L)) <= 0UL)))))
            { 
                uint64_t *l_60 = &l_47;
                int32_t *l_62[6];
                int32_t **l_61 = &l_62[5];
                int8_t *l_63 = &g_64;
                int i;
                for (i = 0; i < 6; i++)
                    l_62[i] = &l_43;
                g_42 &= ((((((*l_63) = (l_40[0] != (safe_sub_func_int8_t_s_s((((*p_35) > ((safe_rshift_func_uint16_t_u_u((((*l_60) = (l_45 , l_47)) & (((l_41[2][0] == ((*l_61) = (void*)0)) != (5L < (*p_37))) > g_6)), g_6)) & (*g_5))) > 1L), 0UL)))) != p_39) || 0xEEL) >= l_65[5]) > 0x71L);
                ++l_66;
                g_42 = p_39;
            }
            else
            { 
                struct S0 *l_75 = &g_74;
                int32_t l_92 = 2L;
                uint64_t *l_96 = &g_97;
                union U3 l_98 = {0};
                if (((((*g_5) | 0x49L) , (l_69 >= (safe_sub_func_int16_t_s_s(((void*)0 != &g_64), ((g_42 > 0xEE40B14FAB08463FLL) <= p_36))))) ^ l_46[4]))
                { 
                    g_72[1] = &l_44;
                }
                else
                { 
                    uint32_t l_73 = 4294967288UL;
                    l_65[0] |= p_39;
                    l_43 = (l_73 = p_36);
                }
                (*l_75) = g_74;
                if ((safe_sub_func_int32_t_s_s((l_65[3] & (((*l_96) |= (safe_add_func_uint32_t_u_u((&g_42 != (l_80[0][2][1] , ((l_92 = (safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(((8UL || 0x2263F48BF6E6797FLL) <= (((g_64 = (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((((((((l_91[6] , (l_92 != l_92)) < l_92) , l_93) != (void*)0) , p_39) <= l_47) == g_74.f4) , g_74.f3), l_94)), 1)) >= l_65[5]), g_74.f3))) && l_47) && g_74.f1)), l_65[5])) || g_64), g_74.f0))) , (void*)0))), l_95))) == 0x1B082D80879AB5F6LL)), l_65[3])))
                { 
                    return l_98;
                }
                else
                { 
                    if (p_39)
                        break;
                    return g_99;
                }
            }
            for (l_43 = 0; (l_43 <= 6); l_43 += 1)
            { 
                return l_100;
            }
            if (p_39)
                continue;
            l_43 ^= (-1L);
        }
    }
    for (p_38 = 6; (p_38 != 57); p_38 = safe_add_func_uint64_t_u_u(p_38, 1))
    { 
        uint32_t l_105 = 0x544ED18BL;
        int64_t *l_116 = &l_40[1];
        uint32_t *l_117 = &g_99.f2;
        uint32_t *l_118[6][1] = {{&l_105},{&l_105},{&g_99.f2},{&l_105},{&l_105},{&g_99.f2}};
        int32_t *l_120 = (void*)0;
        int32_t *l_121 = &l_43;
        int i, j;
        (*l_121) = ((g_119 |= (((safe_add_func_uint8_t_u_u(p_39, l_105)) || (safe_mod_func_uint64_t_u_u((g_64 || (p_38 <= (((p_38 && (safe_mul_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_div_func_int64_t_s_s(((*l_116) |= (1UL > p_36)), l_44)), (-1L))) , (*g_5)), l_105)) && l_105) , (void*)0) == &g_97), 0x25L))) == p_39) > g_64))), l_44))) == l_46[0])) > l_105);
    }
    return g_99;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_74.f4, "g_74.f4", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_175.f0, "g_175.f0", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_239[i][j][k], "g_239[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_350.f0, "g_350.f0", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_427[i][j], "g_427[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_633.f0, "g_633.f0", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_907, "g_907", print_hash_value);
    transparent_crc(g_1012, "g_1012", print_hash_value);
    transparent_crc(g_1091, "g_1091", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1153[i].f0, "g_1153[i].f0", print_hash_value);
        transparent_crc(g_1153[i].f1, "g_1153[i].f1", print_hash_value);
        transparent_crc(g_1153[i].f2, "g_1153[i].f2", print_hash_value);
        transparent_crc(g_1153[i].f3, "g_1153[i].f3", print_hash_value);
        transparent_crc(g_1153[i].f4, "g_1153[i].f4", print_hash_value);

    }
    transparent_crc(g_1274, "g_1274", print_hash_value);
    transparent_crc(g_1356, "g_1356", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1718[i], "g_1718[i]", print_hash_value);

    }
    transparent_crc(g_1720, "g_1720", print_hash_value);
    transparent_crc(g_1747, "g_1747", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1775[i][j], "g_1775[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1800[i], "g_1800[i]", print_hash_value);

    }
    transparent_crc(g_1805, "g_1805", print_hash_value);
    transparent_crc(g_2084, "g_2084", print_hash_value);
    transparent_crc(g_2085, "g_2085", print_hash_value);
    transparent_crc(g_2152, "g_2152", print_hash_value);
    transparent_crc(g_2153, "g_2153", print_hash_value);
    transparent_crc(g_2548.f0, "g_2548.f0", print_hash_value);
    transparent_crc(g_2717, "g_2717", print_hash_value);
    transparent_crc(g_2763, "g_2763", print_hash_value);
    transparent_crc(g_2797, "g_2797", print_hash_value);
    transparent_crc(g_2865, "g_2865", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2920[i][j], "g_2920[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2947, "g_2947", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2976[i][j], "g_2976[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3098, "g_3098", print_hash_value);
    transparent_crc(g_3120, "g_3120", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
