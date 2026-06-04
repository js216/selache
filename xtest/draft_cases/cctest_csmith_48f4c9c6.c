// SPDX-License-Identifier: MIT
// cctest_csmith_48f4c9c6.c --- cctest case csmith_48f4c9c6 (csmith seed 1224001990)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6ed9fc26 */
/* @exp_ticks 0x2ffb */

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

// Options:   -s 1224001990 -o /home/agent1/fast_data/tmp/csmith_gen_kvz374o1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint16_t  f0;
   int32_t  f1;
};

union U1 {
   const uint32_t  f0;
   uint64_t  f1;
   struct S0  f2;
};

union U2 {
   const uint8_t  f0;
};


static int8_t g_7 = 0L;
static int32_t g_22 = (-1L);
static uint16_t g_67 = 0x029BL;
static int32_t g_70 = 0xC6C2CF37L;
static uint8_t g_71 = 0UL;
static union U1 g_74 = {0x50630208L};
static struct S0 g_90 = {0x94EBL,-1L};
static int16_t g_100 = 0xAC15L;
static uint16_t g_102 = 0xCB2DL;
static int32_t g_168[5] = {0x9C141FE1L,0x9C141FE1L,0x9C141FE1L,0x9C141FE1L,0x9C141FE1L};
static int16_t g_181 = 0x4B77L;
static int64_t g_183 = (-6L);
static uint16_t g_185 = 0x9E58L;
static uint32_t g_203[4] = {0xF4407CCEL,0xF4407CCEL,0xF4407CCEL,0xF4407CCEL};
static int32_t g_302 = 0L;
static int16_t g_308 = 0x053EL;
static uint64_t g_309 = 0x0A1EFB264947CCC2LL;
static uint64_t g_315 = 0x2367802F3114D939LL;
static union U2 g_316 = {249UL};



static union U2  func_1(void);
static const uint64_t  func_4(uint32_t  p_5, const int16_t  p_6);
static uint32_t  func_14(int8_t  p_15, uint64_t  p_16, uint64_t  p_17);
static int32_t  func_30(union U1  p_31, union U2  p_32, int64_t  p_33, uint32_t  p_34, uint16_t  p_35);




