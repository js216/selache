// SPDX-License-Identifier: MIT
// cctest_csmith_b6c3f581.c --- cctest case csmith_b6c3f581 (csmith seed 3066295681)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x341658bb */
/* @exp_ticks 0xea7f */

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

// Options:   -s 3066295681 -o /home/agent1/fast_data/tmp/csmith_gen__jl5mwav/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   const uint64_t  f1;
};

union U2 {
   int32_t  f0;
   uint64_t  f1;
};


static int32_t g_2 = 0xD69F4288L;
static struct S0 g_26 = {1L,18446744073709551615UL};
static int32_t g_32 = 1L;
static uint32_t g_53[5][2][5] = {{{0xD8D4885CL,4294967295UL,0xFD78DB58L,0xFD78DB58L,4294967295UL},{0xD79C1F62L,0x1EC3D250L,4294967287UL,0xC6914F09L,0UL}},{{0xD8D4885CL,4294967295UL,0xFD78DB58L,0xFD78DB58L,4294967295UL},{0xD79C1F62L,0x1EC3D250L,4294967287UL,0xC6914F09L,0UL}},{{0xD8D4885CL,4294967295UL,0xFD78DB58L,0xFD78DB58L,4294967295UL},{0xD79C1F62L,0x1EC3D250L,4294967287UL,0xC6914F09L,0UL}},{{0xD8D4885CL,4294967295UL,0xFD78DB58L,0xFD78DB58L,4294967295UL},{0xD79C1F62L,0x1EC3D250L,4294967287UL,0xC6914F09L,0UL}},{{0xD8D4885CL,4294967295UL,0xFD78DB58L,0xFD78DB58L,4294967295UL},{0xD79C1F62L,5UL,0UL,0x1EC3D250L,0UL}}};
static int32_t g_66 = 0L;
static uint32_t g_67 = 0x7B9F0972L;
static union U2 g_70 = {0L};
static int32_t g_81 = 0x38A8812EL;
static uint64_t g_88 = 18446744073709551607UL;
static uint32_t g_113 = 0xFFD86C08L;
static int8_t g_120 = 0x0FL;
static int32_t g_122 = 6L;
static uint32_t g_124[4] = {0UL,0UL,0UL,0UL};
static int8_t g_133 = 0x26L;
static int32_t g_139 = 0xA3C86066L;
static int64_t g_140 = (-1L);
static int64_t g_142 = 1L;
static int32_t g_143 = 2L;
static int16_t g_144[1][4] = {{0x5542L,0x5542L,0x5542L,0x5542L}};
static uint8_t g_145[3] = {0UL,0UL,0UL};
static int32_t g_191 = 5L;
static uint16_t g_192[2] = {0xC613L,0xC613L};



static int32_t  func_1(void);
static int16_t  func_12(const uint8_t  p_13, const uint8_t  p_14);
static int64_t  func_15(uint64_t  p_16, uint32_t  p_17, uint32_t  p_18, union U2  p_19, uint8_t  p_20);
static uint32_t  func_21(uint16_t  p_22, int16_t  p_23, struct S0  p_24);




