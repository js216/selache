// SPDX-License-Identifier: MIT
// cctest_csmith_12fd3568.c --- cctest case csmith_12fd3568 (csmith seed 318584168)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9161fbe9 */
/* @exp_ticks 0x624 */

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

// Options:   -s 318584168 -o /home/agent1/fast_data/tmp/csmith_gen_97wcz2d8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint64_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
};
#pragma pack(pop)

struct S3 {
   uint16_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   const uint16_t  f0;
   uint16_t  f1;
   const struct S3  f2;
   struct S0  f3;
   uint32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S5 {
   uint64_t  f0;
   const struct S4  f1;
   const struct S2  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S6 {
   struct S3  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S7 {
   int8_t  f0;
   struct S6  f1;
   const int8_t  f2;
   int16_t  f3;
   uint8_t  f4;
};
#pragma pack(pop)

struct S8 {
   int16_t  f0;
   const int64_t  f1;
   struct S4  f2;
   const uint32_t  f3;
   int64_t  f4;
   struct S2  f5;
};

union U9 {
   const int32_t  f0;
   int8_t  f1;
};


static uint64_t g_2 = 1UL;
static const struct S4 g_11 = {0x3989L,0UL,{65535UL},{0x5537C57F39CEE24BLL},0xE809B4AFL};
static uint64_t g_18 = 0x17B38E5161E33ECDLL;
static union U9 g_21 = {5L};
static struct S6 g_30 = {{65535UL}};
static struct S6 g_31[1][2] = {{{{8UL}},{{8UL}}}};
static int16_t g_41 = (-6L);
static int16_t g_42 = 0xFCEEL;
static uint16_t g_43[5][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
static uint8_t g_46 = 1UL;
static int32_t g_66 = (-2L);
static int32_t g_69 = 0xDC5A24BAL;
static struct S7 g_92 = {0L,{{1UL}},1L,-2L,1UL};
static struct S0 g_98 = {0x337CDB5522D6D4F0LL};
static uint32_t g_118 = 5UL;
static int8_t g_122 = 0x3FL;
static int8_t g_124 = 1L;
static uint16_t g_125[1] = {1UL};
static struct S5 g_128 = {18446744073709551615UL,{7UL,0xDA50L,{0x00D5L},{0xF51D59E5908BEF20LL},0x78A6B184L},{2UL}};



static struct S5  func_1(void);
static uint64_t  func_9(const struct S4  p_10);
static uint32_t  func_12(uint8_t  p_13, union U9  p_14, const struct S2  p_15, int32_t  p_16, struct S0  p_17);
static uint16_t  func_23(struct S1  p_24, struct S2  p_25, int64_t  p_26);




static struct S5  func_1(void)
{ 
    uint32_t l_101 = 0xBD33CEA4L;
    int32_t l_120[1];
    int32_t l_123 = 0x2FF17D06L;
    int i;
    for (i = 0; i < 1; i++)
        l_120[i] = 0xABB79EB0L;
    --g_2;
    if ((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((g_2 && (func_9(g_11) <= ((g_92.f3 > 0x9B0AL) <= g_11.f2.f0))), l_101)), g_11.f0)))
    { 
        uint32_t l_117[1];
        int8_t l_119 = 0x9CL;
        int i;
        for (i = 0; i < 1; i++)
            l_117[i] = 0x1B7A5A4EL;
        l_120[0] &= (+((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((0xA80D186C8CC70086LL > (safe_div_func_int16_t_s_s((0x3B8602F1L || (((safe_mod_func_int32_t_s_s(((((safe_mul_func_int8_t_s_s((((safe_add_func_int32_t_s_s(l_101, (g_21 , g_30.f0.f0))) || l_101) || l_117[0]), g_118)) && 0x45A3L) , l_117[0]) == g_43[1][0]), l_119)) ^ 8UL) != g_30.f0.f0)), 0xC0CBL))), 0)), l_101)), l_119)) > l_117[0]));
    }
    else
    { 
        uint8_t l_121 = 0x1FL;
        l_121 ^= g_42;
    }
    --g_125[0];
    return g_128;
}



