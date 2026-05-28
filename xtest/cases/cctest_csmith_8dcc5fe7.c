// SPDX-License-Identifier: MIT
// cctest_csmith_8dcc5fe7.c --- cctest case csmith_8dcc5fe7 (csmith seed 2378981351)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf04a9b23 */
/* @exp_ticks 0x7d50 */

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

// Options:   -s 2378981351 -o /tmp/csmith_gen_cnzcrc7t/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
};
#pragma pack(pop)

union U1 {
   uint8_t  f0;
   uint16_t  f1;
   int16_t  f2;
};


static int32_t g_2[3] = {0x4E7937D8L,0x4E7937D8L,0x4E7937D8L};
static int32_t g_34 = 1L;
static struct S0 g_43 = {0x18DE0F4CL};
static uint8_t g_48 = 0x2CL;
static int32_t g_52 = (-1L);
static int8_t g_64 = 0x0DL;
static int8_t g_65 = (-9L);
static uint32_t g_66 = 0UL;
static int32_t g_73[7][3][6] = {{{0xDA4CB52CL,(-1L),1L,0xAC9FD407L,0xAC9FD407L,1L},{0xDA4CB52CL,0xDA4CB52CL,0xAC9FD407L,(-4L),0xD242EC21L,(-4L)},{(-1L),0xDA4CB52CL,(-1L),1L,0xAC9FD407L,0xAC9FD407L}},{{0x37D67F3EL,(-1L),(-1L),0x37D67F3EL,0xDA4CB52CL,(-4L)},{(-4L),0x37D67F3EL,0xAC9FD407L,0x37D67F3EL,(-4L),1L},{0x37D67F3EL,(-4L),1L,1L,(-4L),0x37D67F3EL}},{{(-1L),0x37D67F3EL,0xDA4CB52CL,(-4L),0xDA4CB52CL,0x37D67F3EL},{0xDA4CB52CL,(-4L),0xAC9FD407L,0xDA4CB52CL,0xDA4CB52CL,0xAC9FD407L},{0xD242EC21L,0xD242EC21L,0xDA4CB52CL,1L,0x37D67F3EL,1L}},{{(-4L),0xD242EC21L,(-4L),0xAC9FD407L,0xDA4CB52CL,0xDA4CB52CL},{(-1L),(-4L),(-4L),(-1L),0xD242EC21L,1L},{1L,(-1L),0xDA4CB52CL,(-1L),1L,0xAC9FD407L}},{{(-1L),1L,0xAC9FD407L,0xAC9FD407L,1L,(-1L)},{(-4L),(-1L),0xD242EC21L,1L,0xD242EC21L,(-1L)},{0xD242EC21L,(-4L),0xAC9FD407L,0xDA4CB52CL,0xDA4CB52CL,0xAC9FD407L}},{{0xD242EC21L,0xD242EC21L,0xDA4CB52CL,1L,0x37D67F3EL,1L},{(-4L),0xD242EC21L,(-4L),0xAC9FD407L,0xDA4CB52CL,0xDA4CB52CL},{(-1L),(-4L),(-4L),(-1L),0xD242EC21L,1L}},{{1L,(-1L),0xDA4CB52CL,(-1L),1L,0xAC9FD407L},{(-1L),1L,0xAC9FD407L,0xAC9FD407L,1L,(-1L)},{(-4L),(-1L),0xD242EC21L,1L,0xD242EC21L,(-1L)}}};
static int32_t g_87[7][2][1] = {{{(-9L)},{0L}},{{(-1L)},{0xF45EA776L}},{{(-1L)},{0L}},{{(-9L)},{(-9L)}},{{0L},{(-1L)}},{{0xF45EA776L},{(-1L)}},{{0L},{(-9L)}}};
static union U1 g_99 = {0x89L};
static int64_t g_101 = 0L;
static int32_t *g_127 = (void*)0;
static int32_t **g_126 = &g_127;
static uint32_t *g_148 = &g_66;
static int16_t g_156 = 3L;
static int32_t * const *g_171 = &g_127;
static int32_t * const **g_170 = &g_171;
static const union U1 *g_176 = (void*)0;
static const union U1 **g_175 = &g_176;
static const union U1 ** const *g_174[5][2] = {{&g_175,&g_175},{&g_175,&g_175},{&g_175,&g_175},{&g_175,&g_175},{&g_175,&g_175}};
static int8_t g_228[6][7] = {{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L}};
static uint32_t g_229 = 0x6E61B7FCL;
static int8_t *g_232 = &g_228[3][3];
static int8_t **g_231 = &g_232;
static int8_t ***g_246 = (void*)0;
static uint16_t g_301 = 65535UL;
static uint8_t g_307 = 0xDCL;
static int16_t g_325 = (-1L);
static struct S0 g_333 = {0xBB39F105L};
static struct S0 *g_332 = &g_333;
static uint64_t g_383[2][4][7] = {{{0UL,0x0FCF49B0FFDB39CCLL,0x064B953AF312F35DLL,0x064B953AF312F35DLL,0x0FCF49B0FFDB39CCLL,0UL,0x7EF58F447B531321LL},{0x88F608120596E888LL,0xA8D19DE4D5F4E69ELL,0xB01AC9A113FE09AELL,1UL,1UL,0xB01AC9A113FE09AELL,0xA8D19DE4D5F4E69ELL},{0x0FCF49B0FFDB39CCLL,0x7EF58F447B531321LL,0UL,0x0FCF49B0FFDB39CCLL,0x064B953AF312F35DLL,0x064B953AF312F35DLL,0x0FCF49B0FFDB39CCLL},{18446744073709551606UL,0xA8D19DE4D5F4E69ELL,18446744073709551606UL,0UL,0xA8D19DE4D5F4E69ELL,0xDAC13ECC06DEEFBDLL,0xDAC13ECC06DEEFBDLL}},{{0UL,0x0FCF49B0FFDB39CCLL,0UL,0x0FCF49B0FFDB39CCLL,0UL,0UL,18446744073709551615UL},{1UL,0xDAC13ECC06DEEFBDLL,0UL,1UL,0UL,0xDAC13ECC06DEEFBDLL,1UL},{0x4FB94F274C38CD62LL,0UL,0UL,0x9FC870BC3DA878EALL,0UL,0x9FC870BC3DA878EALL,0UL},{18446744073709551606UL,18446744073709551606UL,1UL,0xDAC13ECC06DEEFBDLL,0UL,1UL,0UL}}};
static int32_t g_407 = 0x9EBE1A27L;
static int32_t g_433[7] = {0L,1L,1L,0L,1L,1L,0L};
static const uint16_t g_453 = 0x8811L;
static int8_t g_468 = 0xF9L;
static union U1 g_473 = {0xA0L};
static union U1 *g_472 = &g_473;
static uint64_t *g_489 = &g_383[0][0][4];
static const int8_t g_497 = 4L;
static const int8_t *g_496 = &g_497;



