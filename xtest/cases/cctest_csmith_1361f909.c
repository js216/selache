// SPDX-License-Identifier: MIT
// cctest_csmith_1361f909.c --- cctest case csmith_1361f909 (csmith seed 325187849)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd0b39f49 */
/* @exp_ticks 0xc2c */

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

// Options:   -s 325187849 -o /home/agent1/fast_data/tmp/csmith_gen_fxaauiex/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int8_t  f0;
   uint64_t  f1;
};

union U1 {
   uint32_t  f0;
};


static uint64_t g_7[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static uint16_t g_9[2] = {0xC299L,0xC299L};
static uint16_t g_31[1] = {0xA81DL};
static union U1 g_34 = {4294967295UL};
static int32_t g_58 = 0x0146BFE2L;
static int32_t g_60 = 6L;
static uint64_t g_74 = 1UL;
static int32_t g_76 = 0xB3C83373L;
static int64_t g_91 = 0x825FA2FCAAFA3536LL;
static uint64_t g_94[5][2][3] = {{{0xC5DFBC4EB09A55A0LL,9UL,9UL},{0x4FDBC366FF5FBB4CLL,9UL,0x794A777CC8DDEC24LL}},{{0x879AF5B30FD8B1EBLL,9UL,5UL},{0xC5DFBC4EB09A55A0LL,9UL,9UL}},{{0x4FDBC366FF5FBB4CLL,9UL,0x794A777CC8DDEC24LL},{0x879AF5B30FD8B1EBLL,9UL,5UL}},{{0xC5DFBC4EB09A55A0LL,9UL,9UL},{0x4FDBC366FF5FBB4CLL,9UL,0x794A777CC8DDEC24LL}},{{0x879AF5B30FD8B1EBLL,9UL,5UL},{0xC5DFBC4EB09A55A0LL,9UL,9UL}}};
static uint8_t g_106 = 0x41L;
static union U1 g_114[2][1][4] = {{{{0xE4E2A804L},{0xE4E2A804L},{0xE4E2A804L},{0xE4E2A804L}}},{{{0xE4E2A804L},{0xE4E2A804L},{0xE4E2A804L},{0xE4E2A804L}}}};
static int8_t g_115[3][1][4] = {{{0L,0L,0xD3L,0L}},{{0L,0x41L,0x41L,0L}},{{0x41L,0L,0x41L,0x41L}}};
static uint8_t g_116 = 255UL;
static int8_t g_146 = 0x0CL;
static int8_t g_186 = 0x1DL;
static struct S0 g_194 = {0x36L,0xB2AF547D1AE75489LL};
static uint8_t g_197 = 249UL;



static uint64_t  func_1(void);
static struct S0  func_14(uint64_t  p_15, int8_t  p_16, int32_t  p_17, int16_t  p_18);
static int16_t  func_21(uint16_t  p_22, union U1  p_23, int32_t  p_24, int16_t  p_25);
static uint16_t  func_26(union U1  p_27);




static uint64_t  func_1(void)
{ 
    uint32_t l_2 = 0x36951AD3L;
    union U1 l_28 = {0x372585FAL};
    int32_t l_147 = 0x8684FA51L;
    int32_t l_148 = 3L;
    int32_t l_149 = (-5L);
    uint64_t l_156 = 0xB517F45F4F03D5EBLL;
    uint8_t l_185 = 0xA0L;
    if (l_2)
    { 
        uint16_t l_8[5] = {0xDACDL,0xDACDL,0xDACDL,0xDACDL,0xDACDL};
        int i;
        g_9[1] = ((0x0F47A6DEEC541651LL <= (safe_rshift_func_uint8_t_u_s(((((safe_mod_func_uint8_t_u_u((l_2 || (g_7[4] > ((l_2 & l_2) != 0x61ECE305L))), g_7[4])) , l_8[3]) , l_2) , l_8[3]), l_8[3]))) && g_7[4]);
    }
    else
    { 
        int32_t l_104 = 1L;
        union U1 l_113 = {0UL};
        for (l_2 = 0; (l_2 == 32); l_2++)
        { 
            int32_t l_35 = 0L;
            int64_t l_103 = (-6L);
            int32_t l_107 = (-1L);
            l_103 = (safe_mod_func_uint64_t_u_u(0x29C4DDB84C6A37D7LL, (func_14((safe_add_func_int8_t_s_s(0x43L, (func_21(func_26(l_28), g_34, g_9[0], l_35) >= l_35))), g_9[1], g_7[3], g_7[4]) , l_35)));
            if ((0x1138347EL || l_104))
            { 
                uint16_t l_105 = 0x6A83L;
                l_105 = ((g_31[0] <= ((g_74 & l_35) >= (l_103 ^ 1L))) ^ l_2);
            }
            else
            { 
                g_115[2][0][3] = ((l_107 = (g_106 = g_94[2][1][1])) || ((safe_add_func_int8_t_s_s((~l_104), (safe_mul_func_int16_t_s_s(((g_114[1][0][0] = (g_34 = l_113)) , (g_94[1][1][0] == l_2)), 0x3249L)))) > g_76));
            }
        }
    }
    for (g_106 = 0; (g_106 <= 0); g_106 += 1)
    { 
        uint8_t l_145[4] = {1UL,1UL,1UL,1UL};
        uint32_t l_150 = 0x1990186BL;
        int32_t l_155 = 8L;
        int i;
        g_116++;
        l_150 |= (l_149 = ((l_2 | (l_148 = (g_91 != ((safe_rshift_func_int16_t_s_u((((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((l_147 ^= (safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(0L, (safe_lshift_func_uint16_t_u_s((g_31[0] = ((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_146 ^= ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(g_106, l_145[0])), 11)) | 0xBC2055579FD63578LL)), 0xAAA59CCCL)), 0x204CL)), l_28.f0)) <= l_2) != l_145[2]), g_9[1])) | g_7[3])), 9)))), l_145[0]))), l_145[0])), 3)), 0xCC6EL)) || g_106) || l_2), g_94[1][1][0])) | 1UL)))) >= l_145[3]));
        for (g_34.f0 = 0; (g_34.f0 <= 0); g_34.f0 += 1)
        { 
            uint16_t l_151 = 0x7226L;
            int32_t l_152 = 0xC949183CL;
            uint8_t l_153 = 0x39L;
            int32_t l_154 = 0x4CD87840L;
            l_152 = l_151;
            for (l_2 = 0; (l_2 <= 0); l_2 += 1)
            { 
                if (l_153)
                    break;
                --l_156;
            }
        }
        for (g_74 = 0; (g_74 <= 0); g_74 += 1)
        { 
            int8_t l_182 = 7L;
            int32_t l_187 = (-1L);
            l_187 = (g_186 = (safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((((g_116 = (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((((safe_unary_minus_func_uint8_t_u(((safe_mul_func_int16_t_s_s(g_94[3][1][0], 65529UL)) < (((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((l_182 <= (((safe_add_func_int16_t_s_s((g_31[0] >= 1L), 0xD3E5L)) <= l_182) == l_145[0])), g_76)) > 4L) == 0UL), g_9[1])) && l_185), l_185)), g_94[0][0][2])) > g_34.f0) , g_60)))) >= 1L) ^ 0L) , l_148), 0xAEL)) || 1L), l_149)), l_2))) != 1L) , 255UL), 6)), g_7[4])));
            for (l_147 = 0; (l_147 >= 0); l_147 -= 1)
            { 
                uint64_t l_198 = 0x062DC60C70B84589LL;
                l_198 = (g_197 |= (safe_div_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s(((l_187 | (g_194 , g_115[0][0][0])) < (safe_sub_func_int16_t_s_s(g_194.f0, g_31[0]))), 12)) & g_34.f0) < 65535UL), g_114[1][0][0].f0)) && 4L) >= 4294967294UL), g_60)));
                return l_198;
            }
        }
    }
    return g_114[1][0][0].f0;
}