static int32_t  func_1(void)
{ 
    uint16_t l_25[1];
    uint32_t l_34[2][5][5] = {{{0x8592840CL,0x2404E547L,0x2404E547L,0x8592840CL,4294967295UL},{4294967295UL,4294967291UL,0xADF851F0L,0xADF851F0L,4294967291UL},{4294967295UL,0x2404E547L,0xEE83ADEBL,4294967294UL,4294967294UL},{0xAB0C3E5FL,0x3B017290L,0xAB0C3E5FL,0xADF851F0L,4294967289UL},{4294967295UL,0x8592840CL,4294967294UL,0x8592840CL,4294967295UL}},{{0xAB0C3E5FL,4294967295UL,0x3B017290L,4294967291UL,0x3B017290L},{4294967295UL,4294967295UL,4294967294UL,4294967295UL,0xE3AA9C1CL},{4294967295UL,0xAB0C3E5FL,0xAB0C3E5FL,4294967295UL,0x3B017290L},{0x8592840CL,4294967295UL,0xEE83ADEBL,0xEE83ADEBL,4294967295UL},{0x3B017290L,0xAB0C3E5FL,0xADF851F0L,4294967289UL,4294967289UL}}};
    int32_t l_153 = 0x0A1F665FL;
    int32_t l_164 = 0x8440B9AAL;
    uint16_t l_168 = 0x4DF5L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_25[i] = 1UL;
lbl_170:
    for (g_2 = 0; (g_2 >= (-29)); --g_2)
    { 
        int32_t l_9 = (-4L);
        union U2 l_35 = {0x236511F0L};
        int32_t l_152 = 0xD3B01B0BL;
        l_153 = (safe_mul_func_int16_t_s_s((l_152 = (safe_lshift_func_uint8_t_u_u(l_9, (((safe_div_func_uint16_t_u_u(0xE9FBL, func_12(((func_15(l_9, func_21((((g_2 != g_2) & l_9) , l_25[0]), g_2, g_26), l_34[1][0][2], l_35, g_26.f1) | l_34[1][3][4]) <= g_53[1][0][4]), g_26.f1))) != l_34[1][0][2]) ^ (-1L))))), g_53[4][0][3]));
    }
    if ((safe_add_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u(l_34[0][2][1], 0UL)) > (((g_26.f0 != (safe_add_func_int16_t_s_s((g_144[0][1] = g_81), 0x3130L))) >= g_142) , 1UL)) != 0xC2C3L) , g_122), 0xFAL)), l_153)) && l_25[0]) | g_67) <= 0x3DA37F1ACA1152ABLL), 4294967291UL)))
    { 
        uint16_t l_165 = 0UL;
        int32_t l_169 = 0x5DE67BC5L;
        --l_165;
        l_169 = l_168;
        if (g_66)
            goto lbl_170;
    }
    else
    { 
        uint32_t l_174 = 0x410FA4C8L;
        int32_t l_184[4];
        int32_t l_218 = 0xC2736A97L;
        int i;
        for (i = 0; i < 4; i++)
            l_184[i] = 7L;
        for (g_133 = 1; (g_133 >= 0); g_133 -= 1)
        { 
            for (g_122 = 1; (g_122 >= 0); g_122 -= 1)
            { 
                uint8_t l_171 = 0UL;
                g_66 = (g_81 > l_171);
            }
            for (g_88 = 0; (g_88 <= 1); g_88 += 1)
            { 
                g_81 = (safe_rshift_func_int16_t_s_s(g_88, 12));
            }
            for (g_32 = 0; (g_32 <= 1); g_32 += 1)
            { 
                l_174--;
            }
            for (l_164 = 0; (l_164 <= 1); l_164 += 1)
            { 
                uint32_t l_178 = 0x2D702229L;
                g_143 |= (+l_178);
            }
        }
        for (g_133 = (-9); (g_133 > (-4)); g_133 = safe_add_func_uint32_t_u_u(g_133, 1))
        { 
            uint64_t l_183 = 0x0E967E889C1318B2LL;
            int32_t l_185 = 2L;
            l_185 = (((g_133 < ((((l_184[0] = (safe_add_func_uint8_t_u_u(((l_183 && (((((l_183 <= l_34[0][0][4]) || 0xFEL) <= g_124[1]) && g_144[0][0]) , 0xD7FEL)) != 18446744073709551615UL), 0x70L))) || g_53[2][0][3]) && l_184[1]) && l_34[0][3][3])) & l_34[0][4][4]) >= l_34[1][4][2]);
        }
        g_81 = (g_140 >= (((safe_unary_minus_func_int16_t_s(((((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((--g_192[1]), (((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((((safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((g_124[3] || 0xB0BF173BL), (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_div_func_int64_t_s_s((((safe_mul_func_uint8_t_u_u(((((!(((l_174 == 1UL) < g_113) <= l_184[0])) > l_218) >= l_218) , g_2), l_34[1][0][2])) < 0x4DA7C746F6621438LL) && g_145[2]), g_143)) >= l_184[0]) <= l_25[0]), 7)), g_144[0][1])), 14)))) | 0x3FL), 6)), g_144[0][3])), 2L)) != 0x3B6B2B96L) && l_184[0]) , g_124[0]) != l_164), l_174)), 0x8BF424DCL)) , g_144[0][0]) & l_164))) & g_122), 9UL)) , g_32) ^ g_67) , l_164))) == l_184[2]) ^ l_174));
    }
    l_153 &= 0x491631D6L;
    return l_25[0];
}