static struct S0  func_1(void);
static uint32_t  func_5(int64_t  p_6, uint8_t  p_7, int32_t  p_8);
static uint8_t  func_15(int32_t  p_16);
static uint8_t  func_30(const uint32_t  p_31, int32_t  p_32);
static int16_t  func_37(const int32_t  p_38, const int64_t  p_39, int16_t  p_40, int32_t  p_41, union U1  p_42);
static const uint8_t  func_81(int64_t  p_82, int8_t  p_83, int32_t  p_84);
static int32_t  func_113(union U1  p_114, uint8_t  p_115);
static uint32_t  func_117(union U1 ** p_118, const union U1  p_119, int32_t ** p_120, struct S0  p_121);




static struct S0  func_1(void)
{ 
    const union U1 ***l_223 = &g_175;
    int32_t l_225 = 9L;
    uint64_t l_226 = 0x6C7F4103FC839BF0LL;
    int32_t l_230[1];
    struct S0 l_312 = {1L};
    int16_t l_314 = (-3L);
    int32_t l_431 = 0x92B39E4FL;
    union U1 l_458 = {247UL};
    int32_t l_507[3][7][1] = {{{1L},{(-1L)},{4L},{0L},{0L},{4L},{(-1L)}},{{1L},{(-1L)},{4L},{0L},{0L},{4L},{(-1L)}},{{1L},{(-1L)},{4L},{0L},{0L},{4L},{(-1L)}}};
    int32_t l_511[1];
    uint32_t l_518 = 0x04FC797BL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_230[i] = 0x896F18D4L;
    for (i = 0; i < 1; i++)
        l_511[i] = 0x5E7CBC68L;
    for (g_2[2] = 26; (g_2[2] == 10); g_2[2]--)
    { 
        const int64_t l_29[1] = {(-1L)};
        uint32_t l_224 = 9UL;
        int8_t *l_227 = &g_228[0][2];
        uint16_t *l_302 = &g_301;
        uint8_t *l_306[6];
        int32_t l_308 = 0L;
        int8_t l_358 = 2L;
        int16_t l_387 = 0x5F96L;
        union U1 l_402 = {0xC4L};
        uint32_t l_410[3];
        int i;
        for (i = 0; i < 6; i++)
            l_306[i] = &g_307;
        for (i = 0; i < 3; i++)
            l_410[i] = 0UL;
    }
    for (l_314 = (-15); (l_314 < (-20)); l_314 = safe_sub_func_uint8_t_u_u(l_314, 3))
    { 
        uint32_t l_426 = 0UL;
        uint8_t *l_432 = &g_307;
        uint16_t * const l_448[3][1][6] = {{{&g_301,&g_301,&g_301,&g_301,&g_301,&g_301}},{{&g_301,&g_301,&g_301,&g_301,&g_301,&g_301}},{{&g_301,&g_301,&g_301,&g_301,&g_301,&g_301}}};
        union U1 l_466[6] = {{5UL},{5UL},{5UL},{5UL},{5UL},{5UL}};
        int32_t l_506 = 0x3F96DB3FL;
        int32_t l_512 = 0x4654AAA6L;
        int32_t l_515 = 0x4C85D07EL;
        int32_t l_516 = (-4L);
        int32_t l_517 = 0x115B4D33L;
        int i, j, k;
        if ((safe_mul_func_int8_t_s_s(((*g_232) = 0xF1L), ((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(((-10L) != g_99.f0), ((safe_unary_minus_func_uint64_t_u((safe_add_func_uint8_t_u_u(((l_426 == ((l_230[0] | ((*l_432) = ((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(l_426, ((((l_426 , l_426) , l_312) , l_426) , 0x0FL))), g_65)) | l_431))) != g_73[5][1][4])) >= l_426), g_433[5])))) <= l_426))), 7L)) , g_43.f0))))
        { 
            union U1 * const l_434 = (void*)0;
            union U1 **l_435 = (void*)0;
            union U1 *l_437 = &g_99;
            union U1 **l_436 = &l_437;
            (*l_436) = l_434;
        }
        else
        { 
            const uint16_t **l_449 = (void*)0;
            const uint16_t **l_450 = (void*)0;
            const uint16_t *l_452 = &g_453;
            const uint16_t **l_451 = &l_452;
            int32_t l_459 = (-1L);
            uint8_t l_460 = 0xBFL;
            int32_t *l_461 = &l_459;
            union U1 *l_467 = &g_99;
            uint16_t l_471 = 0xC118L;
            union U1 **l_474 = &g_472;
            union U1 l_475 = {0xA3L};
            union U1 * const *l_477 = (void*)0;
            union U1 * const **l_476[2][6] = {{&l_477,&l_477,&l_477,&l_477,&l_477,&l_477},{&l_477,&l_477,&l_477,&l_477,&l_477,&l_477}};
            int32_t l_504 = 3L;
            int32_t l_505 = (-3L);
            int32_t l_508 = 0x53778EEBL;
            int32_t l_509 = (-1L);
            int32_t l_510 = 3L;
            int32_t l_513[4] = {2L,2L,2L,2L};
            int i, j;
            (*l_461) = ((((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u((g_301 &= (1L == ((safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u(1UL, ((((l_312 , l_448[2][0][2]) == ((*l_451) = &g_301)) , ((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(g_433[5], ((l_458 , (void*)0) == &g_246))), (*g_232))) > (*g_148))) ^ g_407))), l_426)) > l_426))), 0)) || l_225) <= l_459), l_460)), l_460)) , l_426) <= l_225) | l_459);
            if (((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(((((*l_467) = ((*g_332) , l_466[3])) , (g_468 || 0x0FB4A794L)) & (safe_mul_func_int8_t_s_s((l_471 && (((*l_474) = g_472) != (**l_223))), l_225))), g_473.f0)) >= 0xBEL), 4)) > 1UL))
            { 
                union U1 * const ***l_478 = &l_476[0][4];
                uint16_t *l_479[7] = {&g_301,&g_301,&g_301,&g_301,&g_301,&g_301,&g_301};
                const uint32_t l_480[5][7][7] = {{{18446744073709551607UL,0xCCB5AF79L,0UL,1UL,0x598E5964L,0x63BAE20FL,0xDF9579E6L},{0xB0E71F7FL,5UL,0x61B468D8L,18446744073709551615UL,0x8B405C48L,0x552E1BD3L,0x407920A1L},{0xE9241108L,0x7D7C7E8EL,0x6BB16A59L,0x38D1F791L,0UL,0x74FF54FAL,0x206FD582L},{0x572C34D2L,0x8B405C48L,1UL,0UL,0x7085CF5DL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x6BB16A59L,0x3B9E3AC2L,0x6BB16A59L,18446744073709551615UL,0x9C6A1D65L,0x7D7C7E8EL},{0xAB833654L,0xC4AE50C9L,0x66FB2EE8L,8UL,1UL,1UL,18446744073709551615UL},{1UL,18446744073709551615UL,0x7C855FC3L,3UL,0xCCB5AF79L,18446744073709551615UL,0UL}},{{0xAB833654L,8UL,0x4222596EL,18446744073709551615UL,0xA4D6AD27L,0xC4AE50C9L,18446744073709551614UL},{18446744073709551615UL,3UL,1UL,0x42263454L,18446744073709551609UL,0xDB40ED19L,0xDC0E54B6L},{0x572C34D2L,0UL,0x407920A1L,0x7791C913L,8UL,0xB0E71F7FL,0x1681567AL},{0xE9241108L,0xFA0988A3L,0x9329A6E9L,1UL,5UL,0x7C855FC3L,0x42263454L},{0xB0E71F7FL,1UL,0x9382FA7FL,0x0ECB7D06L,18446744073709551612UL,0x0ECB7D06L,0x9382FA7FL},{18446744073709551607UL,18446744073709551607UL,18446744073709551615UL,3UL,1UL,0x70C65F0CL,18446744073709551615UL},{0x66FB2EE8L,0UL,9UL,0x572C34D2L,0x407920A1L,0x61B468D8L,2UL}},{{0xDB40ED19L,18446744073709551615UL,3UL,0x63BAE20FL,1UL,0x2984827FL,0UL},{0xA4D6AD27L,0x01560819L,18446744073709551610UL,0x1681567AL,0xA0A0CFE9L,0x407920A1L,1UL},{1UL,0x967766DBL,18446744073709551614UL,0x598E5964L,0x74FF54FAL,18446744073709551615UL,5UL},{0xC4AE50C9L,0x3C73DD60L,1UL,0x7085CF5DL,0x407920A1L,1UL,18446744073709551614UL},{0x74FF54FAL,18446744073709551609UL,0x6BB16A59L,1UL,5UL,0UL,1UL},{0xB6BA929CL,0x66FB2EE8L,1UL,1UL,0x66FB2EE8L,0xB6BA929CL,2UL},{18446744073709551615UL,18446744073709551606UL,0x967766DBL,1UL,1UL,1UL,0x9A22EE28L}},{{1UL,8UL,9UL,1UL,18446744073709551615UL,18446744073709551606UL,18446744073709551615UL},{0x9C6A1D65L,18446744073709551606UL,0x11E5FBF8L,0x70C65F0CL,0x7C855FC3L,18446744073709551614UL,1UL},{0x3C73DD60L,0x66FB2EE8L,18446744073709551606UL,0x552E1BD3L,0xC58FED1DL,2UL,18446744073709551615UL},{0x42263454L,18446744073709551609UL,0xDB40ED19L,0xDC0E54B6L,0x9C6A1D65L,18446744073709551615UL,0x7C855FC3L},{18446744073709551615UL,0x3C73DD60L,9UL,0xFB0F1DFEL,8UL,0x01560819L,0x1681567AL},{0UL,0x967766DBL,0xDC0E54B6L,0x74FF54FAL,0xFA0988A3L,0xFA0988A3L,0x74FF54FAL},{0xAB833654L,0x01560819L,0xAB833654L,18446744073709551608UL,1UL,0xFB0F1DFEL,18446744073709551615UL}},{{0UL,0x7C855FC3L,2UL,0x6BB16A59L,0x70C65F0CL,0xA8BBC1E5L,0xDB40ED19L},{18446744073709551606UL,2UL,0x552E1BD3L,1UL,0x1681567AL,0xFB0F1DFEL,0x4222596EL},{1UL,0xDC0E54B6L,1UL,0x9A22EE28L,2UL,0xFA0988A3L,0xDF9579E6L},{18446744073709551608UL,9UL,8UL,0x572C34D2L,0UL,0x01560819L,18446744073709551606UL},{0x63BAE20FL,3UL,18446744073709551615UL,0xFA0988A3L,0x2984827FL,18446744073709551615UL,0UL},{18446744073709551615UL,0xECB32962L,0x4222596EL,9UL,18446744073709551615UL,2UL,8UL},{0x70C65F0CL,18446744073709551614UL,1UL,18446744073709551615UL,1UL,18446744073709551614UL,0x70C65F0CL}}};
                const int8_t *l_495 = (void*)0;
                const int8_t **l_494[3][4][5] = {{{&l_495,(void*)0,(void*)0,&l_495,&l_495},{(void*)0,&l_495,&l_495,(void*)0,(void*)0},{&l_495,(void*)0,(void*)0,&l_495,&l_495},{(void*)0,&l_495,&l_495,(void*)0,(void*)0}},{{&l_495,(void*)0,(void*)0,&l_495,&l_495},{(void*)0,&l_495,&l_495,(void*)0,(void*)0},{&l_495,(void*)0,(void*)0,&l_495,&l_495},{(void*)0,&l_495,&l_495,(void*)0,(void*)0}},{{&l_495,(void*)0,(void*)0,&l_495,&l_495},{(void*)0,(void*)0,(void*)0,&l_495,&l_495},{&l_495,&l_495,&l_495,&l_495,&l_495},{&l_495,(void*)0,(void*)0,&l_495,&l_495}}};
                int i, j, k;
                if (((l_475 , (void*)0) != ((*l_478) = l_476[0][4])))
                { 
                    (*l_461) = ((void*)0 == l_479[3]);
                }
                else
                { 
                    if (l_480[2][2][4])
                        break;
                }
                (*l_461) &= ((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((void*)0 == &g_246) < (safe_mod_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(((g_489 == &g_383[0][1][3]) | ((safe_mul_func_uint16_t_u_u(g_43.f0, (((safe_sub_func_uint32_t_u_u(((g_496 = (*g_231)) == l_432), 0xC48A4517L)) && 18446744073709551611UL) && g_101))) & l_426)), g_383[1][1][0])) , g_87[0][1][0]) & l_466[3].f0), 0xBE6DL))), 0x4FL)), g_52)) && g_497);
            }
            else
            { 
                int32_t l_498 = 0x1B85D87FL;
                int32_t *l_499 = &l_431;
                int32_t *l_500 = (void*)0;
                int32_t *l_501 = (void*)0;
                int32_t *l_502 = &g_34;
                int32_t *l_503[7][1][1] = {{{&l_225}},{{(void*)0}},{{&l_225}},{{(void*)0}},{{&l_225}},{{(void*)0}},{{&l_225}}};
                int32_t l_514 = (-8L);
                int i, j, k;
                l_518++;
            }
        }
    }
    return l_312;
}



