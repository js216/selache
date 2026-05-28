// SPDX-License-Identifier: MIT
// cctest_csmith_70dcbf96.c --- cctest case csmith_70dcbf96 (csmith seed 1893515158)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5eee024 */
/* @exp_ticks 0x3b5d */

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

// Options:   -s 1893515158 -o /tmp/csmith_gen_mobiyka2/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   const int32_t  f1;
   const int32_t  f2;
   uint8_t  f3;
};
#pragma pack(pop)

struct S1 {
   const int32_t  f0;
   int8_t  f1;
   int8_t  f2;
   int16_t  f3;
   int32_t  f4;
};

union U2 {
   uint16_t  f0;
};


static uint64_t g_16 = 3UL;
static struct S1 g_18 = {0xD3EC93CCL,0x54L,4L,-1L,0x8EF068CDL};
static int32_t g_21 = 0xFBFCC013L;
static int16_t g_32 = 0x8A99L;
static uint32_t g_34 = 0x5DE2CAEAL;
static uint16_t g_35 = 0x81F9L;
static uint8_t g_42 = 0x88L;
static int64_t g_83 = (-4L);
static int32_t g_85 = 1L;
static uint8_t g_86 = 0x98L;
static uint32_t g_93 = 1UL;
static uint32_t g_118 = 0xB7399A04L;
static int16_t g_171 = 0xB210L;
static int32_t g_181 = 0xD412DD9BL;
static int8_t g_184[1][2] = {{0L,0L}};
static struct S0 g_189[3][1] = {{{-1L,0xE2E02799L,6L,0x75L}},{{-1L,0xE2E02799L,6L,0x75L}},{{-1L,0xE2E02799L,6L,0x75L}}};
static uint32_t g_210 = 0xF0BBE911L;
static int32_t g_253 = (-1L);
static uint32_t g_281 = 0UL;
static int64_t g_328 = 0x3325B8E2C0D5E5FDLL;
static uint16_t g_330 = 0UL;
static union U2 g_364 = {0xB29EL};
static uint64_t g_401 = 0x3B66BF3DB485D11CLL;
static uint32_t g_459 = 0UL;



static int8_t  func_1(void);
static uint32_t  func_2(uint16_t  p_3, int32_t  p_4, int16_t  p_5, int64_t  p_6, uint64_t  p_7);
static int32_t  func_11(int32_t  p_12, struct S0  p_13, struct S1  p_14, int8_t  p_15);
static uint16_t  func_19(const int16_t  p_20);




