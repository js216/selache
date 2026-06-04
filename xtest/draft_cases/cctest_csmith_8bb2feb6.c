// SPDX-License-Identifier: MIT
// cctest_csmith_8bb2feb6.c --- cctest case csmith_8bb2feb6 (csmith seed 2343763638)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3837bb72 */
/* @exp_ticks 0x95f9 */

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

// Options:   -s 2343763638 -o /home/agent1/fast_data/tmp/csmith_gen_i7_simll/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
   int8_t  f1;
   uint64_t  f2;
   const int16_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int64_t  f0;
   const int32_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

struct S2 {
   uint8_t  f0;
   const struct S1  f1;
   int64_t  f2;
};

union U3 {
   struct S2  f0;
   const uint16_t  f1;
   int32_t  f2;
   uint8_t  f3;
};

union U4 {
   const uint8_t  f0;
   uint8_t  f1;
   uint32_t  f2;
};

union U5 {
   struct S1  f0;
};


static int32_t g_2 = (-1L);
static int32_t g_6 = 0x83989226L;
static int32_t g_27 = 0xC5A74D4BL;
static uint32_t g_32 = 0xBB1E5DE2L;
static uint32_t g_38 = 4294967295UL;
static uint64_t g_51 = 18446744073709551614UL;
static int32_t g_54 = (-8L);
static uint16_t g_58 = 0x7BFEL;
static int16_t g_61 = 0x6028L;
static int32_t g_62[4][4][4] = {{{0xB7DE7E85L,0xB7DE7E85L,0xBE98B872L,(-1L)},{0x4C83B0F6L,0x85266972L,(-1L),0x9F16C484L},{(-1L),(-1L),0L,(-1L)},{0xBE98B872L,(-1L),0x8F681728L,0x9F16C484L}},{{(-1L),0x85266972L,0xAA33FE68L,(-1L)},{0x2C65315FL,0xB7DE7E85L,(-1L),0x5532CF2DL},{0L,0xAA33FE68L,4L,0x0D8EB8A8L},{(-1L),0x837B75AEL,0x6A0F30BDL,0x837B75AEL}},{{(-1L),(-1L),0x0D8EB8A8L,(-1L)},{0x8D42F466L,0x0D8EB8A8L,(-8L),1L},{0x837B75AEL,0x8F681728L,0xFAAB159BL,(-5L)},{0x837B75AEL,0x1A75C26FL,(-1L),0xB7DE7E85L}},{{0xBE98B872L,0x837B75AEL,1L,0x8F681728L},{0x6D8DA569L,0L,(-8L),0xCFB0F81AL},{1L,(-1L),0xCFB0F81AL,0xFAAB159BL},{(-1L),1L,1L,(-1L)}}};
static uint8_t g_64 = 0x31L;
static uint16_t g_119 = 0xB9A7L;
static struct S1 g_124[3][2][5] = {{{{0xAADDF971429669FALL,0x0D986BD2L,0xA3065BCBL},{0x8FC2E2BE68C9B47ALL,-8L,0x86465E51L},{0xAADDF971429669FALL,0x0D986BD2L,0xA3065BCBL},{-7L,-1L,2UL},{-1L,0x885B3408L,0UL}},{{2L,-7L,18446744073709551606UL},{-8L,-9L,0UL},{-7L,-10L,0x8B8653E9L},{-8L,-9L,0UL},{2L,-7L,18446744073709551606UL}}},{{{0xAADDF971429669FALL,0x0D986BD2L,0xA3065BCBL},{-8L,0x307D3DBFL,0xD0A13267L},{0x8FC2E2BE68C9B47ALL,-8L,0x86465E51L},{1L,1L,0x40F15219L},{0x8FC2E2BE68C9B47ALL,-8L,0x86465E51L}},{{1L,0L,18446744073709551608UL},{1L,0L,18446744073709551608UL},{-7L,-10L,0x8B8653E9L},{2L,-7L,18446744073709551606UL},{-1L,-8L,0xF7AE5966L}}},{{{-8L,0x307D3DBFL,0xD0A13267L},{0xAADDF971429669FALL,0x0D986BD2L,0xA3065BCBL},{0xAADDF971429669FALL,0x0D986BD2L,0xA3065BCBL},{-8L,0x307D3DBFL,0xD0A13267L},{0x8FC2E2BE68C9B47ALL,-8L,0x86465E51L}},{{-8L,-9L,0UL},{2L,-7L,18446744073709551606UL},{0L,-1L,0x7F2D8A91L},{0L,-1L,0x7F2D8A91L},{2L,-7L,18446744073709551606UL}}}};
static int8_t g_214 = 0x2FL;
static uint8_t g_215 = 0x21L;
static uint8_t g_220[1] = {0x40L};
static int64_t g_223 = 0L;