static union U2  func_1(void)
{ 
    uint8_t l_13 = 0UL;
    int32_t l_240[2];
    const int32_t l_241 = 9L;
    int32_t l_242[5][2][2] = {{{0xAC4890B7L,7L},{0x8EB1A2BFL,0x31900754L}},{{0x8EB1A2BFL,7L},{0xAC4890B7L,0x8EB1A2BFL}},{{7L,0x31900754L},{(-1L),(-1L)}},{{0xAC4890B7L,(-1L)},{(-1L),0x31900754L}},{{7L,0x8EB1A2BFL},{0xAC4890B7L,7L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_240[i] = (-1L);
    g_315 |= (safe_div_func_uint16_t_u_u(((((((func_4(g_7, (safe_unary_minus_func_uint8_t_u((l_242[1][0][1] = (safe_div_func_uint16_t_u_u((g_7 > ((((((l_13 = (safe_lshift_func_int8_t_s_s(g_7, 3))) , ((l_240[1] = func_14(((g_7 & g_7) == l_13), l_13, g_7)) && 0xE4706FC5L)) | g_90.f0) != 4UL) , 8L) & g_90.f0)), l_241)))))) != l_241) > l_241) & l_241) >= g_302) | (-1L)) < l_241), l_241));
    g_22 = 2L;
    return g_316;
}



static const uint64_t  func_4(uint32_t  p_5, const int16_t  p_6)
{ 
    int8_t l_243 = (-1L);
    union U2 l_252 = {250UL};
    int8_t l_253 = (-5L);
    int32_t l_254[2][1];
    uint32_t l_293 = 1UL;
    uint64_t l_296 = 0xE45068F4A979D540LL;
    int32_t l_314[2][4];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_254[i][j] = 0L;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_314[i][j] = 0xE2C023DFL;
    }
    for (g_74.f2.f1 = 0; g_74.f2.f1 < 4; g_74.f2.f1 += 1)
    {
        g_203[g_74.f2.f1] = 0UL;
    }
    if (l_243)
    { 
        uint16_t l_244 = 0xAEA3L;
        int32_t l_277 = 0x8CC242C4L;
        uint16_t l_278 = 0x1CEEL;
        union U1 l_295 = {0x34282E36L};
        int16_t l_306 = (-8L);
        l_244++;
        if ((safe_add_func_uint8_t_u_u(246UL, ((safe_add_func_int32_t_s_s(l_243, ((!1UL) & (l_252 , l_253)))) | g_90.f1))))
        { 
            uint8_t l_255[5];
            int i;
            for (i = 0; i < 5; i++)
                l_255[i] = 0xE8L;
            l_254[1][0] = (l_253 > (g_100 != p_6));
            --l_255[0];
        }
        else
        { 
            int64_t l_276 = (-3L);
            int32_t l_297 = 0xDCF2B0F9L;
            int32_t l_299 = 0x4B6CB0D4L;
            int32_t l_301 = 0x1DE2C0B9L;
            int32_t l_305 = 0x3D68D924L;
            int64_t l_307 = (-9L);
            g_22 = (safe_sub_func_uint16_t_u_u((g_183 & 0xDBL), g_183));
            if (((g_90.f0 || (g_181 = (safe_div_func_int8_t_s_s(((3UL & (((((((~(safe_rshift_func_int16_t_s_u(g_100, (safe_add_func_uint64_t_u_u(l_244, p_5))))) > (-6L)) , g_168[1]) == l_243) | 0x08L) == 0UL) < l_244)) != 6L), p_6)))) == 4294967295UL))
            { 
                uint32_t l_275[3][5][5] = {{{0x0F209FDCL,4294967295UL,0x0F209FDCL,0x6B5376D6L,4294967292UL},{4294967287UL,0xB0785E97L,1UL,0xB0785E97L,4294967287UL},{0x0F209FDCL,0xC3C3C14CL,4294967295UL,0x5AFD3214L,4294967295UL},{1UL,1UL,1UL,0x00B59880L,0xB0785E97L},{0x0F209FDCL,0x5AFD3214L,0x5AFD3214L,0x0F209FDCL,0UL}},{{4294967295UL,0x00B59880L,1UL,1UL,0x00B59880L},{0UL,0x5AFD3214L,4294967292UL,4294967295UL,4294967295UL},{4294967287UL,1UL,4294967287UL,1UL,1UL},{0x6B5376D6L,0x0F209FDCL,4294967295UL,0x0F209FDCL,0x6B5376D6L},{4294967287UL,4294967295UL,1UL,0x00B59880L,1UL}},{{0UL,0UL,4294967295UL,0x6B5376D6L,0xC3C3C14CL},{4294967295UL,4294967287UL,4294967287UL,4294967295UL,1UL},{0x0F209FDCL,0x6B5376D6L,4294967292UL,4294967292UL,0x6B5376D6L},{1UL,4294967287UL,1UL,1UL,1UL},{0x5AFD3214L,0UL,0x5AFD3214L,4294967292UL,4294967295UL}}};
                int32_t l_279[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i, j, k;
lbl_294:
                l_279[0] |= (((l_277 = ((((((4UL < p_6) | (safe_mod_func_uint16_t_u_u((g_102 = ((((safe_sub_func_uint16_t_u_u(l_244, ((((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(1UL, p_5)), 65535UL)) , 5L) & g_181) == p_5))) || g_185) >= 0xAF0BL) >= l_275[1][4][4])), g_22))) < 4L) < l_276) , p_5) ^ g_185)) < l_278) && 0xB2L);
                l_254[0][0] ^= (safe_rshift_func_uint8_t_u_s(((p_6 | ((18446744073709551615UL || (safe_rshift_func_uint16_t_u_s(l_276, 4))) > ((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((g_70 <= (-1L)), (-1L))), l_293)), g_70)))), 15)) , g_203[1]))) || l_252.f0), p_6));
                if (l_253)
                    goto lbl_294;
            }
            else
            { 
                int8_t l_298 = 1L;
                int32_t l_300 = 0x82AA6F4FL;
                int32_t l_303 = 0L;
                int32_t l_304 = (-8L);
                l_296 = (l_295 , l_295.f0);
                ++g_309;
            }
            for (g_22 = 0; (g_22 > 11); g_22 = safe_add_func_uint8_t_u_u(g_22, 5))
            { 
                if (l_314[0][1])
                    break;
            }
        }
    }
    else
    { 
        for (g_22 = 4; (g_22 >= 0); g_22 -= 1)
        { 
            int i;
            return g_168[g_22];
        }
    }
    return p_6;
}