static int8_t  func_1(void)
{ 
    uint16_t l_8 = 0x12E1L;
    struct S0 l_17 = {-9L,0x9A22DB78L,-1L,1UL};
    int32_t l_441 = (-5L);
    const int32_t l_447[3] = {1L,1L,1L};
    int32_t l_462[3];
    int i;
    for (i = 0; i < 3; i++)
        l_462[i] = (-6L);
    if ((((func_2((l_8--), func_11(g_16, l_17, g_18, ((l_441 = (((func_19(((-1L) | 0UL)) | 0x8ADBL) , (-1L)) == l_17.f2)) == 0xB2A3786C04805B41LL)), l_17.f0, g_118, l_17.f3) | g_189[2][0].f3) && l_447[2]) == 1UL))
    { 
        int64_t l_450 = 0L;
        if (((g_18.f1 ^= (g_364 , (g_16 | 0xEC93L))) && (safe_lshift_func_int16_t_s_s(l_450, 9))))
        { 
            uint32_t l_451 = 0UL;
            int32_t l_458 = 0xFB48C5FCL;
            l_451++;
            for (g_281 = 0; g_281 < 1; g_281 += 1)
            {
                for (g_32 = 0; g_32 < 2; g_32 += 1)
                {
                    g_184[g_281][g_32] = 0x4AL;
                }
            }
            for (g_16 = (-24); (g_16 > 36); g_16 = safe_add_func_int64_t_s_s(g_16, 9))
            { 
                g_85 = ((g_189[2][0] , (l_458 = ((((g_328 = (-8L)) | ((safe_rshift_func_uint16_t_u_u(2UL, 12)) && g_34)) != 0x5080D3EC32734244LL) && 4294967294UL))) , l_450);
            }
        }
        else
        { 
            ++g_459;
            l_462[0] |= (g_21 = l_441);
            return l_462[0];
        }
    }
    else
    { 
        uint64_t l_470 = 18446744073709551615UL;
        int32_t l_477 = 0x03774D24L;
        for (g_35 = 0; (g_35 <= 0); g_35 += 1)
        { 
            int16_t l_484 = 8L;
            int32_t l_485 = 0xABE14449L;
            uint32_t l_486 = 18446744073709551610UL;
            if ((safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint64_t_u((safe_mod_func_uint8_t_u_u((g_171 ^ ((((((safe_add_func_int32_t_s_s((((g_364 , (l_470 = (l_441 < (l_447[1] > (-7L))))) || 0UL) , g_34), 4294967293UL)) <= g_18.f1) || g_86) == g_330) | g_459) == g_184[0][1])), (-1L))))), g_86)))
            { 
                uint64_t l_471 = 0UL;
                l_477 = (l_471 <= (safe_div_func_uint64_t_u_u(((!((safe_div_func_int8_t_s_s(0x0EL, 2L)) || l_470)) > 0x675BAE61L), l_471)));
            }
            else
            { 
                return g_18.f0;
            }
            for (g_330 = 0; (g_330 <= 0); g_330 += 1)
            { 
                int i, j;
                l_441 = ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s((g_184[g_35][(g_330 + 1)] ^ ((((l_462[0] ^= (g_85 = (-6L))) , g_184[g_35][(g_330 + 1)]) > (safe_mod_func_int8_t_s_s(((l_470 ^ g_330) | g_184[g_35][(g_330 + 1)]), g_181))) | 0xCCL)), l_484)) > g_459), g_189[2][0].f2)) >= 0x6C5FL);
                g_18.f4 = g_18.f4;
                --l_486;
            }
        }
    }
    return g_34;
}



static uint32_t  func_2(uint16_t  p_3, int32_t  p_4, int16_t  p_5, int64_t  p_6, uint64_t  p_7)
{ 
    int8_t l_446[2];
    int i;
    for (i = 0; i < 2; i++)
        l_446[i] = 4L;
    for (g_18.f4 = (-28); (g_18.f4 == (-12)); g_18.f4++)
    { 
        return p_7;
    }
    return l_446[0];
}



static int32_t  func_11(int32_t  p_12, struct S0  p_13, struct S1  p_14, int8_t  p_15)
{ 
    int8_t l_442 = 0x6CL;
    uint16_t l_443 = 1UL;
    p_12 |= (l_442 = (p_14.f4 = g_118));
    p_12 = l_443;
    return g_281;
}