static int16_t  func_12(const uint8_t  p_13, const uint8_t  p_14)
{ 
    union U2 l_71[2][4] = {{{0L},{0xB632CC17L},{0L},{0xB632CC17L}},{{0L},{0xB632CC17L},{0L},{0xB632CC17L}}};
    int32_t l_82 = 2L;
    uint64_t l_110 = 0x2F2EE52103225053LL;
    int32_t l_119 = 0x40942222L;
    int32_t l_123 = (-4L);
    int32_t l_131 = 0x1B5CBCDFL;
    int32_t l_132 = (-1L);
    int32_t l_134[2];
    int32_t l_141 = 0x7B79642AL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_134[i] = 0xA5162B35L;
    if ((((l_71[1][1] = g_70) , (safe_lshift_func_uint16_t_u_u((+(-10L)), 13))) && (((safe_mod_func_uint64_t_u_u(((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((g_81 &= l_71[1][1].f0) > ((((g_26.f1 == l_71[1][1].f0) , g_70.f0) != 4294967295UL) ^ 4L)) , p_13), g_53[1][0][4])), 0x1FL)) < 4L) > p_14) != g_26.f0), l_71[1][1].f0)) | g_53[1][0][4]) ^ g_26.f1)))
    { 
        int8_t l_83 = 0x08L;
        int32_t l_84 = (-2L);
        int32_t l_85 = (-10L);
        int32_t l_86 = 0x33388499L;
        int32_t l_87 = 0xB947DA7DL;
        l_82 &= 0xEDDC8DEEL;
        g_88++;
    }
    else
    { 
        uint32_t l_95 = 1UL;
        int16_t l_101 = 0x86AFL;
        int32_t l_107 = 0x822D7171L;
        int32_t l_116 = 1L;
        for (l_82 = (-4); (l_82 > 17); ++l_82)
        { 
            uint32_t l_104 = 0x4FB637DDL;
            for (g_88 = (-8); (g_88 != 32); g_88 = safe_add_func_int64_t_s_s(g_88, 8))
            { 
                --l_95;
            }
            l_104 |= (safe_lshift_func_uint16_t_u_u(((p_13 < ((+g_32) , (((l_101 != (safe_div_func_int32_t_s_s(g_81, 4294967294UL))) && g_66) | p_14))) || p_13), l_101));
        }
        for (g_70.f1 = 0; (g_70.f1 <= 1); g_70.f1 += 1)
        { 
            return p_13;
        }
        if (p_13)
        { 
            for (g_70.f0 = 0; (g_70.f0 <= 1); g_70.f0 += 1)
            { 
                l_107 = (((safe_div_func_int64_t_s_s(((l_71[0][0] , g_53[1][0][4]) <= 0x40C2L), g_2)) < g_32) != p_14);
            }
            for (g_88 = (-14); (g_88 < 26); g_88++)
            { 
                if (p_13)
                    break;
            }
            l_110--;
        }
        else
        { 
            l_116 = (l_107 = (((0xEE10L || (p_13 , (g_113 = l_71[1][1].f0))) < ((safe_lshift_func_uint16_t_u_s((p_14 | g_53[0][0][1]), 13)) == l_107)) && l_82));
        }
    }
    for (g_113 = 23; (g_113 == 9); g_113 = safe_sub_func_int8_t_s_s(g_113, 1))
    { 
        int8_t l_121 = 1L;
        int32_t l_127 = 0x1317D212L;
        int32_t l_128 = 1L;
        int32_t l_129 = (-3L);
        int32_t l_130 = (-10L);
        int32_t l_135 = 8L;
        int32_t l_136 = (-1L);
        int32_t l_137 = 0xA5459814L;
        int32_t l_138[4] = {0x35B92F13L,0x35B92F13L,0x35B92F13L,0x35B92F13L};
        int i;
        g_124[1]--;
        ++g_145[2];
    }
    l_132 = (p_14 || (18446744073709551615UL & (g_124[1] ^ (safe_mod_func_uint64_t_u_u((g_70.f1 = (safe_mul_func_int8_t_s_s((l_134[0] ^= ((((l_110 | p_14) || 0xEE2624C8L) != l_71[1][1].f0) | l_132)), g_70.f0))), 0x2F5D31D5B22E3089LL)))));
    return g_145[1];
}