static uint64_t  func_9(const struct S4  p_10)
{ 
    const struct S2 l_22 = {4294967289UL};
    struct S4 l_28 = {3UL,0UL,{65535UL},{1L},0xBA52B339L};
    struct S1 l_29[5][4][4] = {{{{1UL},{0xC2923F8C0E5C5CC9LL},{0x47B1D005767A065BLL},{1UL}},{{0xC2923F8C0E5C5CC9LL},{0xE89C674F9898791BLL},{0xE89C674F9898791BLL},{0xC2923F8C0E5C5CC9LL}},{{0x7ACAEC2B2A8F302DLL},{1UL},{0xE89C674F9898791BLL},{18446744073709551609UL}},{{0xC2923F8C0E5C5CC9LL},{1UL},{0x47B1D005767A065BLL},{1UL}}},{{{1UL},{0xE89C674F9898791BLL},{0x7ACAEC2B2A8F302DLL},{1UL}},{{0x7ACAEC2B2A8F302DLL},{1UL},{18446744073709551609UL},{18446744073709551609UL}},{{1UL},{1UL},{0x47B1D005767A065BLL},{0xC2923F8C0E5C5CC9LL}},{{1UL},{0xE89C674F9898791BLL},{18446744073709551609UL},{1UL}}},{{{0x7ACAEC2B2A8F302DLL},{0xE89C674F9898791BLL},{0x42039CE85662B132LL},{0xF554C62B41911659LL}},{{18446744073709551609UL},{0xE89C674F9898791BLL},{1UL},{0x7ACAEC2B2A8F302DLL}},{{0xE89C674F9898791BLL},{0x47B1D005767A065BLL},{0x47B1D005767A065BLL},{0xE89C674F9898791BLL}},{{0x42039CE85662B132LL},{0x7ACAEC2B2A8F302DLL},{0x47B1D005767A065BLL},{0xF554C62B41911659LL}}},{{{0xE89C674F9898791BLL},{18446744073709551609UL},{1UL},{18446744073709551609UL}},{{18446744073709551609UL},{0x47B1D005767A065BLL},{0x42039CE85662B132LL},{18446744073709551609UL}},{{0x42039CE85662B132LL},{18446744073709551609UL},{0xF554C62B41911659LL},{0xF554C62B41911659LL}},{{0x7ACAEC2B2A8F302DLL},{0x7ACAEC2B2A8F302DLL},{1UL},{0xE89C674F9898791BLL}}},{{{0x7ACAEC2B2A8F302DLL},{0x47B1D005767A065BLL},{0xF554C62B41911659LL},{0x7ACAEC2B2A8F302DLL}},{{0x42039CE85662B132LL},{0xE89C674F9898791BLL},{0x42039CE85662B132LL},{0xF554C62B41911659LL}},{{18446744073709551609UL},{0xE89C674F9898791BLL},{1UL},{0x7ACAEC2B2A8F302DLL}},{{0xE89C674F9898791BLL},{0x47B1D005767A065BLL},{0x47B1D005767A065BLL},{0xE89C674F9898791BLL}}}};
    int32_t l_100 = 0x8F49FF72L;
    int i, j, k;
    l_100 = (func_12((g_18++), g_21, l_22, ((func_23(((((safe_unary_minus_func_int8_t_s((((l_28 , p_10.f1) < 18446744073709551615UL) | p_10.f0))) & 1L) && l_28.f0) , l_29[1][1][0]), l_22, g_11.f4) || 0x7FD7L) != 255UL), g_11.f3) >= g_21.f0);
    for (l_28.f3.f0 = 1; (l_28.f3.f0 >= 0); l_28.f3.f0 -= 1)
    { 
        return g_46;
    }
    return l_28.f2.f0;
}