static uint32_t  func_5(int64_t  p_6, uint8_t  p_7, int32_t  p_8)
{ 
    union U1 **l_303 = (void*)0;
    int32_t *l_305[3];
    int i;
    for (i = 0; i < 3; i++)
        l_305[i] = &g_73[5][0][5];
    g_34 = ((((void*)0 == l_303) <= 0xE6L) , (+0x5E52FB5A596C84EBLL));
    return p_7;
}



static uint8_t  func_15(int32_t  p_16)
{ 
    uint8_t l_247 = 0x51L;
    int32_t l_248[3][3];
    int8_t *l_255 = (void*)0;
    uint32_t **l_269 = &g_148;
    int32_t *l_272 = (void*)0;
    int32_t *l_273 = &g_87[4][0][0];
    int32_t *l_274 = &g_73[4][0][5];
    int32_t l_275 = 0x6D4F4355L;
    const int32_t **l_277 = (void*)0;
    const int32_t *** const l_276[7][6][5] = {{{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277}},{{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277}},{{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277}},{{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277}},{{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277}},{{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277}},{{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277}}};
    const int32_t l_287 = (-1L);
    union U1 **l_296 = (void*)0;
    union U1 ***l_297 = &l_296;
    const union U1 ** const l_298[2][7] = {{&g_176,&g_176,&g_176,&g_176,&g_176,&g_176,&g_176},{&g_176,&g_176,&g_176,&g_176,&g_176,&g_176,&g_176}};
    uint16_t *l_299 = &g_99.f1;
    uint16_t *l_300[6][3][6] = {{{&g_301,&g_301,&g_301,&g_301,&g_301,&g_301},{&g_301,&g_301,(void*)0,&g_301,&g_301,&g_301},{(void*)0,(void*)0,(void*)0,(void*)0,&g_301,&g_301}},{{&g_301,&g_99.f1,&g_301,(void*)0,&g_301,&g_301},{(void*)0,&g_301,&g_301,&g_301,&g_301,&g_99.f1},{&g_301,&g_99.f1,&g_301,&g_301,&g_301,&g_99.f1}},{{&g_301,(void*)0,&g_301,&g_301,&g_301,&g_301},{&g_301,&g_301,&g_301,&g_301,&g_301,&g_301},{&g_301,&g_301,(void*)0,&g_301,&g_301,&g_301}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_301,&g_301},{&g_301,&g_99.f1,&g_301,(void*)0,&g_301,&g_301},{(void*)0,&g_301,&g_301,&g_301,&g_301,&g_99.f1}},{{&g_301,&g_99.f1,&g_301,&g_301,&g_301,&g_99.f1},{&g_301,(void*)0,&g_301,&g_301,&g_301,&g_301},{&g_301,&g_301,&g_301,&g_301,&g_301,&g_301}},{{&g_301,&g_301,(void*)0,&g_301,&g_301,&g_301},{(void*)0,(void*)0,(void*)0,(void*)0,&g_301,&g_301},{&g_301,&g_99.f1,&g_301,(void*)0,&g_301,&g_301}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_248[i][j] = 5L;
    }
    for (g_48 = 1; (g_48 <= 5); g_48 += 1)
    { 
        int8_t ***l_233 = &g_231;
        int32_t *l_234[4][2][3] = {{{&g_52,&g_2[0],&g_73[4][0][5]},{&g_34,&g_73[2][0][3],&g_73[2][0][3]}},{{&g_52,&g_2[0],&g_73[4][0][5]},{&g_34,&g_73[2][0][3],&g_73[2][0][3]}},{{&g_52,&g_2[0],&g_73[4][0][5]},{&g_34,&g_73[2][0][3],&g_73[2][0][3]}},{{&g_52,&g_2[0],&g_73[4][0][5]},{&g_34,&g_73[2][0][3],&g_73[2][0][3]}}};
        union U1 l_239 = {0x8AL};
        uint16_t l_261[6][3][1] = {{{65530UL},{0x93D8L},{0x93D8L}},{{65530UL},{0xE2D7L},{0xC22EL}},{{65530UL},{65534UL},{1UL}},{{1UL},{65534UL},{65530UL}},{{0xC22EL},{65530UL},{65534UL}},{{1UL},{1UL},{65534UL}}};
        int32_t l_262 = (-1L);
        int i, j, k;
        (*l_233) = g_231;
        (*g_126) = l_234[0][0][1];
        for (g_156 = 2; (g_156 >= 0); g_156 -= 1)
        { 
            int8_t *l_243 = (void*)0;
            int8_t *l_244 = &g_65;
            int8_t ****l_245[5];
            int32_t l_263 = 1L;
            int i, j;
            for (i = 0; i < 5; i++)
                l_245[i] = &l_233;
            l_248[0][0] = ((safe_mod_func_uint8_t_u_u((g_228[g_156][g_48] == (0x5C60A8F4C849BAF9LL < ((l_239 , (safe_unary_minus_func_int64_t_s((g_156 == 1UL)))) , (l_247 ^= (safe_div_func_int16_t_s_s(((((*l_244) = 0xF5L) , (((g_246 = &g_231) != &g_231) & g_65)) | 0x907DCE9F13E21F93LL), (-1L))))))), g_64)) , (-9L));
            for (g_99.f0 = 0; (g_99.f0 <= 2); g_99.f0 += 1)
            { 
                int i, j, k;
                if ((g_73[(g_48 + 1)][g_156][(g_99.f0 + 3)] > ((*g_148) &= 0xEA092687L)))
                { 
                    int i, j, k;
                    g_52 = (safe_div_func_uint8_t_u_u(g_73[g_99.f0][g_156][(g_99.f0 + 3)], (safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0L, ((p_16 , &l_239) == (void*)0))), (((g_87[0][0][0] = g_73[g_99.f0][g_156][(g_99.f0 + 3)]) , l_255) == (void*)0)))));
                    g_73[(g_48 + 1)][g_156][(g_99.f0 + 3)] = 0xB2E94D31L;
                }
                else
                { 
                    int32_t l_256 = 0x69AB182FL;
                    return l_256;
                }
                for (l_239.f0 = 0; (l_239.f0 > 7); l_239.f0 = safe_add_func_int8_t_s_s(l_239.f0, 1))
                { 
                    return g_99.f0;
                }
                if (p_16)
                    continue;
                g_87[4][0][0] |= (-5L);
            }
            l_263 = (safe_lshift_func_uint8_t_u_s(((((((p_16 <= g_228[1][3]) ^ ((l_261[2][1][0] = l_248[0][0]) >= (g_228[g_156][g_48] == p_16))) <= g_73[4][0][5]) , p_16) | l_262) ^ (*g_148)), 7));
        }
    }
    g_34 = ((~((*l_274) = ((*l_273) = ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((*g_232), 6)), (((*l_269) = (void*)0) == (void*)0))) <= (safe_rshift_func_int16_t_s_u(p_16, 5)))))) , (((l_275 <= (((*l_274) = 0x16488FA2L) > (l_276[2][0][0] != &g_171))) | p_16) >= p_16));
    (*l_274) = (((((((~0x32A1F5AE937EEBF2LL) > ((((safe_rshift_func_uint16_t_u_s((g_301 &= ((*l_273) &= ((safe_div_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(l_287, ((safe_add_func_uint8_t_u_u((((((((safe_mul_func_int16_t_s_s(g_64, p_16)) , (safe_sub_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((((*g_170) != (*g_170)) , (((*l_297) = l_296) != l_298[1][4])), 0x0C6D7AF98BDDBF57LL)) <= 0L), g_73[4][0][5]))) , p_16) , p_16) >= p_16) , &l_247) != (void*)0), 255UL)) , 0x0DC9C6B8B8FC5BE1LL))) > p_16) & 0x45BC26F1L), g_48)) && 9UL))), p_16)) <= g_156) || 0xE5L) & 0L)) , l_269) == l_269) < (-3L)) >= p_16) < (**g_231));
    return g_228[0][2];
}



