// SPDX-License-Identifier: MIT
// cctest_csmith_f2ff6481.c --- cctest case csmith_f2ff6481 (csmith seed 4076823681)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8699d208 */
/* @exp_ticks 0x7fe */

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

// Options:   -s 4076823681 -o /home/agent1/fast_data/tmp/csmith_gen_6824rrpn/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   int16_t  f1;
};

union U2 {
   int8_t  f0;
   const int64_t  f1;
};

union U3 {
   struct S0  f0;
   int32_t  f1;
   uint32_t  f2;
};

union U4 {
   uint16_t  f0;
   const uint16_t  f1;
   const int64_t  f2;
   int32_t  f3;
};


static uint16_t g_13 = 65528UL;
static union U2 g_15[3] = {{0x31L},{0x31L},{0x31L}};
static uint64_t g_40[5][3] = {{0x069719EFCC72FDDDLL,0xF12CE33A9025B0D6LL,0x069719EFCC72FDDDLL},{0x069719EFCC72FDDDLL,0xF12CE33A9025B0D6LL,0x069719EFCC72FDDDLL},{0x069719EFCC72FDDDLL,0xF12CE33A9025B0D6LL,0x069719EFCC72FDDDLL},{0x069719EFCC72FDDDLL,0xF12CE33A9025B0D6LL,0x069719EFCC72FDDDLL},{0x069719EFCC72FDDDLL,0xF12CE33A9025B0D6LL,0x069719EFCC72FDDDLL}};
static union U4 g_43[1][3][4] = {{{{65530UL},{65530UL},{65530UL},{65530UL}},{{65530UL},{65530UL},{65530UL},{65530UL}},{{65530UL},{65530UL},{65530UL},{65530UL}}}};
static struct S0 g_50 = {0xAE7DL,8L};
static int32_t g_69[2] = {0xEE7416AFL,0xEE7416AFL};
static struct S0 g_73 = {1UL,0x0045L};
static uint8_t g_80 = 0UL;
static uint32_t g_128 = 5UL;



static int32_t  func_1(void);
static uint32_t  func_4(union U4  p_5, int8_t  p_6);
static union U4  func_7(int8_t  p_8, int32_t  p_9, int8_t  p_10, int8_t  p_11, union U2  p_12);
static struct S0  func_19(union U2  p_20, struct S0  p_21);




static int32_t  func_1(void)
{ 
    int32_t l_14 = 8L;
    g_128 |= ((safe_rshift_func_uint8_t_u_u((((func_4(func_7(g_13, g_13, l_14, ((l_14 , 0UL) & l_14), g_15[0]), g_69[1]) ^ g_15[0].f0) & 8UL) && 0x1FL), g_69[1])) & 0x540A1317D21247B8LL);
    return g_43[0][1][3].f0;
}



static uint32_t  func_4(union U4  p_5, int8_t  p_6)
{ 
    struct S0 l_97 = {0x66F9L,0xBAA8L};
    int32_t l_101 = 0x2BCECFDEL;
    const uint8_t l_122 = 255UL;
    int32_t l_125 = 0x292A33AFL;
    int32_t l_126[5] = {1L,1L,1L,1L,1L};
    int i;
    for (p_5.f0 = (-30); (p_5.f0 != 40); p_5.f0 = safe_add_func_uint16_t_u_u(p_5.f0, 7))
    { 
        int8_t l_107 = (-1L);
        uint16_t l_123 = 0x5DADL;
        union U2 l_124 = {-1L};
        int32_t l_127 = (-9L);
        l_101 = (safe_mod_func_int64_t_s_s(p_6, (l_97 , ((safe_lshift_func_int16_t_s_u(0xDD61L, 8)) & (~g_80)))));
        l_127 = ((0x916956DDL | (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((((l_107 = (~p_5.f0)) && (((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((l_126[2] &= (l_125 = ((safe_add_func_uint32_t_u_u(((func_7(((((safe_div_func_uint64_t_u_u((!(-1L)), ((safe_rshift_func_int8_t_s_u((!(l_101 = (safe_sub_func_int8_t_s_s(g_15[0].f0, 1UL)))), p_5.f0)) | l_122))) || g_69[0]) || g_50.f1) , g_13), l_97.f0, g_69[0], l_123, l_124) , g_40[1][1]) & l_123), g_80)) , l_124.f0))), p_6)) >= g_15[0].f0), l_97.f0)) | (-1L)) , 0xFCL)) | 0UL) , p_5.f0), l_122)), p_6))) , l_123);
        if (l_123)
            break;
    }
    g_43[0][1][3].f3 = p_6;
    return g_40[4][0];
}