static struct S0  func_14(uint64_t  p_15, int8_t  p_16, int32_t  p_17, int16_t  p_18)
{ 
    uint32_t l_57 = 4294967295UL;
    const struct S0 l_69 = {5L,18446744073709551615UL};
    int8_t l_75 = 0x5AL;
    int32_t l_85 = 2L;
    int64_t l_90 = (-5L);
    for (p_15 = (-21); (p_15 != 19); ++p_15)
    { 
        struct S0 l_56 = {0xFBL,18446744073709551615UL};
        int32_t l_59 = 0x56A74AB7L;
        l_59 &= (((safe_mul_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(g_9[1], (safe_unary_minus_func_int8_t_s((((safe_add_func_uint32_t_u_u((((((g_58 ^= (safe_add_func_uint32_t_u_u(((l_56 , l_56.f1) && 0x8CL), l_57))) != p_17) < 0xA74B4FBF646D9140LL) ^ g_7[4]) | 0x98A1L), 0x6575E0ADL)) & p_16) , g_7[2]))))) , g_58), 0)) != p_18) , 1UL) != g_9[1]) && g_34.f0), p_18)) , p_17) <= p_16);
        g_60 = g_31[0];
    }
    for (p_16 = (-29); (p_16 >= 5); p_16++)
    { 
        union U1 l_63 = {0xC5D19E77L};
        int32_t l_66 = 0x5D31C11DL;
        uint32_t l_81 = 1UL;
        if (g_58)
            break;
        g_76 = ((l_63 , (safe_lshift_func_int8_t_s_u((l_66 = g_31[0]), 3))) & (safe_rshift_func_int16_t_s_s(((l_69 , (g_74 |= (((((((safe_lshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s((g_34.f0 | 0L), 0x5DB4L)) && l_69.f1) , g_60), 9)) || g_60) || l_63.f0) >= g_9[1]) != l_69.f0) == g_31[0]) != l_69.f1))) == g_9[1]), l_75)));
        if ((((((safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_u((((l_69.f1 >= (l_81 > (0x4C1CE2A3F7B2C839LL <= (safe_sub_func_int32_t_s_s((!9L), p_16))))) , l_66) > g_9[1]), 13)) , 0UL) || l_81) <= 3L), p_17)) , 65535UL) & g_58) && g_9[1]) > 0x7F729B20146E0633LL))
        { 
            l_85 ^= l_66;
        }
        else
        { 
            int16_t l_99 = 0x335DL;
            for (g_58 = 15; (g_58 > (-27)); --g_58)
            { 
                g_91 = ((g_9[1] ^ (1L || (safe_lshift_func_uint8_t_u_s((l_66 |= l_90), (p_18 | 65535UL))))) ^ 5UL);
            }
            if ((l_85 = (-1L)))
            { 
                return l_69;
            }
            else
            { 
                l_85 |= p_18;
            }
            for (g_91 = 0; (g_91 >= (-26)); g_91 = safe_sub_func_int32_t_s_s(g_91, 3))
            { 
                uint16_t l_100 = 0xF23DL;
                g_94[0][0][2] = g_76;
                l_99 = (safe_lshift_func_uint8_t_u_u((p_15 , ((safe_rshift_func_uint8_t_u_s((((0x82L && 0x56L) ^ (l_63 , p_17)) < p_18), p_16)) , 7UL)), g_60));
                ++l_100;
            }
        }
    }
    return l_69;
}



