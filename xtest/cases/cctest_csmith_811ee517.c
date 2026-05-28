// SPDX-License-Identifier: MIT
// cctest_csmith_811ee517.c --- cctest case csmith_811ee517 (csmith seed 2166285591)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5ec5ddd0 */
/* @exp_ticks 0x4c15b */

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

// Options:   -s 2166285591 -o /tmp/csmith_gen_uno1gpbo/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   int16_t  f3;
   int32_t  f4;
};

union U1 {
   uint32_t  f0;
   struct S0  f1;
   int8_t  f2;
   int64_t  f3;
};

union U2 {
   int64_t  f0;
   uint32_t  f1;
};


static int32_t g_2[5] = {0L,0L,0L,0L,0L};
static int32_t g_3 = 0x034D0069L;
static int32_t g_4 = 6L;
static int32_t g_5 = 0x0A29822CL;
static int32_t g_21[3][4][2] = {{{0x7865E1BFL,(-1L)},{0xA2A4F2A6L,0x7865E1BFL},{0x1938D10FL,0x1938D10FL},{0x1938D10FL,0x7865E1BFL}},{{0xA2A4F2A6L,(-1L)},{0x7865E1BFL,(-1L)},{0xA2A4F2A6L,0x7865E1BFL},{0x1938D10FL,0x1938D10FL}},{{0x1938D10FL,0x7865E1BFL},{0xA2A4F2A6L,(-1L)},{0x7865E1BFL,(-1L)},{0xA2A4F2A6L,0x7865E1BFL}}};
static struct S0 g_34[5] = {{0xD29DL,1UL,0xCAL,0x9AB6L,0x22A57D88L},{0xD29DL,1UL,0xCAL,0x9AB6L,0x22A57D88L},{0xD29DL,1UL,0xCAL,0x9AB6L,0x22A57D88L},{0xD29DL,1UL,0xCAL,0x9AB6L,0x22A57D88L},{0xD29DL,1UL,0xCAL,0x9AB6L,0x22A57D88L}};
static uint8_t g_37 = 255UL;
static union U2 g_47 = {0xAE6E92ECD44262C4LL};
static int32_t g_52[5] = {0x969AAE9AL,0x969AAE9AL,0x969AAE9AL,0x969AAE9AL,0x969AAE9AL};
static int16_t g_156 = 0x6CBBL;
static union U1 g_159[5] = {{0xC85B538FL},{0xC85B538FL},{0xC85B538FL},{0xC85B538FL},{0xC85B538FL}};



static union U1  func_1(void);
static uint8_t  func_6(int16_t  p_7, int32_t  p_8);
static union U2  func_9(int8_t  p_10, uint32_t  p_11, struct S0  p_12, int64_t  p_13);
static int8_t  func_14(uint8_t  p_15, struct S0  p_16);




static union U1  func_1(void)
{ 
    uint32_t l_33 = 6UL;
    union U2 l_119 = {0xBF822096152EF735LL};
    int32_t l_134 = (-1L);
    int32_t l_135 = 0x2D572512L;
    for (g_3 = 4; (g_3 >= 0); g_3 -= 1)
    { 
        union U2 l_117[5][5] = {{{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL}},{{0L},{0L},{0L},{0L},{0L}},{{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL}},{{0L},{0L},{0L},{0L},{0L}},{{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL},{0xE864F27C2C81858ALL}}};
        union U2 l_118[3][4][2] = {{{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}}},{{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}}},{{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}}}};
        union U2 l_120 = {-1L};
        int32_t l_133 = 0x93343C83L;
        int i, j, k;
        for (g_4 = 4; (g_4 >= 0); g_4 -= 1)
        { 
            struct S0 l_18 = {0x4365L,0xEA311C3FL,0x02L,-7L,1L};
            int32_t l_130[3];
            int32_t l_142[1][4];
            int i, j;
            for (i = 0; i < 3; i++)
                l_130[i] = (-2L);
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                    l_142[i][j] = 0xF42BAF64L;
            }
            for (g_5 = 0; (g_5 <= 4); g_5 += 1)
            { 
                uint8_t l_17 = 0x6DL;
                int i;
                g_2[g_5] = (func_6(((l_120 = (l_119 = (l_118[2][1][1] = (l_117[3][4] = func_9((l_33 = func_14(l_17, l_18)), (0xE56CDAA9320AF47DLL >= g_4), g_34[2], g_34[2].f4))))) , 0L), g_5) | g_34[2].f4);
                l_130[2] |= (g_2[1] = (((safe_unary_minus_func_uint16_t_u(((safe_div_func_uint64_t_u_u(g_37, g_3)) != (g_21[0][3][0] = (safe_add_func_int64_t_s_s(0x1D30752C94BBC9C3LL, (-3L))))))) , 1UL) , l_117[3][4].f1));
                g_34[2] = g_34[1];
            }
            l_134 &= (safe_lshift_func_int8_t_s_s(((++g_47.f1) , (safe_sub_func_int32_t_s_s((safe_div_func_uint64_t_u_u(18446744073709551615UL, l_135)), ((l_142[0][3] |= g_34[2].f1) == ((safe_add_func_uint8_t_u_u(0UL, g_34[2].f4)) | 0xC3E5L))))), 7));
        }
        g_5 = (safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(g_34[2].f4, (safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u(l_133)) | 0xE0C5L), (safe_mod_func_uint8_t_u_u(g_34[2].f0, l_33)))))) < g_156), 6)) && l_135) > 0x2717L), g_34[2].f4));
    }
    l_134 = (safe_rshift_func_int16_t_s_u((g_34[2] , (l_135 || 0x5D562BBFL)), 14));
    return g_159[4];
}