static uint8_t  func_30(const uint32_t  p_31, int32_t  p_32)
{ 
    uint32_t l_33[4][2];
    int32_t l_105[7] = {0x854AF0FFL,0x854AF0FFL,0x854AF0FFL,0x854AF0FFL,0x854AF0FFL,0x854AF0FFL,0x854AF0FFL};
    const union U1 l_124 = {255UL};
    int32_t ***l_173 = (void*)0;
    uint32_t l_205 = 7UL;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_33[i][j] = 0xCA335C22L;
    }
    for (p_32 = 0; (p_32 <= 1); p_32 += 1)
    { 
        uint32_t l_44 = 0UL;
        union U1 l_45[3][3] = {{{0x78L},{0x78L},{0x78L}},{{0xA1L},{0x7BL},{0xA1L}},{{0x78L},{0x78L},{0x78L}}};
        int32_t l_108 = 1L;
        int32_t l_109[6] = {(-9L),0xF795CCE4L,(-9L),(-9L),0xF795CCE4L,(-9L)};
        union U1 l_125 = {1UL};
        struct S0 l_128 = {0xFF759734L};
        int64_t l_169 = 5L;
        int32_t ***l_210 = &g_126;
        int i, j;
        for (g_34 = 0; (g_34 <= 1); g_34 += 1)
        { 
            uint32_t *l_70 = (void*)0;
            uint32_t *l_71 = &g_66;
            int32_t *l_72[5] = {&g_34,&g_34,&g_34,&g_34,&g_34};
            int32_t **l_74 = &l_72[2];
            union U1 l_116 = {0UL};
            union U1 *l_123 = &l_45[2][0];
            union U1 **l_122 = &l_123;
            int i, j;
            g_73[4][0][5] ^= (safe_rshift_func_int8_t_s_u(1L, (((0x39956A218F0ED693LL ^ (l_33[(g_34 + 1)][p_32] != ((*l_71) = (65531UL < func_37(((l_33[(g_34 + 1)][g_34] >= g_2[2]) , (g_43 , 0x0FEEA382L)), l_33[2][0], l_44, l_44, l_45[1][0]))))) & l_33[(g_34 + 1)][p_32]) | 1L)));
            (*l_74) = &g_73[4][0][5];
            for (g_65 = 1; (g_65 >= 0); g_65 -= 1)
            { 
                uint8_t l_98[2][7][7] = {{{0x9DL,0x54L,0x54L,0x9DL,0x9DL,0x54L,0x54L},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{0x9DL,0x9DL,0x54L,0x54L,0x9DL,0x9DL,0x54L},{0xADL,255UL,0xADL,255UL,0xADL,255UL,0xADL},{0x9DL,0x54L,0x54L,0x9DL,0x9DL,0x54L,0x54L},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{0x9DL,0x9DL,0x54L,0x54L,0x9DL,0x9DL,0x54L}},{{0xADL,255UL,0xADL,255UL,0xADL,255UL,0xADL},{0x9DL,0x54L,0x54L,0x9DL,0x9DL,0x54L,0x54L},{255UL,255UL,255UL,255UL,255UL,255UL,255UL},{0x9DL,0x9DL,0x54L,0x54L,0x9DL,0x9DL,0x54L},{0xADL,255UL,0xADL,255UL,0xADL,255UL,0xADL},{0x9DL,0x54L,0x54L,0x9DL,0x9DL,0x54L,0x54L},{255UL,255UL,255UL,255UL,255UL,255UL,255UL}}};
                union U1 *l_103[1][2];
                union U1 **l_102 = &l_103[0][1];
                int32_t l_104 = 0x1E7CDF61L;
                int32_t l_106 = 0x32788347L;
                int32_t l_107[5] = {1L,1L,1L,1L,1L};
                uint32_t l_110 = 18446744073709551606UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_103[i][j] = &l_45[1][0];
                }
                for (g_64 = 0; (g_64 <= 1); g_64 += 1)
                { 
                    uint32_t l_75 = 0x669673C8L;
                    int32_t l_78 = 0xCC78B939L;
                    int8_t l_100[4] = {0xABL,0xABL,0xABL,0xABL};
                    int i;
                    --l_75;
                    if (l_33[0][0])
                        break;
                    l_78 = p_31;
                    g_73[4][0][5] = (g_101 |= (func_37((**l_74), (safe_mod_func_uint64_t_u_u(func_37(((((func_81(g_65, p_32, p_31) ^ (safe_div_func_int32_t_s_s(l_75, (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_87[4][1][0], (**l_74))), 5))))) , p_31) , (-1L)) ^ p_31), l_45[1][0].f0, l_98[1][6][4], g_66, g_99), 0x43F0C89082328EFCLL)), g_34, l_100[2], l_45[1][0]) || 0x261AE0F1B3FF46EBLL));
                }
                (*l_102) = &g_99;
                l_110--;
                for (l_110 = 0; (l_110 <= 1); l_110 += 1)
                { 
                    uint8_t *l_145 = &l_98[1][6][4];
                    g_73[2][1][1] ^= func_113(l_116, (((func_117((l_45[0][1] , l_122), (l_125 = l_124), g_126, l_128) <= p_31) | l_108) != 18446744073709551615UL));
                    l_109[4] = (safe_mul_func_int16_t_s_s((-7L), ((safe_div_func_uint8_t_u_u(255UL, ((*l_145) = g_73[5][0][3]))) , (((&g_66 != &g_66) && ((g_87[4][0][0] = ((safe_mod_func_uint8_t_u_u((p_32 == g_2[1]), g_87[4][0][0])) , 0L)) >= p_31)) && l_107[3]))));
                    (*g_126) = &p_32;
                }
                if ((&g_66 != (g_148 = l_71)))
                { 
                    int16_t *l_155[5] = {&g_156,&g_156,&g_156,&g_156,&g_156};
                    int i;
                    g_52 = (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((l_109[4] = g_65), 0)) != (**l_74)), p_32)), (-1L)));
                    if ((**l_74))
                        break;
                    return p_31;
                }
                else
                { 
                    int32_t ****l_157 = (void*)0;
                    int32_t ***l_159[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t ****l_158 = &l_159[2];
                    int32_t * const ***l_172 = &g_170;
                    int i;
                    (*l_158) = (void*)0;
                    g_73[4][0][5] &= (safe_mul_func_uint8_t_u_u((+(safe_add_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_u(0x3C7BL, (l_169 == 0xD3CA9B584F45175ALL))) , (g_101 = g_34)) >= p_32) | (p_31 == (((*l_172) = g_170) != l_173))), l_108)) != p_32), l_108))), p_32));
                    g_174[3][0] = (void*)0;
                }
            }
            return g_34;
        }
        for (l_125.f2 = 1; (l_125.f2 >= 0); l_125.f2 -= 1)
        { 
            uint32_t l_178 = 18446744073709551615UL;
            for (l_44 = 0; (l_44 <= 1); l_44 += 1)
            { 
                int32_t *l_177 = (void*)0;
                int64_t *l_184 = &l_169;
                int16_t *l_195 = &g_156;
                int32_t l_196 = 0x39BA65E9L;
                for (l_108 = 0; (l_108 <= 1); l_108 += 1)
                { 
                    (*g_126) = l_177;
                    return l_178;
                }
                if ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(((!((*l_184) = (-8L))) >= (!(safe_mod_func_int64_t_s_s(l_109[5], (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((*g_148) = 0x23961558L), (safe_rshift_func_int8_t_s_u((+(((*l_195) ^= 1L) <= ((l_196 |= (&g_48 == (void*)0)) < (5L <= g_64)))), 7)))), 8)))))), g_73[5][0][5])) | 0x28B11CE971FE1FC2LL), 6)))
                { 
                    int32_t *l_197 = &g_73[4][0][0];
                    int32_t *l_198 = &g_73[4][0][5];
                    int32_t *l_199 = &g_87[2][0][0];
                    int32_t *l_200 = &l_108;
                    int32_t *l_201 = &g_52;
                    int32_t l_202 = (-3L);
                    int32_t *l_203 = &l_105[1];
                    int32_t *l_204[5] = {&g_73[2][2][5],&g_73[2][2][5],&g_73[2][2][5],&g_73[2][2][5],&g_73[2][2][5]};
                    int i;
                    ++l_205;
                    return g_64;
                }
                else
                { 
                    int32_t ****l_211 = &l_173;
                    g_87[4][0][0] = (safe_add_func_int16_t_s_s((p_31 ^ (l_178 , ((((((*l_211) = l_210) != &g_171) < (safe_unary_minus_func_int64_t_s((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((g_87[4][0][0] || (p_32 && ((p_31 , p_31) , g_99.f0))), g_156)) ^ p_32), l_178))))) > p_31) == g_65))), 0xDBDCL));
                    if (l_178)
                        break;
                }
            }
        }
    }
    return g_48;
}