static uint64_t  func_1(void);
static uint32_t  func_11(const uint8_t  p_12, const uint16_t  p_13);
static uint16_t  func_14(uint32_t  p_15);
static int16_t  func_17(const union U4  p_18, uint64_t  p_19, int32_t  p_20, union U5  p_21);




static uint64_t  func_1(void)
{ 
    uint16_t l_5[4][1] = {{3UL},{0xFE00L},{3UL},{0xFE00L}};
    const union U4 l_22 = {0xA0L};
    union U5 l_25 = {{1L,0x33920027L,1UL}};
    int32_t l_33 = 0x18C6A866L;
    union U3 l_139[1] = {{{7UL,{0x51B008363A23D7F4LL,-8L,18446744073709551612UL},0xB8A10D3AC039BA74LL}}};
    uint64_t l_140 = 2UL;
    struct S1 l_141[2] = {{0x155AEE4DE7F71252LL,0x078B0CADL,18446744073709551615UL},{0x155AEE4DE7F71252LL,0x078B0CADL,18446744073709551615UL}};
    uint64_t l_155[5] = {0xE9DF1BF41CA89C16LL,0xE9DF1BF41CA89C16LL,0xE9DF1BF41CA89C16LL,0xE9DF1BF41CA89C16LL,0xE9DF1BF41CA89C16LL};
    int32_t l_218 = 0L;
    int32_t l_222 = 0xBE1AEA98L;
    int16_t l_236 = (-4L);
    int64_t l_246 = 0x41AA105A60EC3E43LL;
    int i, j;
lbl_249:
    for (g_2 = 0; (g_2 > (-11)); --g_2)
    { 
        union U3 l_23 = {{250UL,{0xEDFC3E8CE6FC2E60LL,3L,18446744073709551615UL},0x53FC2F92E6C0B333LL}};
        int32_t l_130[4][4][2] = {{{(-8L),(-8L)},{0xFA8D4CD4L,0xD1D32CE0L},{0xEF2C45E8L,0xD1D32CE0L},{0xFA8D4CD4L,(-8L)}},{{(-8L),0xFA8D4CD4L},{0xD1D32CE0L,0xEF2C45E8L},{0xD1D32CE0L,0xFA8D4CD4L},{(-8L),(-8L)}},{{0xFA8D4CD4L,0xD1D32CE0L},{0xEF2C45E8L,0xD1D32CE0L},{0xFA8D4CD4L,(-8L)},{(-8L),0xFA8D4CD4L}},{{0xD1D32CE0L,0xEF2C45E8L},{0xD1D32CE0L,0xFA8D4CD4L},{(-8L),(-8L)},{0xFA8D4CD4L,0xD1D32CE0L}}};
        int32_t l_131 = 6L;
        uint64_t l_207 = 0xD25B55C4BC6AF4C5LL;
        int8_t l_228 = 0x8AL;
        int i, j, k;
        for (g_6 = 0; (g_6 >= 0); g_6 -= 1)
        { 
            int32_t l_24 = 0x593F6A08L;
            uint64_t l_179 = 0x3E68E44B7FDB3593LL;
            int i, j;
            if ((safe_lshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(l_5[g_6][g_6], (func_11(g_2, func_14((l_33 |= (((((!(g_32 = func_17(l_22, (l_23 , l_24), l_23.f0.f1.f0, l_25))) , 0xABA4A2C6L) || g_2) >= 0x41ADF890L) | 2UL)))) > g_2))) && 0xEC59EA234E6C56EALL), 8)))
            { 
                struct S0 l_129 = {0L,-10L,0x59850BAFF8C079A2LL,0x4A04L};
                g_54 = (l_131 = (g_124[0][1][4] , (safe_mod_func_uint32_t_u_u((((((safe_mod_func_uint8_t_u_u(((((l_23 , 1L) || ((l_130[2][3][0] &= ((l_129 , 0x6F82L) == g_27)) , g_32)) != g_61) == l_5[1][0]), g_38)) != g_51) ^ l_23.f0.f1.f2) , g_124[0][1][4].f2) == l_25.f0.f1), 0x8DE757AFL))));
            }
            else
            { 
                int32_t l_132 = 0xB34804F9L;
                g_62[3][2][1] = l_132;
                return g_62[2][0][3];
            }
            if ((safe_add_func_int8_t_s_s(((g_64 >= ((safe_mul_func_int8_t_s_s(g_119, g_62[3][1][3])) > (l_139[0] , l_140))) && l_140), l_23.f0.f0)))
            { 
                int32_t l_144 = 0x2AF55E83L;
                l_144 = (l_141[1] , (safe_mod_func_int8_t_s_s((18446744073709551608UL | (g_124[0][1][4].f1 >= ((((l_144 != 0x8FB6L) == g_124[0][1][4].f0) && 0x29L) == l_23.f0.f2))), 0xF3L)));
                l_24 |= (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((((g_38 | (safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s((l_130[2][3][0] ^= ((((safe_sub_func_uint8_t_u_u(l_155[2], (safe_add_func_uint32_t_u_u(l_144, g_124[0][1][4].f2)))) , 1UL) | g_119) || 0xC37BL)), l_140)), 0x225C9EAE24F2121ELL))) && l_5[g_6][g_6]) > l_5[g_6][g_6]) == 0x1FL), l_5[g_6][g_6])) <= l_23.f0.f1.f2), g_38));
            }
            else
            { 
                int32_t l_178 = (-1L);
                g_62[0][1][3] = (safe_lshift_func_int8_t_s_s(l_130[2][3][0], (safe_sub_func_uint8_t_u_u((!(g_51 = ((~((safe_sub_func_int16_t_s_s((((safe_add_func_int64_t_s_s(((safe_div_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_6, l_140)), (((safe_add_func_uint8_t_u_u(0UL, 3UL)) >= l_23.f0.f0) < l_5[g_6][g_6]))), 0x82L)) <= 0xF53AED6AE4A769E6LL) <= 1UL), g_27)) < l_178), 0x9F72E6D70E512B8ELL)) ^ (-4L)) <= g_124[0][1][4].f2), g_38)) & 1UL)) == l_179))), 1UL))));
                return l_24;
            }
            g_62[2][3][3] = (l_130[3][1][0] > 0x5BA501070E863B5CLL);
        }
        for (l_23.f0.f2 = 1; (l_23.f0.f2 == 13); ++l_23.f0.f2)
        { 
            uint64_t l_219 = 0x089B948756993133LL;
            int32_t l_221 = 0xF62BBA29L;
            g_54 |= (safe_mod_func_uint32_t_u_u((g_62[2][2][2] != (safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((l_222 |= ((safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((g_64 |= (safe_rshift_func_uint8_t_u_u(g_2, (l_207 |= g_62[2][3][3])))), ((g_220[0] = (l_130[2][0][1] = (l_219 = ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((l_33 = (+((((~((g_215--) ^ (l_23.f0.f1.f0 , 0xFAL))) < 18446744073709551612UL) ^ g_2) < l_23.f0.f1.f1))), l_218)) != 246UL) , l_130[1][1][0]), g_51)) != 0UL)))) , g_58))), l_221)) <= 4294967292UL), 3)) != l_221), 0x7B750C1D09C81770LL)), (-1L))) || 0x8990D2993C0D7307LL)), 5)) | 0x2FL), g_124[0][1][4].f2)) & g_223))), 2)) || 1UL) && (-4L)), 0UL))), l_139[0].f0.f0));
            for (g_214 = 0; (g_214 >= 0); g_214 -= 1)
            { 
                int i;
                g_6 = ((g_220[g_214] != l_218) , (-1L));
                l_218 &= (l_33 &= (((((((safe_mul_func_int16_t_s_s((g_61 = (l_23.f0.f0 , (((l_228 = (((safe_rshift_func_int8_t_s_u((g_124[0][1][4].f1 | g_51), 6)) >= g_2) || g_220[g_214])) || 7L) && g_220[g_214]))), g_220[g_214])) < 0L) ^ l_25.f0.f2) > g_51) , g_220[g_214]) , g_220[0]) , g_2));
            }
        }
    }
    for (g_54 = 0; (g_54 >= 13); g_54 = safe_add_func_int32_t_s_s(g_54, 8))
    { 
        if (g_124[0][1][4].f0)
        { 
            uint64_t l_231 = 3UL;
            --l_231;
        }
        else
        { 
            for (g_38 = 0; (g_38 >= 11); ++g_38)
            { 
                int8_t l_241 = 0xEDL;
                g_2 |= (l_236 & (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_241, l_241)), g_6)));
            }
        }
        for (l_25.f0.f2 = 0; (l_25.f0.f2 <= 0); l_25.f0.f2 += 1)
        { 
            int i;
            g_62[2][3][3] = (l_25 , (safe_mul_func_uint8_t_u_u((g_220[0] = g_220[l_25.f0.f2]), (((safe_lshift_func_int8_t_s_u((g_214 = g_61), 5)) > 2L) , 0L))));
            if (l_246)
                continue;
            for (l_33 = (-26); (l_33 <= 23); l_33++)
            { 
                if (l_22.f0)
                    goto lbl_249;
                return g_215;
            }
        }
    }
    return g_124[0][1][4].f0;
}