static uint8_t  func_6(int16_t  p_7, int32_t  p_8)
{ 
    uint32_t l_121 = 4294967295UL;
    int32_t l_122 = 0xBD8D7B0DL;
    l_122 &= l_121;
    l_122 = (safe_rshift_func_uint16_t_u_u(g_21[2][2][1], 3));
    return l_121;
}



static union U2  func_9(int8_t  p_10, uint32_t  p_11, struct S0  p_12, int64_t  p_13)
{ 
    uint32_t l_35 = 0xBE3E2CA5L;
    int32_t l_63 = 0x02F92BF7L;
    int32_t l_66 = 0xC0CD1CB4L;
    int32_t l_67 = 1L;
    int32_t l_75 = 0x2A2353B3L;
    uint8_t l_81 = 246UL;
    int64_t l_96 = (-9L);
    int32_t l_97 = 0x80ABA067L;
    int32_t l_98[2];
    uint16_t l_99[1][1];
    uint32_t l_104 = 0UL;
    union U2 l_116 = {0x3125455D931822BFLL};
    int i, j;
    for (i = 0; i < 2; i++)
        l_98[i] = 0x14100A9DL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_99[i][j] = 0x842DL;
    }
    if (l_35)
    { 
        int8_t l_36 = 0x44L;
        int32_t l_68 = 0xD5547B12L;
        int32_t l_69 = 8L;
        int32_t l_70 = 0x02901D39L;
        int32_t l_74 = (-1L);
        int32_t l_76[2];
        int i;
        for (i = 0; i < 2; i++)
            l_76[i] = 1L;
        if ((((++g_37) && 0xA64AL) <= (safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(6UL, l_36)) < (0x80D8AAF4L < p_10)) , g_21[0][3][0]), 4)) <= 255UL)))))
        { 
            for (p_12.f1 = 0; (p_12.f1 != 27); p_12.f1 = safe_add_func_uint8_t_u_u(p_12.f1, 3))
            { 
                if (g_2[2])
                    break;
                return g_47;
            }
        }
        else
        { 
            int16_t l_53 = 0x87F0L;
            l_53 ^= ((((g_52[1] = (safe_rshift_func_uint8_t_u_s(((p_12.f2 == (((safe_add_func_int64_t_s_s(0x3AAA0C7D0B67C402LL, (((0x5E33AB57C19DE87ALL | p_12.f2) > 0xA6296EF6A07EB839LL) >= (-1L)))) && p_12.f2) & l_36)) | l_35), p_12.f4))) == (-1L)) & 2UL) > l_35);
        }
        for (l_35 = 0; (l_35 <= 28); ++l_35)
        { 
            int32_t l_60 = (-10L);
            int32_t l_62 = 0xB0794679L;
            int32_t l_65 = 1L;
            int32_t l_71 = 2L;
            int32_t l_72[1];
            uint64_t l_92 = 0x2DC29D91FBEB5A7ELL;
            union U2 l_95[3][4][1] = {{{{0xE83D706802A6C391LL}},{{0xFBB29333D576224DLL}},{{0x04F9F07892551584LL}},{{0xCC98A5ECB2B9DCA8LL}}},{{{0x04F9F07892551584LL}},{{0xFBB29333D576224DLL}},{{0xE83D706802A6C391LL}},{{0xFBB29333D576224DLL}}},{{{0x04F9F07892551584LL}},{{0xCC98A5ECB2B9DCA8LL}},{{0x04F9F07892551584LL}},{{0xFBB29333D576224DLL}}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_72[i] = 0x2BE4639AL;
            if ((l_62 &= (safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_60, 249UL)), ((+(((((((p_12.f1 | (p_12.f2 = g_34[2].f1)) > p_13) & 0xE546L) != l_35) > 6UL) | l_35) || p_13)) > g_4)))))
            { 
                int16_t l_64 = (-4L);
                int32_t l_73 = 5L;
                int32_t l_77 = 0L;
                int32_t l_78 = 0x492C6236L;
                int32_t l_79 = 0xB8DC093CL;
                int32_t l_80[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_80[i] = 1L;
                ++l_81;
                l_72[0] = (safe_lshift_func_uint16_t_u_u((0xBD5EL && p_13), (246UL ^ ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(g_21[0][3][0], 7)), g_2[1])) > 0UL))));
            }
            else
            { 
                l_92 = p_13;
                g_21[0][1][0] = (l_70 >= 3L);
            }
            if (g_2[3])
                continue;
            for (p_12.f4 = 0; (p_12.f4 < (-22)); --p_12.f4)
            { 
                return l_95[0][3][0];
            }
        }
    }
    else
    { 
        return g_47;
    }
    --l_99[0][0];
    for (l_67 = 29; (l_67 <= 29); l_67 = safe_add_func_int32_t_s_s(l_67, 4))
    { 
        uint32_t l_113[1];
        int i;
        for (i = 0; i < 1; i++)
            l_113[i] = 0xBAF00BCFL;
        l_104--;
        for (p_12.f3 = 8; (p_12.f3 < 20); ++p_12.f3)
        { 
            for (l_104 = 0; (l_104 >= 54); l_104 = safe_add_func_uint16_t_u_u(l_104, 5))
            { 
                int32_t l_111 = 6L;
                int32_t l_112 = 5L;
                ++l_113[0];
                g_52[2] ^= p_12.f0;
                if (p_12.f2)
                    break;
            }
        }
        return l_116;
    }
    return l_116;
}