static uint32_t  func_14(int8_t  p_15, uint64_t  p_16, uint64_t  p_17)
{ 
    int16_t l_24[4];
    union U1 l_36 = {4294967290UL};
    int32_t l_41 = 0x1CF717C9L;
    int32_t l_182 = 1L;
    struct S0 l_231 = {0UL,-6L};
    int i;
    for (i = 0; i < 4; i++)
        l_24[i] = (-4L);
    for (p_16 = 0; (p_16 < 37); p_16++)
    { 
        int16_t l_23 = 0x71A6L;
        union U2 l_37 = {0UL};
        int32_t l_127 = 0x8475ADB6L;
        int32_t l_177 = 0x26895F91L;
        int32_t l_179 = 0xFB24A310L;
        int32_t l_184 = 0xAAABC806L;
        int8_t l_197 = 5L;
        int64_t l_220 = 0xFFE6EDFE9C0AA097LL;
        if (g_7)
        { 
            int16_t l_40 = 0L;
            int32_t l_112 = 7L;
            int32_t l_113[5] = {0x006A5961L,0x006A5961L,0x006A5961L,0x006A5961L,0x006A5961L};
            int8_t l_125 = (-3L);
            int i;
            for (p_17 = (-2); (p_17 < 52); p_17 = safe_add_func_int8_t_s_s(p_17, 4))
            { 
                uint8_t l_25 = 248UL;
                g_22 |= (-1L);
                l_25++;
            }
            for (g_22 = 0; (g_22 > 1); ++g_22)
            { 
                int32_t l_42[4];
                int32_t l_126 = 1L;
                int i;
                for (i = 0; i < 4; i++)
                    l_42[i] = 4L;
                l_36.f2.f1 = ((((g_22 ^ ((l_113[0] = (l_112 = func_30(l_36, l_37, (l_41 = (safe_mod_func_int32_t_s_s(0xBCA3396DL, l_40))), l_42[0], g_22))) , p_15)) ^ (-9L)) && g_7) | g_90.f1);
                l_127 |= (l_36.f2.f1 = ((p_17 &= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(65533UL, 0x8F0AL)), ((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_16, (l_41 |= (l_113[0] = (l_126 = (((!(safe_add_func_int8_t_s_s(g_90.f0, l_125))) & g_70) | 0UL)))))), l_125)) <= g_102)))) < l_125));
                l_41 = ((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(p_17, (safe_rshift_func_uint8_t_u_u(0xAFL, 4)))), (l_23 || (safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(p_17, l_36.f0)), g_100))))) , p_16);
            }
        }
        else
        { 
            uint16_t l_151 = 0x319CL;
            for (l_36.f1 = 0; (l_36.f1 != 1); ++l_36.f1)
            { 
                uint32_t l_144 = 0UL;
                int32_t l_154 = 0x0413CF27L;
                l_127 = (safe_sub_func_uint16_t_u_u(((l_144 == l_144) != ((safe_sub_func_int16_t_s_s(((((safe_add_func_int32_t_s_s((g_70 = ((((safe_sub_func_uint16_t_u_u(1UL, g_74.f0)) & 0xCDC64D16L) , g_7) <= l_23)), 4294967295UL)) & g_100) >= g_67) ^ g_22), g_90.f0)) == g_71)), l_41));
                l_154 = (((l_144 <= l_151) , p_17) > (safe_div_func_int64_t_s_s(l_37.f0, l_24[0])));
            }
        }
        if ((safe_rshift_func_int16_t_s_u(0x9707L, 2)))
        { 
            int8_t l_169 = 9L;
            int32_t l_170 = 0x4EA432D7L;
            int32_t l_173[2][5] = {{0xD7775BE2L,0xD7775BE2L,0xD7775BE2L,0xD7775BE2L,0xD7775BE2L},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
            int32_t l_232 = 0L;
            int i, j;
            if ((l_169 ^= ((+((((g_168[1] = (safe_add_func_uint64_t_u_u(7UL, (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(l_41, (-4L))), ((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_15, p_15)), p_15)) ^ (-1L))))))) , g_100) & p_15) >= 8L)) != g_100)))
            { 
                int32_t l_171 = 0xAF8CB8F1L;
                int32_t l_172 = 0x4BA4E592L;
                int32_t l_174 = 0x048F12A9L;
                int32_t l_175 = 0x5C23E70AL;
                int32_t l_176 = 1L;
                int32_t l_178 = 0x2DD67205L;
                int32_t l_180 = 0x552A0AEBL;
                --g_185;
                l_174 = (l_173[1][4] = (((safe_lshift_func_int8_t_s_s(((1UL && (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((l_24[0] ^ ((!(safe_add_func_int64_t_s_s(p_15, (p_16 == p_17)))) <= p_16)), l_41)), p_17))) > 0x81FDBEEBL), 4)) || l_197) ^ 0x0BL));
            }
            else
            { 
                int64_t l_198 = 1L;
                return l_198;
            }
            for (g_71 = (-29); (g_71 == 28); g_71 = safe_add_func_uint8_t_u_u(g_71, 2))
            { 
                uint64_t l_202[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_202[i] = 1UL;
                l_36.f2.f1 = ((g_203[0] ^= (safe_unary_minus_func_uint32_t_u(l_202[1]))) && ((g_67 != (l_36.f0 > (((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((6UL | p_16), 0x8F995CB7L)), 8)) || p_15) , 2L))) && g_90.f1));
                g_74.f2.f1 = (l_41 , (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_41 && ((safe_mul_func_uint16_t_u_u(0xC1F5L, (g_183 > g_181))) | l_173[1][4])), l_179)), 0x177BL)) & l_169), 0x5C9AL)) && l_197), 65529UL)), l_127)));
            }
            if (l_220)
            { 
                int64_t l_233 = (-1L);
                l_233 |= (((safe_rshift_func_int8_t_s_u((0xD416L || (g_90.f1 != ((safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((p_17 >= ((((safe_mod_func_uint16_t_u_u((((++g_203[0]) && (((l_231 , 0xC0AFCBF960FFDD9DLL) != l_232) , p_16)) && l_173[0][1]), (-1L))) , p_16) != 65530UL) < 1L)), p_15)) >= p_16), g_168[3])) < p_15))), 5)) < g_74.f0) < p_16);
                g_70 = (safe_sub_func_int32_t_s_s(p_17, p_15));
            }
            else
            { 
                int32_t l_239 = 1L;
                g_90.f1 = (safe_add_func_uint64_t_u_u((~p_16), l_239));
            }
        }
        else
        { 
            return l_24[3];
        }
        if (p_16)
            continue;
    }
    return p_17;
}