static union U4  func_7(int8_t  p_8, int32_t  p_9, int8_t  p_10, int8_t  p_11, union U2  p_12)
{ 
    uint8_t l_18 = 0xAAL;
    uint16_t l_45 = 1UL;
    int32_t l_47 = 0x2742E7FFL;
    struct S0 l_49 = {0x2B13L,1L};
    union U3 l_57 = {{65530UL,8L}};
    uint32_t l_88 = 0UL;
    union U4 l_92 = {0xFD93L};
    for (p_11 = 0; (p_11 < (-20)); p_11 = safe_sub_func_uint8_t_u_u(p_11, 3))
    { 
        struct S0 l_22 = {0UL,0L};
        int32_t l_46[5][4][1] = {{{0x2506546DL},{(-1L)},{6L},{(-1L)}},{{0x2506546DL},{0xB5841EC3L},{0x2506546DL},{(-1L)}},{{6L},{0xB5841EC3L},{6L},{0x9C1F6213L}},{{6L},{0xB5841EC3L},{(-10L)},{0xB5841EC3L}},{{6L},{0x9C1F6213L},{6L},{0xB5841EC3L}}};
        int32_t l_48 = 1L;
        int i, j, k;
        if (l_18)
        { 
            struct S0 l_23 = {7UL,1L};
            struct S0 l_42[5] = {{1UL,-9L},{1UL,-9L},{1UL,-9L},{1UL,-9L},{1UL,-9L}};
            int i;
            l_42[3] = (l_22 = func_19(g_15[1], (l_23 = l_22)));
            return g_43[0][1][3];
        }
        else
        { 
            uint32_t l_44 = 4294967288UL;
            l_44 = (-1L);
            if (l_18)
                continue;
            if (l_45)
                break;
        }
        if ((l_48 = (l_47 = (g_13 > (l_46[0][1][0] = p_9)))))
        { 
            uint64_t l_68 = 0x19F56C0C90B22F2ELL;
            g_50 = l_49;
            l_46[4][0][0] = (safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((safe_add_func_int64_t_s_s(p_9, (l_57 , (1UL >= (g_50.f0 = (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_div_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_46[0][1][0], 0xD1D4L)), (-8L))) < p_8), 1UL)) > l_68), 4294967292UL)), 0x1B98B5DBL))))))) , g_43[0][1][3].f0) <= 18446744073709551606UL), l_68)), 0x8FL));
        }
        else
        { 
            uint8_t l_70 = 0x3BL;
            l_70--;
            if (l_48)
                continue;
            g_73 = (g_50 = l_22);
        }
        for (l_57.f1 = 0; (l_57.f1 >= 0); l_57.f1 -= 1)
        { 
            int16_t l_83 = 0L;
            int32_t l_84[1][5];
            struct S0 l_85 = {65526UL,0x9D34L};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_84[i][j] = 0xDFF3B7F0L;
            }
            g_73 = g_73;
            l_84[0][3] = (safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((((l_47 ^ ((g_80 >= g_43[0][1][3].f1) > ((safe_add_func_uint8_t_u_u((l_83 , l_83), l_83)) , l_57.f1))) , 0x1FL) && p_9) == p_8), l_45)) || g_13), 0xF5L)) > l_46[0][3][0]), g_40[4][0]));
            for (l_22.f1 = 0; (l_22.f1 <= 2); l_22.f1 += 1)
            { 
                int i, j, k;
                if (l_46[(l_22.f1 + 2)][(l_57.f1 + 1)][l_57.f1])
                    break;
                g_50 = l_85;
                l_84[0][3] = (l_46[(l_57.f1 + 3)][(l_57.f1 + 1)][l_57.f1] = p_12.f0);
            }
        }
    }
    l_88 = (safe_rshift_func_uint8_t_u_s(6UL, ((p_9 & g_13) & (g_50.f0 == g_43[0][1][3].f1))));
    for (g_13 = 18; (g_13 == 6); g_13--)
    { 
        struct S0 l_91 = {0xFCB9L,-9L};
        if (p_9)
            break;
        l_91 = func_19(p_12, g_73);
    }
    return l_92;
}



static struct S0  func_19(union U2  p_20, struct S0  p_21)
{ 
    int16_t l_28 = 0x5498L;
    int32_t l_37 = 4L;
    uint32_t l_38 = 3UL;
    struct S0 l_39[1] = {{65535UL,0xB9B9L}};
    struct S0 l_41 = {3UL,0x5B78L};
    int i;
    if ((((safe_mul_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((l_28 = g_15[0].f0), (safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((((g_13 == (7L || (((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint64_t_u_u((p_20 , 1UL), l_37)) <= l_37), 1)) < l_38) & p_21.f1))) >= g_13) >= g_13) <= 1UL), g_13)), p_21.f1)))) || l_38), g_15[0].f0)) > p_20.f0) != 0xF5AB171CL))
    { 
        return l_39[0];
    }
    else
    { 
        g_40[4][0] |= g_13;
    }
    return l_41;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_15[i].f0, "g_15[i].f0", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_40[i][j], "g_40[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_43[i][j][k].f0, "g_43[i][j][k].f0", print_hash_value);
                transparent_crc(g_43[i][j][k].f1, "g_43[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);

    }
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