static uint16_t  func_19(const int16_t  p_20)
{ 
    uint32_t l_41 = 0x8880D0E1L;
    int32_t l_51 = 0xDA4ADCF8L;
    struct S1 l_75 = {3L,0L,1L,0x3A5BL,1L};
    int32_t l_114 = 3L;
    uint32_t l_156 = 18446744073709551615UL;
    uint64_t l_157[4];
    union U2 l_168 = {6UL};
    uint16_t l_173 = 0xF6D2L;
    struct S0 l_180 = {0L,0x7D78ABA5L,-6L,0x91L};
    uint8_t l_190[1];
    int32_t l_254 = 0xF0D61F29L;
    int32_t l_354 = (-9L);
    uint32_t l_440 = 4UL;
    int i;
    for (i = 0; i < 4; i++)
        l_157[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_190[i] = 0x99L;
    for (g_21 = 0; (g_21 >= (-12)); g_21 = safe_sub_func_int16_t_s_s(g_21, 5))
    { 
        uint64_t l_49 = 0xFF9752EE8B7203FCLL;
        int32_t l_141 = 8L;
        if ((safe_mul_func_uint16_t_u_u(65535UL, ((p_20 ^ (safe_div_func_int32_t_s_s(0L, (safe_mod_func_int8_t_s_s((-1L), 4L))))) ^ g_18.f1))))
        { 
            uint32_t l_39 = 0UL;
            int32_t l_100 = 3L;
            int16_t l_101 = 0L;
            int32_t l_102 = 0x8DFE8548L;
            g_32 = g_21;
            if (g_21)
            { 
                uint16_t l_38 = 7UL;
                g_34 = (+g_18.f1);
                --g_35;
                if (l_38)
                    continue;
            }
            else
            { 
                uint32_t l_40[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_40[i] = 6UL;
                l_40[1] = (p_20 >= l_39);
                if (g_18.f4)
                    break;
            }
            if ((g_42 ^= (l_41 ^= g_32)))
            { 
                int8_t l_50[2][2][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_50[i][j][k] = 0x7BL;
                    }
                }
                l_51 = (safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((g_18.f3 >= (safe_add_func_int8_t_s_s(l_49, l_50[1][1][0]))), g_18.f4)) , g_42), 255UL));
            }
            else
            { 
                uint32_t l_84 = 5UL;
                int32_t l_103[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_103[i] = (-1L);
                g_86 = ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u(((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((!(g_35 = (g_21 ^ (safe_add_func_int32_t_s_s((((g_85 = ((((l_75 , (safe_unary_minus_func_uint16_t_u(0x414EL))) | (safe_sub_func_int32_t_s_s((g_83 = (safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((l_75.f1 == g_18.f0) > 0xD8D46D8DA569FAA3LL), p_20)), g_32))), g_32))) < g_18.f4) || l_84)) < 0xC08F52837B75AE7BLL) <= (-1L)), 0x89F16C48L))))), g_34)) && g_21), p_20)) , 0x98D42F466F6A0F30LL), 0UL)) >= 9UL), 0x32CF2D060950C43CLL)), 0L)), 0x328171C6L)) & l_49) , g_18.f2) ^ g_18.f3), l_39)) && 0xA9L), 0)) > 0x6F67A21E2C279A1ALL) || g_18.f3) , p_20), 1)) | l_84), g_16)) > l_49);
                g_85 = (safe_div_func_uint64_t_u_u(p_20, (p_20 , (g_18 , p_20))));
                l_103[0] ^= ((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((g_93 &= (255UL | 255UL)) , (((g_85 = ((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(0x6F38L, ((l_75.f4 = ((l_100 = (safe_sub_func_int16_t_s_s(0xD3BEL, p_20))) , g_18.f4)) == l_101))) <= g_93) >= g_85), l_102)) >= l_49)) & p_20) < 18446744073709551615UL)), 0xE6A8L)), 0x5ABEL)) | l_49);
            }
        }
        else
        { 
            int32_t l_115[2][5][4] = {{{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL},{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL},{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL},{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL},{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL}},{{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL},{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL},{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL},{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL},{0x474D9FADL,0xB4FE2E88L,0xB4FE2E88L,0x474D9FADL}}};
            int i, j, k;
            l_114 ^= (((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((safe_add_func_int64_t_s_s((0x39069939L | (l_49 <= (-1L))), ((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((l_49 != g_21), 9)) > p_20), l_75.f2)) & (-1L)) < l_51) ^ l_75.f4))) != p_20) == g_35) != p_20), g_35)), l_49)) == l_75.f0) < g_18.f2);
            for (g_32 = 1; (g_32 >= 0); g_32 -= 1)
            { 
                if (p_20)
                    break;
            }
            if (((safe_mul_func_uint16_t_u_u(((0x96CD894EL & (0x139E91ECAE5D5D6CLL ^ p_20)) <= p_20), p_20)) , g_83))
            { 
                if (g_118)
                    break;
            }
            else
            { 
                const uint16_t l_140 = 0xB3CAL;
                l_141 = (safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u((g_18 , (safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((p_20 >= (safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((l_75 , ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((g_18 , 0x45ECL) >= 1UL), l_49)), 6)) > g_83)) | 4294967295UL), g_83)) != (-10L)), p_20))) && 0xF8L), 0x068BL)), 0xC56EC938L)) , g_86), l_140)) | g_86)))), p_20)) , p_20), g_18.f2)) > p_20) , 0xA5298247L), g_93));
            }
        }
        l_51 = g_42;
    }
    if ((l_157[0] = (l_51 = (l_75.f4 = ((l_114 |= (safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((p_20 ^ (safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s((l_75.f0 <= (l_75.f2 & ((p_20 != l_41) < l_51))), g_18.f0)), p_20)), 1))) < 65528UL), 0x71L)) ^ 0x62A55EFA8D4CD455LL), l_156)) ^ p_20) | 0L) , 0x9712L), 2UL)), g_32))) && l_75.f1)))))
    { 
        int32_t l_158[5][5][5] = {{{(-1L),0x13F0835FL,(-5L),0xA5798714L,0xA5798714L},{(-3L),6L,(-3L),0L,(-3L)},{(-1L),0xA5798714L,0x13F0835FL,0x13F0835FL,0xA5798714L},{0x031E146CL,0L,4L,0L,0x031E146CL},{0xA5798714L,0x13F0835FL,0x13F0835FL,0xA5798714L,(-1L)}},{{(-3L),0L,(-3L),6L,(-3L)},{0xA5798714L,0xA5798714L,(-5L),0x13F0835FL,(-1L)},{0x031E146CL,6L,4L,6L,0x031E146CL},{(-1L),0x13F0835FL,(-5L),0xA5798714L,0xA5798714L},{(-3L),6L,(-3L),0L,(-3L)}},{{(-1L),0xA5798714L,0x13F0835FL,0x13F0835FL,0xA5798714L},{0x031E146CL,0L,4L,0L,0x031E146CL},{0xA5798714L,0x13F0835FL,0x13F0835FL,0xA5798714L,(-1L)},{(-3L),0L,(-3L),6L,(-3L)},{0xA5798714L,0xA5798714L,(-5L),0x13F0835FL,(-1L)}},{{0x031E146CL,6L,4L,6L,0x031E146CL},{(-1L),0x13F0835FL,(-5L),0xA5798714L,0xA5798714L},{(-3L),6L,(-3L),0L,(-3L)},{(-1L),0xA5798714L,0x13F0835FL,0x13F0835FL,0xA5798714L},{0x031E146CL,0L,4L,0L,0x031E146CL}},{{0xA5798714L,0x13F0835FL,0x13F0835FL,0xA5798714L,(-1L)},{(-3L),0L,(-3L),6L,(-3L)},{0xA5798714L,0xA5798714L,(-5L),0x13F0835FL,(-1L)},{0x031E146CL,6L,4L,6L,0x031E146CL},{(-1L),0x13F0835FL,(-5L),0xA5798714L,0xA5798714L}}};
        uint32_t l_204 = 0UL;
        union U2 l_230[5][4][1] = {{{{1UL}},{{65531UL}},{{0x6621L}},{{65531UL}}},{{{1UL}},{{0x1C22L}},{{0x9440L}},{{65533UL}}},{{{0x9440L}},{{0x1C22L}},{{1UL}},{{65531UL}}},{{{0x6621L}},{{65531UL}},{{1UL}},{{0x1C22L}}},{{{0x9440L}},{{65533UL}},{{0x9440L}},{{0x1C22L}}}};
        int32_t l_258 = 0L;
        int i, j, k;
        l_158[4][1][4] ^= p_20;
        if ((safe_sub_func_int64_t_s_s(1L, (safe_unary_minus_func_int64_t_s(((-1L) >= (((safe_add_func_uint8_t_u_u((l_51 = (safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((g_35 = ((l_75.f4 = (l_75.f2 && ((l_168 , l_168.f0) != p_20))) & g_93)), g_18.f3)) & l_158[4][1][4]), 0x6CL))), p_20)) && 1UL) == g_34)))))))
        { 
            int16_t l_185 = 0xAC7FL;
            int32_t l_193 = (-7L);
            int32_t l_194 = 4L;
            for (l_75.f3 = 3; (l_75.f3 >= 0); l_75.f3 -= 1)
            { 
                int32_t l_172 = (-3L);
                int i;
                g_21 = (safe_lshift_func_uint8_t_u_s(l_157[l_75.f3], ((g_83 >= (g_171 | ((l_172 = g_16) && p_20))) != l_173)));
                l_51 = ((safe_sub_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((g_184[0][1] = (safe_rshift_func_uint8_t_u_s((p_20 != (g_181 = (l_180 , 0x9FF31343A823590DLL))), (safe_mul_func_int16_t_s_s((-1L), p_20))))), p_20)) , l_185) <= 0x51C6L), l_185)) >= l_185);
                l_172 = ((p_20 < ((safe_mul_func_int16_t_s_s((((+(l_185 | (((g_189[2][0] , (l_158[4][1][4] == l_41)) , 0x0AL) > g_18.f2))) > 65535UL) > 1UL), l_190[0])) || p_20)) & p_20);
            }
            for (l_75.f2 = 0; (l_75.f2 == 4); l_75.f2 = safe_add_func_int8_t_s_s(l_75.f2, 3))
            { 
                uint32_t l_195 = 0xC323CAD4L;
                int32_t l_205 = (-3L);
                l_195++;
                l_75.f4 = (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((g_34 , ((l_205 = (l_204 == p_20)) >= ((safe_sub_func_uint16_t_u_u((g_35 = ((safe_div_func_uint16_t_u_u(l_190[0], 0xBBFEL)) , g_181)), p_20)) < 0xCFL))) , g_34), p_20)), 0xDCBFL)), 7L));
            }
            g_210++;
        }
        else
        { 
            uint8_t l_255 = 0x08L;
            g_85 = ((((g_83 = (safe_lshift_func_uint8_t_u_u((g_86--), 3))) , (safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s((((l_114 = g_86) == (~(safe_add_func_uint16_t_u_u(l_157[0], ((g_32 = (~p_20)) , (g_171 = (((safe_mod_func_int32_t_s_s(p_20, 0x030E86BAL)) == g_18.f1) || l_204))))))) & p_20), 0x53653626FD0A497BLL)), p_20)) , 0L), p_20))) , g_181) , p_20);
            g_21 = ((((l_254 = (+((l_230[0][2][0] , (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((l_51 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((((!(safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s((-9L), p_20)), (safe_div_func_int64_t_s_s(((safe_unary_minus_func_int16_t_s(((l_114 ^= (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0xB0L, p_20)), g_34))) ^ 0x73L))) , 0x38BE1AEA985D862FLL), 0x0173F839FAA199BFLL)))) , 253UL), g_253))) > p_20) ^ p_20) & 0x1820L) < g_184[0][1]), g_32)), g_85))) & (-4L)), 5)), g_93))) <= l_158[1][4][1]))) != g_21) ^ l_255) >= p_20);
            if ((p_20 < p_20))
            { 
                uint16_t l_259 = 65530UL;
                int32_t l_262[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_262[i] = 0L;
                l_51 = (p_20 >= ((safe_sub_func_int16_t_s_s((((l_259 = l_258) >= (l_158[0][4][2] | (((safe_mul_func_uint8_t_u_u(l_262[0], (-7L))) | 0x0A54B791L) ^ l_262[0]))) < g_16), 0x044AL)) || 0x068222830CF97334LL));
                g_21 ^= ((g_34 = 0xFF1D34AEL) >= (l_114 = (((((0L | ((g_181 != p_20) <= g_35)) || p_20) , 0xC21F15DC8CDDD8CALL) != p_20) > p_20)));
            }
            else
            { 
                uint16_t l_263 = 65534UL;
                union U2 l_269 = {0xA79EL};
                int32_t l_280 = 0L;
                l_263--;
                g_281 = (g_85 = ((((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((g_32 = ((((l_263 & ((l_269 , (safe_lshift_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s((((g_21 &= (l_280 = ((safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((p_20 ^ p_20) , 246UL), l_51)), l_255)), 1UL)) < 4L))) && l_280) <= 2UL), l_180.f0)) , p_20) < g_18.f0), 1))) == l_255)) > p_20) != l_158[4][1][4]) & p_20)))), g_184[0][1])) != p_20) , 1L) , (-1L)));
                g_21 = 0xC11C24DCL;
            }
        }
    }
    else
    { 
        uint16_t l_284 = 1UL;
        int32_t l_313 = 2L;
        const uint16_t l_322 = 0x259DL;
        int32_t l_324 = 0x90D8EACDL;
        int32_t l_326 = (-1L);
        int32_t l_329[4];
        union U2 l_400 = {3UL};
        int32_t l_404 = 0L;
        int i;
        for (i = 0; i < 4; i++)
            l_329[i] = 6L;
        if ((((safe_rshift_func_int8_t_s_s(l_284, p_20)) , (safe_mul_func_int16_t_s_s(l_75.f4, ((safe_unary_minus_func_int64_t_s(((((((safe_add_func_int64_t_s_s(((((1UL > 0x41L) | p_20) , (-6L)) && p_20), g_281)) || 1L) < p_20) , p_20) , l_284) || g_171))) && g_35)))) != g_35))
        { 
            uint8_t l_304 = 0x5EL;
            uint16_t l_305 = 1UL;
            l_305 = (((safe_lshift_func_uint8_t_u_u(p_20, l_284)) , (g_83 = (safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(0x28102D8EADAD00C4LL, (safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s(l_284, l_304)), g_18.f3)))), p_20)), 0x1481D232L)), 10)))) && p_20);
            l_313 &= (((safe_lshift_func_int8_t_s_s((!g_171), (safe_add_func_int8_t_s_s((l_75.f4 = (safe_mul_func_int16_t_s_s(0xED1CL, 65534UL))), p_20)))) , p_20) == (-1L));
        }
        else
        { 
            int64_t l_323 = 0x9EA8A35C7B8DB318LL;
            int32_t l_325 = (-5L);
            int32_t l_327 = 0x89A2E288L;
            for (l_75.f1 = 0; (l_75.f1 == (-4)); --l_75.f1)
            { 
                l_323 &= (l_313 = (((safe_mul_func_uint8_t_u_u((g_189[2][0].f0 <= 0xC1L), (safe_mod_func_int32_t_s_s((g_85 &= (safe_rshift_func_uint8_t_u_s(p_20, ((g_18 , 7UL) , l_322)))), g_16)))) < p_20) != 254UL));
                return g_118;
            }
            --g_330;
        }
        l_51 = (l_313 | (((g_328 == (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_86, (!(safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((g_35 = ((safe_div_func_int32_t_s_s(0xE10B6CEEL, g_86)) <= 0x12L)), p_20)) < g_42), p_20))))), p_20))) || p_20) <= l_329[2]));
        if ((g_85 = ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(0x88L, l_329[2])) & (safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_20, l_354)), 2)), l_329[0]))) <= l_322), 4)) ^ l_180.f2)))
        { 
            uint8_t l_377 = 7UL;
            int64_t l_378 = 0xD38D5E84937974BFLL;
            int32_t l_382 = 0x70D4B94CL;
            if ((0xA6L == g_86))
            { 
                uint32_t l_359 = 0xCCB47C0FL;
                int32_t l_376 = 7L;
                int32_t l_379 = 0xAF3374ABL;
                l_379 ^= (g_18.f4 < ((safe_sub_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u(((l_359 = p_20) > (safe_mul_func_uint8_t_u_u(((((((safe_rshift_func_uint8_t_u_s(((g_364 , ((l_51 = (safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((l_329[2] &= ((safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((l_354 &= l_326) , 1UL), l_376)), 0xA6B7EA1FL)) , 0xC0L), g_21)) && 0x0A3EC28CL)))), 0x95L)), g_21))) <= p_20)) , g_253), 5)) | g_85) != l_377) ^ 3UL) || 18446744073709551615UL) | 0xF1L), 7L))), 9L)) || g_42) > l_156), l_378)) , p_20));
                l_379 = l_324;
            }
            else
            { 
                l_382 &= (safe_rshift_func_int16_t_s_u(l_324, 6));
            }
        }
        else
        { 
            uint16_t l_392 = 9UL;
            if (((~p_20) , (safe_mul_func_int16_t_s_s(0x6FFCL, (safe_sub_func_int64_t_s_s((l_324 , ((safe_sub_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(l_392, g_16)) | 0xC9F1E63BL) < p_20), g_189[2][0].f0)) < p_20)), g_16))))))
            { 
                int32_t l_415 = 1L;
                g_21 = (g_85 = ((safe_rshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u((!((safe_mul_func_int8_t_s_s((((l_400 , g_364) , ((g_401 = 0x7E3807DBL) <= ((safe_rshift_func_uint16_t_u_s(l_329[3], 0)) | l_392))) < l_400.f0), (-1L))) && p_20)), 0xA4L)) , p_20) & 9UL), p_20)) , l_404));
                l_404 = ((safe_div_func_uint64_t_u_u(g_93, ((safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(l_254, (safe_sub_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_u(((l_173 ^ (p_20 == l_392)) ^ p_20), p_20)) , g_18.f2) > g_32) != p_20), p_20)))), 0x1933DCA61D593650LL)) , 0x1269EAFC1F1D460DLL))) & 6L);
                l_415 = g_34;
            }
            else
            { 
lbl_429:
                g_21 = ((safe_sub_func_uint64_t_u_u((l_313 |= (safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(g_34, ((safe_rshift_func_uint8_t_u_u((0x5DDFC62BL == (safe_add_func_int16_t_s_s((p_20 , (safe_mod_func_int64_t_s_s((!(p_20 <= g_18.f3)), (-9L)))), l_354))), l_75.f0)) , l_75.f2))) > p_20), 0xE77EL))), l_41)) ^ l_329[2]);
                g_21 = 3L;
            }
            if (g_18.f0)
                goto lbl_429;
            for (g_32 = (-20); (g_32 > 4); g_32++)
            { 
                return l_173;
            }
        }
    }
    g_21 = (g_85 = ((safe_mod_func_int16_t_s_s(p_20, 1L)) > (l_180.f3 <= ((safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s((((l_75.f4 &= (0x01L == l_75.f2)) < p_20) , l_440), p_20)), l_75.f1)) != 2L), 0x9EDDL)) & 3UL))));
    return p_20;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_18.f2, "g_18.f2", print_hash_value);
    transparent_crc(g_18.f3, "g_18.f3", print_hash_value);
    transparent_crc(g_18.f4, "g_18.f4", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_184[i][j], "g_184[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_189[i][j].f0, "g_189[i][j].f0", print_hash_value);
            transparent_crc(g_189[i][j].f1, "g_189[i][j].f1", print_hash_value);
            transparent_crc(g_189[i][j].f2, "g_189[i][j].f2", print_hash_value);
            transparent_crc(g_189[i][j].f3, "g_189[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