static uint32_t  func_11(const uint8_t  p_12, const uint16_t  p_13)
{ 
    uint8_t l_93 = 255UL;
    int32_t l_121[3];
    int i;
    for (i = 0; i < 3; i++)
        l_121[i] = 0x6A6819D9L;
    for (g_38 = 4; (g_38 > 36); g_38++)
    { 
        int8_t l_55 = 0xE4L;
        int32_t l_56[1];
        int32_t l_63 = (-4L);
        uint8_t l_65[5][3][5] = {{{6UL,1UL,0x2EL,1UL,6UL},{0UL,0UL,0x17L,0xD6L,0x17L},{0UL,0UL,0x2EL,6UL,250UL}},{{0UL,0UL,0UL,0UL,0x17L},{1UL,6UL,0xF6L,0xF6L,6UL},{0x17L,0UL,0xD7L,0x27L,0x27L}},{{0xBDL,0UL,0xBDL,0xF6L,0x2EL},{0xD6L,0UL,0x27L,0UL,0xD6L},{0xBDL,1UL,0UL,6UL,0UL}},{{0x17L,0x17L,0x27L,0xD6L,8UL},{1UL,0xBDL,0xBDL,1UL,0UL},{0UL,0xD6L,0xD7L,0xD7L,0xD6L}},{{0UL,0xBDL,0xF6L,0x2EL,0x2EL},{0UL,0x17L,0UL,0xD7L,0x27L},{6UL,1UL,0x2EL,1UL,6UL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_56[i] = 8L;
        for (g_32 = 0; (g_32 >= 7); g_32++)
        { 
            int32_t l_57[4][5][1] = {{{0x49ED226FL},{7L},{0x49ED226FL},{(-6L)},{(-2L)}},{{1L},{(-1L)},{1L},{(-2L)},{(-6L)}},{{0x49ED226FL},{7L},{0x49ED226FL},{(-6L)},{(-2L)}},{{1L},{(-1L)},{1L},{(-2L)},{(-6L)}}};
            int i, j, k;
            if (((++g_51) | p_13))
            { 
                uint32_t l_66 = 1UL;
                l_66 ^= (g_54 = (l_65[1][2][0] ^= ((l_63 = (g_62[2][3][3] &= (g_61 = (g_58--)))) ^ (((g_64 = p_12) >= 0xD0E4L) == p_12))));
            }
            else
            { 
                int8_t l_81 = 0xFCL;
                const int32_t l_82 = 0x9747A004L;
                l_63 = (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_32, ((-2L) != (safe_mod_func_int64_t_s_s((0x050E7A76L != (safe_mul_func_int8_t_s_s(g_62[2][3][3], g_54))), g_6))))), l_81)), l_82)) , l_82) & p_13) | 6L), g_62[2][3][3])), l_65[0][0][3]));
            }
            for (l_55 = 16; (l_55 == (-4)); l_55--)
            { 
                return p_12;
            }
        }
    }
    for (g_58 = 0; (g_58 < 20); g_58++)
    { 
        int32_t l_102[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_102[i][j] = 5L;
        }
        if ((safe_mul_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((g_32 = p_12) , (g_61 = (safe_div_func_uint64_t_u_u((((l_93 = g_6) , g_64) , ((safe_sub_func_uint32_t_u_u(0x0A8E0669L, g_64)) && 0xCFL)), 18446744073709551615UL)))), p_13)) <= 0UL), g_6)))
        { 
            for (g_27 = 0; (g_27 > 22); g_27++)
            { 
                l_102[1][0] ^= (safe_div_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u(p_13, l_93)) & p_12) <= (-6L)) | l_93), 0xF20F69DBL));
            }
            for (g_38 = 0; (g_38 <= 0); g_38 += 1)
            { 
                g_62[2][3][3] ^= (-7L);
            }
            if (g_54)
                break;
        }
        else
        { 
            uint8_t l_107 = 246UL;
            int32_t l_120 = 0x04901E3FL;
            if (g_54)
                break;
            l_121[1] = (safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(g_58, (l_107 | l_107))), (l_120 = (safe_mul_func_int8_t_s_s((g_119 = ((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((g_62[2][1][2] |= (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(0xF988L)), g_51))), l_93)), g_54)), p_12)) , l_93)), p_13)))));
        }
        for (g_38 = 0; (g_38 > 45); g_38 = safe_add_func_uint8_t_u_u(g_38, 3))
        { 
            l_121[1] = g_58;
            if (p_12)
                continue;
        }
    }
    return g_32;
}