static int16_t  func_37(const int32_t  p_38, const int64_t  p_39, int16_t  p_40, int32_t  p_41, union U1  p_42)
{ 
    uint8_t l_69 = 0x50L;
    for (p_42.f2 = 0; (p_42.f2 > (-12)); --p_42.f2)
    { 
        int32_t *l_51 = &g_52;
        int32_t *l_53 = &g_52;
        int32_t *l_54 = &g_52;
        int32_t *l_55 = (void*)0;
        int32_t *l_56 = (void*)0;
        int32_t *l_57 = &g_52;
        int32_t *l_58 = &g_52;
        int32_t *l_59 = &g_52;
        int32_t *l_60 = &g_52;
        int32_t *l_61 = &g_52;
        int32_t *l_62 = &g_52;
        int32_t *l_63[2][7][4] = {{{&g_34,(void*)0,&g_2[1],&g_34},{&g_52,&g_2[2],&g_34,(void*)0},{&g_2[2],(void*)0,&g_34,&g_34},{&g_52,&g_52,&g_2[1],&g_34},{&g_34,&g_2[2],&g_52,(void*)0},{&g_52,(void*)0,&g_2[2],&g_52},{&g_52,(void*)0,&g_52,(void*)0}},{{&g_52,&g_2[2],&g_34,&g_2[2]},{&g_2[1],&g_2[2],&g_2[2],&g_34},{&g_34,&g_2[0],&g_34,&g_52},{&g_34,&g_2[2],&g_2[2],&g_34},{&g_2[1],&g_52,&g_34,&g_2[2]},{&g_52,&g_2[0],(void*)0,&g_2[2]},{&g_2[2],&g_2[1],&g_2[2],&g_2[2]}}};
        int i, j, k;
        g_48--;
        ++g_66;
    }
    g_52 |= (p_39 | g_66);
    return l_69;
}