static int64_t  func_15(uint64_t  p_16, uint32_t  p_17, uint32_t  p_18, union U2  p_19, uint8_t  p_20)
{ 
    int64_t l_52 = 1L;
    int32_t l_64[4][2][5] = {{{0x0B22F2EEL,0x17319F56L,0x0B22F2EEL,0x17319F56L,0x0B22F2EEL},{0xB6EA11B9L,0xB6EA11B9L,0x18A3212EL,0x18A3212EL,0xB6EA11B9L}},{{6L,0x17319F56L,6L,0x17319F56L,6L},{0xB6EA11B9L,0x18A3212EL,0x18A3212EL,0xB6EA11B9L,0xB6EA11B9L}},{{0x0B22F2EEL,0x17319F56L,0x0B22F2EEL,0x17319F56L,0x0B22F2EEL},{0xB6EA11B9L,0xB6EA11B9L,0x18A3212EL,0x18A3212EL,0xB6EA11B9L}},{{6L,0x17319F56L,6L,0x17319F56L,6L},{0xB6EA11B9L,0x18A3212EL,0x18A3212EL,0xB6EA11B9L,0xB6EA11B9L}}};
    int32_t l_65[5] = {0xC01E8B95L,0xC01E8B95L,0xC01E8B95L,0xC01E8B95L,0xC01E8B95L};
    int i, j, k;
    for (p_19.f1 = 14; (p_19.f1 != 23); p_19.f1++)
    { 
        uint32_t l_38[2];
        int32_t l_54 = 0xF077D7E7L;
        int i;
        for (i = 0; i < 2; i++)
            l_38[i] = 8UL;
        for (p_20 = 0; p_20 < 2; p_20 += 1)
        {
            l_38[p_20] = 0UL;
        }
        l_54 = (safe_rshift_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((+p_16) < p_17), (safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s((1L && (((g_32 = (safe_rshift_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(p_19.f0, p_19.f0)) && g_32), 2))) ^ g_26.f1) , l_52)), p_19.f1)), g_26.f1)))) , g_53[1][0][4]), g_26.f1));
        l_65[2] = (((safe_mul_func_int16_t_s_s((((safe_mod_func_int64_t_s_s((l_54 = ((g_32 = ((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((safe_unary_minus_func_uint32_t_u((p_17 = ((l_64[0][1][1] &= (((-4L) == 0x22L) ^ (((g_53[1][0][4] | p_19.f1) , l_54) == (-1L)))) || 0x0218L)))) && 2UL) <= 8L), 0x74L)), 0xF0CFL)) || l_64[0][1][1])) >= g_53[4][0][4])), 0xD03C5CEC10C1A6FELL)) ^ 0x27F84FF3FA32FBB2LL) ^ g_2), l_52)) & 1UL) > l_52);
    }
    l_64[0][1][1] = p_20;
    g_67--;
    return l_65[0];
}



static uint32_t  func_21(uint16_t  p_22, int16_t  p_23, struct S0  p_24)
{ 
    struct S0 l_27 = {0x478254981C5860BCLL,0x3CEA2FF3E141B6BALL};
    int32_t l_33 = 0L;
    l_33 = (l_27 , (safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(g_26.f1, (g_32 = g_26.f1))), 5)));
    return p_24.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_53[i][j][k], "g_53[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_124[i], "g_124[i]", print_hash_value);

    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_144[i][j], "g_144[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_145[i], "g_145[i]", print_hash_value);

    }
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_192[i], "g_192[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