static uint32_t  func_12(uint8_t  p_13, union U9  p_14, const struct S2  p_15, int32_t  p_16, struct S0  p_17)
{ 
    struct S8 l_51[1][1] = {{{0x8A60L,6L,{1UL,0xD2A1L,{65526UL},{0x7774CA6A66835AC2LL},4294967294UL},1UL,0L,{0xA1986173L}}}};
    uint32_t l_61 = 4294967294UL;
    int64_t l_64 = 7L;
    int32_t l_70 = 0x667C2D95L;
    int8_t l_99[3][4] = {{0L,0L,0x14L,0L},{0L,5L,5L,0L},{5L,0L,5L,5L}};
    int i, j;
    if ((safe_mod_func_uint64_t_u_u(((l_51[0][0] , ((safe_mul_func_int8_t_s_s((g_41 , (safe_mul_func_uint16_t_u_u(g_11.f2.f0, (((((~((((safe_add_func_uint32_t_u_u((0xFE816D3FBECF3046LL <= g_31[0][0].f0.f0), 0xFE548C15L)) && 1L) | l_61) | 0UL)) <= l_51[0][0].f4) ^ p_17.f0) & l_51[0][0].f2.f2.f0) < (-9L))))), g_46)) , g_11.f3.f0)) ^ 1UL), p_14.f1)))
    { 
        int8_t l_63 = 3L;
        int32_t l_84 = 0xF153C6A9L;
        int32_t l_85 = 0x468E88EEL;
        for (l_61 = 0; (l_61 <= 1); l_61 += 1)
        { 
            uint8_t l_62 = 4UL;
            int32_t l_65 = 0x89FA4E93L;
            uint8_t l_83 = 0xD2L;
            p_16 = (p_16 | (l_62 != (g_66 = (l_65 |= (l_64 &= l_63)))));
            if (p_13)
                continue;
            g_69 = ((((safe_add_func_uint16_t_u_u(g_42, (p_17.f0 > (253UL <= (l_63 <= g_31[0][0].f0.f0))))) < g_66) != (-3L)) != g_46);
            for (p_13 = 0; (p_13 <= 0); p_13 += 1)
            { 
                int i, j;
                l_70 = g_43[(p_13 + 4)][(p_13 + 1)];
                p_16 = 0x00EB00D6L;
                l_85 = (l_84 = (safe_div_func_int16_t_s_s(g_11.f2.f0, (safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((g_43[(p_13 + 4)][(p_13 + 1)] && ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((6L && (safe_sub_func_int16_t_s_s((((l_65 != g_43[(p_13 + 4)][(p_13 + 1)]) > 0x2D3D223BFC9F35A7LL) && p_15.f0), g_43[(p_13 + 4)][(p_13 + 1)]))), l_63)) && 0xD51AL), l_83)) == l_63)), g_2)), 0x121EC5D866FAEDDALL)))));
            }
        }
    }
    else
    { 
        uint32_t l_96 = 0UL;
        struct S0 l_97 = {1L};
        for (p_13 = 0; (p_13 <= 0); p_13 += 1)
        { 
            int32_t l_95 = (-1L);
            p_16 |= ((safe_sub_func_uint64_t_u_u(((safe_div_func_uint16_t_u_u(g_43[3][0], (safe_lshift_func_int16_t_s_s((g_42 ^= (g_92 , (safe_mod_func_uint8_t_u_u(((g_69 > ((l_95 || g_66) <= 4UL)) & l_96), l_95)))), g_31[0][0].f0.f0)))) <= 1UL), p_15.f0)) ^ l_96);
            for (g_92.f0 = 0; (g_92.f0 <= 0); g_92.f0 += 1)
            { 
                l_97 = p_17;
                g_98 = l_51[0][0].f2.f3;
            }
        }
    }
    return l_99[2][3];
}



static uint16_t  func_23(struct S1  p_24, struct S2  p_25, int64_t  p_26)
{ 
    struct S6 l_32 = {{0x627FL}};
    int32_t l_33 = 7L;
    int32_t l_34 = 0x345D1904L;
    int32_t l_35 = 1L;
    int32_t l_36 = 0L;
    int32_t l_37 = 0x36DE1F29L;
    int32_t l_38 = 0xFB0C4F31L;
    int32_t l_39 = (-9L);
    int32_t l_40 = 0xCFD24BD9L;
    l_32 = (g_31[0][0] = (g_30 = g_30));
    g_43[1][1]++;
    g_46--;
    return g_46;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2.f0, "g_11.f2.f0", print_hash_value);
    transparent_crc(g_11.f3.f0, "g_11.f3.f0", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_30.f0.f0, "g_30.f0.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_31[i][j].f0.f0, "g_31[i][j].f0.f0", print_hash_value);

        }
    }
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_43[i][j], "g_43[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1.f0.f0, "g_92.f1.f0.f0", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_92.f3, "g_92.f3", print_hash_value);
    transparent_crc(g_92.f4, "g_92.f4", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_125[i], "g_125[i]", print_hash_value);

    }
    transparent_crc(g_128.f0, "g_128.f0", print_hash_value);
    transparent_crc(g_128.f1.f0, "g_128.f1.f0", print_hash_value);
    transparent_crc(g_128.f1.f1, "g_128.f1.f1", print_hash_value);
    transparent_crc(g_128.f1.f2.f0, "g_128.f1.f2.f0", print_hash_value);
    transparent_crc(g_128.f1.f3.f0, "g_128.f1.f3.f0", print_hash_value);
    transparent_crc(g_128.f1.f4, "g_128.f1.f4", print_hash_value);
    transparent_crc(g_128.f2.f0, "g_128.f2.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