static const uint8_t  func_81(int64_t  p_82, int8_t  p_83, int32_t  p_84)
{ 
    int32_t *l_85 = &g_52;
    int32_t *l_86[4];
    int64_t l_88[2];
    uint16_t l_89 = 0xF4C6L;
    int i;
    for (i = 0; i < 4; i++)
        l_86[i] = &g_52;
    for (i = 0; i < 2; i++)
        l_88[i] = 0x8AB48F0B38F1CEF1LL;
    --l_89;
    return p_83;
}



static int32_t  func_113(union U1  p_114, uint8_t  p_115)
{ 
    int32_t *l_129 = &g_2[1];
    int32_t **l_130 = &l_129;
    int32_t *l_131 = (void*)0;
    int32_t *l_132 = &g_73[4][0][5];
    int32_t *l_133 = &g_87[4][0][0];
    int32_t l_134 = 0xE7AF9F91L;
    int32_t l_135 = 0x01E6285BL;
    int32_t *l_136 = &g_73[4][0][5];
    int32_t *l_137[5] = {&l_134,&l_134,&l_134,&l_134,&l_134};
    uint8_t l_138 = 0xE5L;
    int i;
    (*l_130) = ((*g_126) = l_129);
    --l_138;
    (*l_133) |= 0x3060F56CL;
    return (**g_126);
}



static uint32_t  func_117(union U1 ** p_118, const union U1  p_119, int32_t ** p_120, struct S0  p_121)
{ 
    return p_119.f0;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_73[i][j][k], "g_73[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_87[i][j][k], "g_87[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_228[i][j], "g_228[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_333.f0, "g_333.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_383[i][j][k], "g_383[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_407, "g_407", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_433[i], "g_433[i]", print_hash_value);

    }
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_473.f0, "g_473.f0", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