static uint16_t  func_14(uint32_t  p_15)
{ 
    int32_t l_36 = 0x08880D0EL;
    int32_t l_37 = 1L;
    const struct S2 l_46 = {246UL,{0L,1L,18446744073709551612UL},9L};
    l_37 = (65534UL & (safe_add_func_uint16_t_u_u(((g_38--) > 0x70L), (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(((l_36 = p_15) , ((safe_lshift_func_int16_t_s_s((((l_46 , 0UL) == l_46.f1.f0) <= g_32), 9)) & p_15)))), g_2)))));
    return g_32;
}



static int16_t  func_17(const union U4  p_18, uint64_t  p_19, int32_t  p_20, union U5  p_21)
{ 
    uint16_t l_26[1];
    int32_t l_28 = 0xF9C32812L;
    uint64_t l_29[2];
    int i;
    for (i = 0; i < 1; i++)
        l_26[i] = 65535UL;
    for (i = 0; i < 2; i++)
        l_29[i] = 0x101AEDF47F28A996LL;
    for (p_19 = 0; (p_19 <= 0); p_19 += 1)
    { 
        --l_29[1];
    }
    return l_26[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_62[i][j][k], "g_62[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_124[i][j][k].f0, "g_124[i][j][k].f0", print_hash_value);
                transparent_crc(g_124[i][j][k].f1, "g_124[i][j][k].f1", print_hash_value);
                transparent_crc(g_124[i][j][k].f2, "g_124[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_220[i], "g_220[i]", print_hash_value);

    }
    transparent_crc(g_223, "g_223", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