static int8_t  func_14(uint8_t  p_15, struct S0  p_16)
{ 
    int8_t l_19 = (-5L);
    int64_t l_20 = 0x8B874BDBAF9EB11DLL;
    int32_t l_22 = 7L;
    struct S0 l_31 = {0L,1UL,0x64L,0xD439L,0x632CAC24L};
    int32_t l_32 = 0x19D6B80FL;
    l_22 &= (((g_2[1] > (l_19 = p_16.f1)) || (g_21[0][3][0] = l_20)) && (p_16.f3 |= g_21[0][3][0]));
    g_21[1][2][1] = (safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(0x658069D1L, 4294967294UL)), ((-1L) > ((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_19 || l_20), l_19)), 0xBFL)) & p_16.f0))));
    g_21[1][2][1] = (((l_31 , (((g_3 != g_2[3]) != (((p_16.f4 = ((g_2[2] <= l_32) <= 0xF0C86797L)) , 0x09B7L) > g_21[0][3][0])) == g_2[4])) < 0L) != g_21[0][3][0]);
    return p_15;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_21[i][j][k], "g_21[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_34[i].f0, "g_34[i].f0", print_hash_value);
        transparent_crc(g_34[i].f1, "g_34[i].f1", print_hash_value);
        transparent_crc(g_34[i].f2, "g_34[i].f2", print_hash_value);
        transparent_crc(g_34[i].f3, "g_34[i].f3", print_hash_value);
        transparent_crc(g_34[i].f4, "g_34[i].f4", print_hash_value);

    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_47.f1, "g_47.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);

    }
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_159[i].f0, "g_159[i].f0", print_hash_value);
        transparent_crc(g_159[i].f2, "g_159[i].f2", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