static int16_t  func_21(uint16_t  p_22, union U1  p_23, int32_t  p_24, int16_t  p_25)
{ 
    uint16_t l_42 = 0xFEF4L;
    for (p_25 = (-13); (p_25 == (-15)); p_25 = safe_sub_func_uint16_t_u_u(p_25, 6))
    { 
        for (p_24 = 0; (p_24 > 6); p_24 = safe_add_func_uint16_t_u_u(p_24, 1))
        { 
            for (g_34.f0 = (-17); (g_34.f0 <= 49); g_34.f0++)
            { 
                l_42 = p_24;
            }
        }
        for (g_34.f0 = 0; (g_34.f0 <= 1); g_34.f0 += 1)
        { 
            for (p_23.f0 = 0; (p_23.f0 <= 4); p_23.f0 += 1)
            { 
                return p_25;
            }
        }
    }
    return p_25;
}



static uint16_t  func_26(union U1  p_27)
{ 
    int8_t l_29[3];
    int32_t l_30[3][2];
    int i, j;
    for (i = 0; i < 3; i++)
        l_29[i] = 0x18L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_30[i][j] = (-8L);
    }
    l_30[2][1] = l_29[2];
    ++g_31[0];
    return l_30[2][1];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_31[i], "g_31[i]", print_hash_value);

    }
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_94[i][j][k], "g_94[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_114[i][j][k].f0, "g_114[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_115[i][j][k], "g_115[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_194.f0, "g_194.f0", print_hash_value);
    transparent_crc(g_194.f1, "g_194.f1", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