static int32_t  func_30(union U1  p_31, union U2  p_32, int64_t  p_33, uint32_t  p_34, uint16_t  p_35)
{ 
    uint64_t l_47[4] = {0UL,0UL,0UL,0UL};
    int32_t l_51[5][4][1] = {{{(-5L)},{0x537E8F88L},{(-5L)},{(-5L)}},{{0x537E8F88L},{(-5L)},{(-5L)},{0x537E8F88L}},{{(-5L)},{(-5L)},{0x537E8F88L},{(-5L)}},{{(-5L)},{0x537E8F88L},{(-5L)},{(-5L)}},{{0x537E8F88L},{(-5L)},{(-5L)},{0x537E8F88L}}};
    union U1 l_75 = {8UL};
    int64_t l_85[2][2][1];
    uint32_t l_87[2];
    const int32_t l_99 = 0x23911DF3L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_85[i][j][k] = (-1L);
        }
    }
    for (i = 0; i < 2; i++)
        l_87[i] = 4294967286UL;
    for (p_31.f2.f1 = 0; (p_31.f2.f1 == 24); p_31.f2.f1++)
    { 
        uint32_t l_48 = 0x9AC4E69AL;
        int32_t l_83 = 0x030FACFAL;
        int32_t l_103 = 0xC6AA55A6L;
        for (p_35 = (-5); (p_35 > 21); ++p_35)
        { 
            if (g_22)
                break;
            for (p_34 = 0; p_34 < 4; p_34 += 1)
            {
                l_47[p_34] = 0x9457720F84B0F4F2LL;
            }
            return p_33;
        }
        if (l_48)
        { 
            uint8_t l_66 = 252UL;
            int32_t l_82[1];
            int i;
            for (i = 0; i < 1; i++)
                l_82[i] = 0xB9D72FAFL;
            for (l_48 = (-3); (l_48 != 24); l_48++)
            { 
                l_51[0][1][0] &= p_35;
            }
            for (p_33 = 0; (p_33 <= 11); p_33 = safe_add_func_int8_t_s_s(p_33, 5))
            { 
                uint16_t l_57[3][5] = {{1UL,0UL,1UL,65535UL,65535UL},{1UL,0UL,1UL,65535UL,65535UL},{1UL,0UL,1UL,65535UL,65535UL}};
                int32_t l_68 = 0x39352A55L;
                int32_t l_69 = (-4L);
                int i, j;
                g_67 |= (~((safe_mul_func_uint8_t_u_u((l_57[2][2] ^ (safe_sub_func_uint8_t_u_u(g_7, (safe_lshift_func_int8_t_s_u((g_7 >= (((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((p_32.f0 ^ p_31.f0), g_7)), 18446744073709551609UL)) & 7UL) <= l_66)), 2))))), 253UL)) == g_22));
                g_71--;
            }
            l_83 = (((g_74 , l_75) , (safe_add_func_int16_t_s_s(9L, (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_82[0] = l_51[2][2][0]), 0x1334L)), l_48))))) < g_67);
        }
        else
        { 
            uint64_t l_101 = 0x71DA88441872AF40LL;
            int32_t l_111 = 1L;
            for (g_71 = 0; (g_71 <= 3); g_71 += 1)
            { 
                int32_t l_84 = 0x2E0EE4D5L;
                int32_t l_86 = 5L;
                ++l_87[0];
            }
            l_103 = ((g_90 , ((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s((g_102 = (l_83 = (safe_mod_func_uint64_t_u_u((g_74.f1 = (safe_sub_func_int16_t_s_s(((((g_100 = (l_99 >= p_33)) , g_67) > p_34) >= l_101), p_34))), l_99)))), g_90.f1)), l_48)) , g_90)) , l_101);
            l_111 |= (0L >= (safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s(0xC95BL, ((safe_lshift_func_int8_t_s_u((((p_33 > (safe_sub_func_uint64_t_u_u(l_87[1], 0xAE6C26CF9C76A876LL))) ^ 0xD0F05760DC054819LL) || p_33), p_34)) | g_74.f0))))));
        }
    }
    return g_102;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_168[i], "g_168[i]", print_hash_value);

    }
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_203[i], "g_203[i]", print_hash_value);

    }
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_316.f0, "g_316.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
