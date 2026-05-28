// SPDX-License-Identifier: MIT
// cctest_csmith_ece515a1.c --- cctest case csmith_ece515a1 (csmith seed 3974436257)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe179336b */
/* @exp_ticks 0x157f2 */

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

// Options:   -s 3974436257 -o /tmp/csmith_gen_31v00n2c/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int32_t  f0;
   uint16_t  f1;
   uint16_t  f2;
   int64_t  f3;
   const int32_t  f4;
   uint16_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   uint8_t  f1;
   const uint32_t  f2;
   const int16_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U2 {
   const struct S0  f0;
   uint8_t  f1;
   uint16_t  f2;
};

union U3 {
   int32_t  f0;
   int64_t  f1;
   const uint64_t  f2;
   struct S1  f3;
};


static int32_t g_2 = 0xCB61D225L;
static struct S1 g_10 = {-1L,0xA6L,0xF8B4DFECL,0xE92EL,0xF9150FAEL};
static struct S1 *g_9 = &g_10;
static struct S0 g_23[4][3][7] = {{{{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L},{0L,0UL,0x13F3L,0L,1L,0x2361L},{0xB8600767L,0UL,65531UL,1L,0x8055A548L,65526UL},{-1L,1UL,0UL,0L,0x5F885928L,65534UL},{0x418440ACL,65535UL,65531UL,1L,-1L,0UL},{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L},{-4L,0x3887L,0UL,0x19F56C0C90B22F2ELL,-3L,0UL}},{{-4L,0xAA9CL,0xC73BL,1L,0x90B1C5ADL,65535UL},{-8L,65535UL,0x7AACL,0xBC5F263070B7B202LL,0x5D0C5FD7L,0xDB58L},{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L},{0xC6A332E5L,1UL,6UL,-4L,0x34D1CD05L,0x9419L},{-4L,0x3887L,0UL,0x19F56C0C90B22F2ELL,-3L,0UL},{0xC6A332E5L,1UL,6UL,-4L,0x34D1CD05L,0x9419L},{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L}},{{0x1B98B5DBL,65535UL,0xD8A5L,0x089A473F190218FCLL,3L,0x08E6L},{0x1B98B5DBL,65535UL,0xD8A5L,0x089A473F190218FCLL,3L,0x08E6L},{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L},{0x004527F8L,65535UL,0xFA32L,0xBB2F22DDF81C58C9LL,0x9652FB00L,0x4755L},{0x37D437F1L,0UL,1UL,0xE45661C443818264LL,0x9248E6BAL,0x055AL},{0x2502870BL,1UL,0x9640L,0x9A3E2BE8CA404523LL,0x30AE734FL,65530UL},{-1L,7UL,65535UL,0xC3B36352B7283D34LL,0L,0xCD02L}}},{{{0L,0xE709L,0x62D4L,1L,0L,1UL},{1L,0x4064L,0UL,0x7C93E255F80954C1LL,0x2F0819D5L,0x33B1L},{0xB8600767L,0UL,65531UL,1L,0x8055A548L,65526UL},{0x37D437F1L,0UL,1UL,0xE45661C443818264LL,0x9248E6BAL,0x055AL},{0x1B98B5DBL,65535UL,0xD8A5L,0x089A473F190218FCLL,3L,0x08E6L},{-7L,0x5126L,0x0673L,0xEFD7F9B64A474477LL,1L,0UL},{-8L,65535UL,0x7AACL,0xBC5F263070B7B202LL,0x5D0C5FD7L,0xDB58L}},{{0x5E53F01EL,1UL,65535UL,0x74C19FD8DD93F870LL,0x65522591L,8UL},{0x418440ACL,65535UL,65531UL,1L,-1L,0UL},{0xC6A332E5L,1UL,6UL,-4L,0x34D1CD05L,0x9419L},{1L,0x4064L,0UL,0x7C93E255F80954C1LL,0x2F0819D5L,0x33B1L},{0x37D437F1L,0UL,1UL,0xE45661C443818264LL,0x9248E6BAL,0x055AL},{-4L,1UL,1UL,0x546D79C1F62131ACLL,0L,0UL},{0x418440ACL,65535UL,65531UL,1L,-1L,0UL}},{{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L},{-4L,0x3887L,0UL,0x19F56C0C90B22F2ELL,-3L,0UL},{1L,0x337BL,0x7F96L,0x5FF7D1D410A02D52LL,-1L,0x8A32L},{1L,0x337BL,0x7F96L,0x5FF7D1D410A02D52LL,-1L,0x8A32L},{-4L,0x3887L,0UL,0x19F56C0C90B22F2ELL,-3L,0UL},{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L},{0x418440ACL,65535UL,65531UL,1L,-1L,0UL}}},{{{-4L,1UL,1UL,0x546D79C1F62131ACLL,0L,0UL},{0x37D437F1L,0UL,1UL,0xE45661C443818264LL,0x9248E6BAL,0x055AL},{1L,0x4064L,0UL,0x7C93E255F80954C1LL,0x2F0819D5L,0x33B1L},{0xC6A332E5L,1UL,6UL,-4L,0x34D1CD05L,0x9419L},{0L,0xE709L,0x62D4L,1L,0L,1UL},{1L,0x337BL,0x7F96L,0x5FF7D1D410A02D52LL,-1L,0x8A32L},{-4L,1UL,1UL,0x546D79C1F62131ACLL,0L,0UL}},{{1L,0x4064L,0UL,0x7C93E255F80954C1LL,0x2F0819D5L,0x33B1L},{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L},{-4L,0xAA9CL,0xC73BL,1L,0x90B1C5ADL,65535UL},{-8L,3UL,0x493AL,-8L,2L,0x913AL},{0x5E53F01EL,1UL,65535UL,0x74C19FD8DD93F870LL,0x65522591L,8UL},{0x37D437F1L,0UL,1UL,0xE45661C443818264LL,0x9248E6BAL,0x055AL},{-8L,65535UL,0x7AACL,0xBC5F263070B7B202LL,0x5D0C5FD7L,0xDB58L}},{{0x33A9025BL,0xD6B1L,0x8487L,0x254764FE605A4206LL,0x719EFCC7L,0xFDDDL},{-4L,0xAA9CL,0xC73BL,1L,0x90B1C5ADL,65535UL},{0x418440ACL,65535UL,65531UL,1L,-1L,0UL},{0xE1243B3BL,1UL,0xBBD0L,-1L,0xEC10C1A6L,65535UL},{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L},{0xFEEA102AL,2UL,0xEE74L,0L,0x0CFC2012L,0x6394L},{0xE1243B3BL,1UL,0xBBD0L,-1L,0xEC10C1A6L,65535UL}}},{{{0xB8600767L,0UL,65531UL,1L,0x8055A548L,65526UL},{0x1B98B5DBL,65535UL,0xD8A5L,0x089A473F190218FCLL,3L,0x08E6L},{0xB8600767L,0UL,65531UL,1L,0x8055A548L,65526UL},{0xE1243B3BL,1UL,0xBBD0L,-1L,0xEC10C1A6L,65535UL},{-4L,1UL,1UL,0x546D79C1F62131ACLL,0L,0UL},{-1L,1UL,0UL,0L,0x5F885928L,65534UL},{0x1B98B5DBL,65535UL,0xD8A5L,0x089A473F190218FCLL,3L,0x08E6L}},{{0xE1243B3BL,1UL,0xBBD0L,-1L,0xEC10C1A6L,65535UL},{0L,0xE709L,0x62D4L,1L,0L,1UL},{1L,1UL,1UL,0x397BDE5156BE8236LL,0x11F0B9F5L,0xB171L},{-8L,3UL,0x493AL,-8L,2L,0x913AL},{-7L,0x5126L,0x0673L,0xEFD7F9B64A474477LL,1L,0UL},{0xE1243B3BL,1UL,0xBBD0L,-1L,0xEC10C1A6L,65535UL},{0x2502870BL,1UL,0x9640L,0x9A3E2BE8CA404523LL,0x30AE734FL,65530UL}},{{0x004527F8L,65535UL,0xFA32L,0xBB2F22DDF81C58C9LL,0x9652FB00L,0x4755L},{0x5E53F01EL,1UL,65535UL,0x74C19FD8DD93F870LL,0x65522591L,8UL},{-4L,1UL,1UL,0x546D79C1F62131ACLL,0L,0UL},{0xB8600767L,0UL,65531UL,1L,0x8055A548L,65526UL},{0x2502870BL,1UL,0x9640L,0x9A3E2BE8CA404523LL,0x30AE734FL,65530UL},{-1L,1UL,0UL,0L,0x5F885928L,65534UL},{-4L,0xAA9CL,0xC73BL,1L,0x90B1C5ADL,65535UL}}}};
static int8_t g_53 = 8L;
static int64_t *g_62 = (void*)0;
static int64_t *g_64 = (void*)0;
static uint8_t g_68 = 0UL;
static int32_t *g_75 = &g_2;
static int32_t **g_74 = &g_75;
static int8_t g_88 = 0x0AL;
static int64_t g_101[6] = {0L,1L,0L,0L,1L,0L};
static int32_t g_104[1][4][7] = {{{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}}};
static uint32_t g_106 = 0UL;
static union U2 g_117 = {{-7L,0x6C9CL,0x765AL,0L,0x8784709BL,0UL}};
static uint32_t g_138 = 4294967290UL;
static uint8_t g_156 = 0x4DL;
static union U3 g_160 = {0xC9672B4DL};
static int8_t *g_168 = &g_88;
static uint64_t g_191 = 0x640D2D85689E5FA9LL;
static uint8_t *g_196 = &g_68;
static uint8_t **g_195 = &g_196;
static const int16_t *g_207 = (void*)0;
static uint16_t g_213 = 1UL;
static int64_t **g_217 = &g_62;
static int64_t *** const g_216 = &g_217;
static uint16_t g_231 = 0x48ACL;
static int8_t g_244 = 0L;
static uint32_t *g_249 = &g_138;
static uint32_t **g_248 = &g_249;
static uint8_t g_251 = 5UL;
static uint8_t g_308 = 0x25L;
static const struct S1 g_332 = {0L,0x11L,4294967290UL,0L,4L};
static const int32_t *g_393 = &g_10.f4;
static int32_t g_396 = 1L;
static uint32_t g_397 = 0xCF334D77L;
static int16_t g_416 = 0x739FL;
static int16_t g_418 = 0xD95FL;
static uint8_t g_419[7] = {0x06L,0x06L,0x5EL,0x06L,0x06L,0x5EL,0x06L};
static uint16_t g_459 = 65535UL;
static uint16_t g_471 = 0xB883L;
static uint8_t g_588 = 1UL;
static uint64_t g_618 = 18446744073709551615UL;
static int8_t g_673 = 0x20L;
static int8_t g_674 = (-1L);
static uint32_t g_675 = 4UL;
static uint32_t ***g_716 = &g_248;
static int32_t **g_739 = &g_75;
static const int8_t **g_759 = (void*)0;
static const int8_t *** const g_758 = &g_759;
static int64_t g_768 = 0x8386662F880C4392LL;
static uint16_t g_769 = 0x9ABAL;
static uint16_t * const g_773 = &g_213;
static uint16_t * const *g_772 = &g_773;
static uint64_t *g_782 = &g_618;
static int8_t g_786 = (-2L);
static uint8_t g_790 = 255UL;
static uint32_t g_795 = 0x5D4566B8L;
static uint32_t g_828 = 18446744073709551608UL;
static int8_t g_834 = 0L;
static uint16_t g_835 = 0UL;
static struct S0 g_949 = {0L,65535UL,7UL,-7L,-1L,0x2E2AL};
static struct S0 *g_948[4][4] = {{&g_23[0][2][3],(void*)0,(void*)0,&g_23[0][2][3]},{(void*)0,&g_23[0][2][3],(void*)0,(void*)0},{&g_23[0][2][3],&g_23[0][2][3],&g_949,&g_23[0][2][3]},{&g_23[0][2][3],(void*)0,(void*)0,&g_23[0][2][3]}};
static union U3 **g_997 = (void*)0;
static uint16_t g_1004 = 65527UL;
static int64_t g_1006[2] = {0x879AC0B571ADFD3DLL,0x879AC0B571ADFD3DLL};
static uint32_t g_1024[7][2][2] = {{{0xEAD64771L,0xBFC3A0B7L},{18446744073709551611UL,0xC484D023L}},{{18446744073709551611UL,0xBFC3A0B7L},{0xEAD64771L,0xEAD64771L}},{{0xBFC3A0B7L,18446744073709551611UL},{0xC484D023L,18446744073709551611UL}},{{0xBFC3A0B7L,0xEAD64771L},{0xEAD64771L,0xBFC3A0B7L}},{{18446744073709551611UL,0xC484D023L},{18446744073709551611UL,0xBFC3A0B7L}},{{0xEAD64771L,0xEAD64771L},{0xBFC3A0B7L,18446744073709551611UL}},{{0xC484D023L,18446744073709551611UL},{0xBFC3A0B7L,0xEAD64771L}}};
static union U2 g_1048 = {{-1L,0x927AL,65531UL,2L,0L,65527UL}};
static uint8_t g_1091 = 8UL;
static int32_t g_1128 = 0xD1B97506L;
static int64_t g_1182 = 0L;
static int8_t g_1189 = 0x3CL;
static int16_t g_1191 = 1L;
static int8_t g_1192[7][4][5] = {{{0xFCL,4L,0L,0xA2L,(-3L)},{9L,0x31L,0x50L,2L,0x50L},{(-3L),0x2CL,1L,0x3EL,0x84L},{9L,1L,0xFFL,3L,3L}},{{0xFCL,0xF6L,0xFCL,9L,0L},{0xFFL,1L,9L,(-9L),0x04L},{1L,0x2CL,(-3L),0x00L,0xFCL},{0x50L,0x31L,9L,0x04L,1L}},{{0L,4L,0xFCL,4L,0L},{0x31L,(-9L),0xFFL,0x04L,(-9L)},{(-8L),0xA2L,1L,0x00L,0xDAL},{3L,9L,0x50L,(-9L),(-9L)}},{{4L,0x00L,0L,9L,0L},{(-9L),2L,(-9L),(-9L),0x50L},{0x30L,0x20L,0xFCL,0xA2L,0xDAL},{(-9L),0x04L,(-9L),9L,1L}},{{0xFCL,0x20L,0x30L,0x00L,0x84L},{(-9L),2L,2L,(-9L),(-9L)},{(-8L),0x2CL,0x30L,2L,0L},{0xFFL,0x78L,(-9L),0x78L,0xFFL}},{{(-3L),0x00L,0xFCL,2L,0x9CL},{3L,0x31L,(-9L),(-9L),0x31L},{0xDAL,0xF6L,(-8L),0x00L,0x9CL},{0x78L,(-9L),0xFFL,9L,0xFFL}},{{0x9CL,9L,(-3L),0xA2L,0L},{0x78L,0x50L,3L,(-9L),(-9L)},{0xDAL,0xC1L,0xDAL,4L,0x84L},{3L,0x50L,0x78L,0x31L,1L}}};
static int32_t g_1193 = 0x4F135097L;
static int8_t g_1194 = 0x88L;
static uint16_t g_1195 = 0xE157L;
static int16_t g_1274 = 0xD7A9L;
static int16_t g_1275 = 0xBDFFL;
static int32_t g_1276 = (-5L);
static int16_t g_1278 = 0xB56EL;
static int16_t g_1279[6] = {0xE527L,0xE527L,0xE527L,0xE527L,0xE527L,0xE527L};
static uint32_t g_1281 = 1UL;
static int8_t **g_1287[6][5] = {{&g_168,(void*)0,&g_168,(void*)0,&g_168},{(void*)0,(void*)0,&g_168,&g_168,(void*)0},{&g_168,(void*)0,&g_168,(void*)0,&g_168},{(void*)0,&g_168,&g_168,(void*)0,(void*)0},{&g_168,(void*)0,&g_168,(void*)0,&g_168},{(void*)0,(void*)0,&g_168,&g_168,(void*)0}};
static int8_t ***g_1286 = &g_1287[1][1];
static uint8_t g_1289 = 250UL;
static uint64_t g_1306[1][4][1] = {{{18446744073709551606UL},{2UL},{18446744073709551606UL},{2UL}}};
static int32_t g_1318 = 6L;
static int32_t g_1319 = 0xE32E8CB7L;
static uint16_t g_1348[7] = {0x9FA2L,2UL,0x9FA2L,0x9FA2L,2UL,0x9FA2L,0x9FA2L};
static int8_t g_1359[4][5][6] = {{{0L,0xEFL,(-3L),(-8L),(-8L),(-3L)},{0x24L,0x24L,0xC8L,1L,(-8L),(-7L)},{(-8L),0xEFL,(-5L),1L,0xEFL,0xC8L},{0x24L,(-8L),(-5L),(-8L),0x24L,(-7L)},{0L,(-8L),0xC8L,0L,0xEFL,(-3L)}},{{0L,0xEFL,(-3L),(-8L),(-8L),(-3L)},{0x24L,0x24L,0xC8L,1L,(-8L),(-7L)},{(-8L),0xEFL,(-5L),1L,0xEFL,0xC8L},{0x24L,(-8L),(-5L),(-8L),0x24L,(-7L)},{0L,(-8L),0xC8L,0L,0xEFL,(-3L)}},{{0L,0xEFL,(-3L),(-8L),(-8L),(-3L)},{0x24L,0x24L,0xC8L,0x6DL,0xEEL,(-8L)},{0xEEL,0x43L,0xEFL,0x6DL,0x43L,0L},{0x5DL,0xEEL,0xEFL,0xEEL,0x5DL,(-8L)},{6L,0xEEL,0L,6L,0x43L,1L}},{{6L,0x43L,1L,0xEEL,0xEEL,1L},{0x5DL,0x5DL,0L,0x6DL,0xEEL,(-8L)},{0xEEL,0x43L,0xEFL,0x6DL,0x43L,0L},{0x5DL,0xEEL,0xEFL,0xEEL,0x5DL,(-8L)},{6L,0xEEL,0L,6L,0x43L,1L}}};
static int32_t g_1360 = 0xFD82171FL;
static int16_t g_1362 = 1L;
static int32_t g_1363 = (-1L);
static int32_t g_1364 = 1L;
static int64_t **g_1423[3] = {(void*)0,(void*)0,(void*)0};
static struct S0 ***g_1434 = (void*)0;
static struct S0 ****g_1433 = &g_1434;
static uint8_t ***g_1453 = &g_195;
static uint8_t ****g_1452 = &g_1453;
static union U2 *g_1477 = &g_117;
static union U2 **g_1476[3] = {&g_1477,&g_1477,&g_1477};
static union U2 ***g_1475[5] = {&g_1476[0],&g_1476[0],&g_1476[0],&g_1476[0],&g_1476[0]};
static int8_t g_1506 = 0xDBL;
static uint16_t g_1529 = 0x0B8CL;
static uint64_t g_1551[1] = {0UL};
static uint16_t g_1565 = 1UL;
static struct S1 **g_1638 = &g_9;
static struct S1 ***g_1637 = &g_1638;
static uint32_t g_1702 = 0xAD2FF1DCL;
static int64_t ****g_1708 = (void*)0;
static int64_t *****g_1707 = &g_1708;
static struct S1 g_1722 = {0x94EFL,0xE9L,0x3949F30BL,-1L,3L};
static int16_t g_1742 = 0xBFAEL;
static uint32_t g_1743 = 0x064CA486L;
static struct S0 * const *g_1751 = &g_948[2][3];
static struct S0 * const **g_1750 = &g_1751;
static struct S0 * const ***g_1749 = &g_1750;
static struct S0 * const ****g_1748 = &g_1749;
static int64_t g_1773 = 1L;
static uint16_t **g_1838 = (void*)0;
static uint16_t g_1846 = 65535UL;
static int64_t g_1886 = 0x1E26D45215759370LL;
static int8_t g_1888 = 0x23L;
static uint8_t g_1889[6][2][3] = {{{255UL,255UL,0x45L},{253UL,1UL,0xEEL}},{{255UL,255UL,0x45L},{253UL,1UL,0xEEL}},{{255UL,255UL,0x45L},{253UL,1UL,0xEEL}},{{255UL,255UL,0x45L},{253UL,1UL,0xEEL}},{{255UL,255UL,0x45L},{253UL,1UL,0xEEL}},{{255UL,255UL,0x45L},{253UL,1UL,0xEEL}}};
static union U3 g_1897 = {-1L};
static union U3 g_1901[5] = {{2L},{2L},{2L},{2L},{2L}};
static union U3 *g_1900 = &g_1901[2];
static union U3 g_1903[6] = {{0x738DCE5BL},{0x395FBD54L},{0x738DCE5BL},{0x738DCE5BL},{0x395FBD54L},{0x738DCE5BL}};
static union U3 *g_1902 = &g_1903[3];
static union U3 *g_1904 = (void*)0;
static int64_t ***g_1947 = &g_217;
static int64_t **** const g_1946 = &g_1947;
static int64_t **** const *g_1945 = &g_1946;
static int64_t ***g_1950 = &g_1423[2];
static int64_t **** const g_1949 = &g_1950;
static int64_t **** const *g_1948[4][7][5] = {{{&g_1949,&g_1946,&g_1949,&g_1949,&g_1946},{&g_1949,&g_1946,&g_1946,&g_1949,&g_1949},{(void*)0,(void*)0,(void*)0,&g_1949,&g_1946},{&g_1949,&g_1949,&g_1949,&g_1949,&g_1949},{(void*)0,&g_1949,(void*)0,&g_1946,(void*)0},{&g_1949,&g_1949,&g_1949,&g_1949,&g_1949},{&g_1949,(void*)0,(void*)0,&g_1949,(void*)0}},{{&g_1949,&g_1949,&g_1946,&g_1946,&g_1949},{(void*)0,(void*)0,&g_1949,&g_1946,&g_1946},{&g_1946,&g_1949,&g_1946,&g_1946,&g_1949},{&g_1946,&g_1949,&g_1946,&g_1949,&g_1946},{&g_1946,&g_1949,&g_1949,&g_1949,&g_1949},{(void*)0,(void*)0,&g_1946,&g_1946,&g_1946},{&g_1949,&g_1946,&g_1946,&g_1949,&g_1949}},{{&g_1949,&g_1946,&g_1949,&g_1949,&g_1946},{&g_1949,&g_1946,&g_1946,&g_1949,&g_1949},{(void*)0,&g_1946,&g_1946,&g_1946,(void*)0},{&g_1946,&g_1946,&g_1949,&g_1946,&g_1946},{&g_1946,(void*)0,&g_1946,&g_1949,&g_1946},{&g_1949,&g_1949,&g_1949,&g_1946,&g_1949},{(void*)0,&g_1946,&g_1946,(void*)0,&g_1946}},{{&g_1946,&g_1946,&g_1949,&g_1949,&g_1946},{&g_1946,&g_1946,&g_1946,(void*)0,(void*)0},{&g_1949,&g_1949,&g_1949,&g_1949,&g_1949},{&g_1949,(void*)0,(void*)0,(void*)0,&g_1949},{&g_1949,&g_1946,&g_1949,&g_1946,&g_1949},{&g_1946,&g_1946,(void*)0,&g_1949,&g_1949},{&g_1946,&g_1949,&g_1949,&g_1946,&g_1949}}};
static const uint32_t ***g_2018 = (void*)0;
static const uint32_t ****g_2017 = &g_2018;
static int32_t g_2038 = (-1L);
static union U2 ** const **g_2116 = (void*)0;
static union U2 ** const ***g_2115 = &g_2116;
static int32_t g_2133 = 0xB8FCC963L;
static int8_t ****g_2161 = &g_1286;
static uint32_t **g_2183[4][2] = {{&g_249,&g_249},{&g_249,&g_249},{&g_249,&g_249},{&g_249,&g_249}};
static uint32_t ***g_2182 = &g_2183[2][1];
static int16_t g_2277 = 0x5D49L;
static union U2 g_2282 = {{0x386C2725L,65533UL,0xBA6BL,0x0B813982E64856DCLL,-1L,6UL}};
static const struct S0 *g_2387[7] = {&g_949,&g_949,(void*)0,&g_949,&g_949,(void*)0,&g_949};
static int32_t g_2525[5] = {3L,3L,3L,3L,3L};
static uint32_t g_2526 = 0x9336F86DL;
static union U2 * const g_2608 = (void*)0;
static union U2 * const *g_2607 = &g_2608;
static union U2 *g_2610 = &g_1048;
static union U2 **g_2609[4][1][7] = {{{&g_2610,(void*)0,&g_1477,&g_1477,&g_1477,(void*)0,&g_2610}},{{&g_2610,&g_2610,&g_2610,&g_2610,&g_2610,&g_2610,&g_2610}},{{&g_2610,(void*)0,&g_1477,&g_1477,&g_1477,(void*)0,&g_2610}},{{&g_2610,&g_2610,&g_2610,&g_2610,&g_2610,&g_2610,&g_2610}}};
static const struct S1 g_2628 = {0x84A7L,1UL,0x20E4E1FBL,0xBD5DL,-7L};
static const struct S1 *g_2627 = &g_2628;



static uint32_t  func_1(void);
static struct S1 * func_7(struct S1 * p_8);
static union U3  func_11(struct S1 * p_12, uint32_t  p_13, struct S1 * p_14, const struct S1 * p_15);
static union U3  func_16(struct S1 * p_17);
static struct S1 * func_18(const struct S1 * p_19, uint32_t  p_20);
static const struct S1 * func_21(struct S0  p_22);
static int32_t  func_24(int64_t  p_25);
static uint64_t  func_26(struct S1 * p_27, const struct S1 * p_28);




static uint32_t  func_1(void)
{ 
    int8_t l_3 = 7L;
    uint64_t l_6[6][1][3] = {{{3UL,0xC2DA8AFC1DA7BC99LL,0xC2DA8AFC1DA7BC99LL}},{{0x58900FDB6968939FLL,1UL,1UL}},{{3UL,0xC2DA8AFC1DA7BC99LL,0xC2DA8AFC1DA7BC99LL}},{{0x58900FDB6968939FLL,1UL,1UL}},{{3UL,0xC2DA8AFC1DA7BC99LL,0xC2DA8AFC1DA7BC99LL}},{{0x58900FDB6968939FLL,1UL,1UL}}};
    uint16_t l_1827 = 0UL;
    struct S1 ****l_1839 = &g_1637;
    uint16_t l_1847 = 0UL;
    const int16_t l_1857 = 0L;
    int32_t l_1883 = 1L;
    int32_t l_1884[1];
    uint32_t l_1906 = 18446744073709551615UL;
    const uint64_t l_1933 = 0x721AAB208F40546BLL;
    int32_t l_1962 = (-4L);
    int32_t l_1979 = 0x5392AEE9L;
    int64_t * const *l_2001 = &g_64;
    uint32_t l_2003 = 0UL;
    int32_t l_2049[7][1] = {{0x1823E477L},{(-1L)},{0x1823E477L},{0x1823E477L},{(-1L)},{0x1823E477L},{0x1823E477L}};
    struct S0 *****l_2053 = &g_1433;
    union U2 ****l_2084[6][3] = {{&g_1475[3],&g_1475[2],&g_1475[3]},{&g_1475[3],&g_1475[3],&g_1475[2]},{&g_1475[3],&g_1475[3],&g_1475[3]},{&g_1475[2],&g_1475[3],&g_1475[3]},{&g_1475[3],&g_1475[3],&g_1475[3]},{&g_1475[2],&g_1475[2],&g_1475[3]}};
    int64_t l_2103 = 0x8F068FFE48E1B120LL;
    union U2 l_2146 = {{0x10F6494DL,0xAAE1L,0UL,-4L,0L,0x7B61L}};
    const uint64_t *l_2153 = &g_1551[0];
    const uint64_t **l_2152 = &l_2153;
    int8_t l_2154 = 0x28L;
    int8_t ****l_2159 = &g_1286;
    int8_t *****l_2160[1][6] = {{&l_2159,&l_2159,&l_2159,&l_2159,&l_2159,&l_2159}};
    uint32_t l_2168 = 0x17E9798FL;
    uint64_t l_2212 = 18446744073709551609UL;
    int8_t l_2232[5];
    int16_t l_2236 = 2L;
    struct S0 l_2249 = {0x61A9B3A6L,65528UL,1UL,-1L,0xE85EEDEAL,0x567BL};
    uint8_t **l_2274[5][2][1] = {{{&g_196},{&g_196}},{{&g_196},{&g_196}},{{&g_196},{&g_196}},{{&g_196},{&g_196}},{{&g_196},{&g_196}}};
    uint32_t **l_2338 = &g_249;
    uint32_t l_2355 = 0xDB91C9C5L;
    int16_t l_2360 = 0x4FD7L;
    int8_t l_2397 = 1L;
    int32_t l_2441[6][2];
    union U3 *l_2477 = &g_1903[3];
    union U2 *l_2480[4][4][3] = {{{&g_1048,&g_1048,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_117,(void*)0},{(void*)0,&g_117,(void*)0}},{{&g_1048,(void*)0,(void*)0},{&g_1048,&g_1048,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_117,(void*)0}},{{(void*)0,&g_1048,(void*)0},{(void*)0,(void*)0,&g_117},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_1048,&g_117},{(void*)0,&g_1048,(void*)0},{(void*)0,(void*)0,&g_117},{(void*)0,(void*)0,(void*)0}}};
    int16_t l_2502 = 0L;
    union U2 * const *l_2605 = &l_2480[0][2][2];
    union U2 * const **l_2606[3];
    uint16_t ***l_2624 = (void*)0;
    int32_t l_2629 = 0L;
    int32_t *l_2630 = &g_160.f0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1884[i] = 0x88E2563DL;
    for (i = 0; i < 5; i++)
        l_2232[i] = 0x11L;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_2441[i][j] = (-1L);
    }
    for (i = 0; i < 3; i++)
        l_2606[i] = &l_2605;
    if ((g_2 & (g_2 && l_3)))
    { 
        int32_t l_1796 = 0xCE28787BL;
        uint16_t l_1860 = 65529UL;
        int16_t *l_1882 = &g_1279[4];
        int64_t ** const l_1927 = (void*)0;
        struct S0 l_1934[2] = {{0L,0x9874L,0xC617L,9L,0xE098C312L,0x8E06L},{0L,0x9874L,0xC617L,9L,0xE098C312L,0x8E06L}};
        union U2 ***l_1993 = &g_1476[0];
        const uint64_t l_2007 = 0x07F0608E24CDBC1DLL;
        int32_t l_2023 = 1L;
        uint64_t l_2024 = 0UL;
        int i;
        for (l_3 = 0; (l_3 >= (-21)); l_3 = safe_sub_func_uint8_t_u_u(l_3, 1))
        { 
            int64_t l_1828 = 0L;
            uint16_t *l_1836[5][7][7] = {{{&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565},{&g_1348[6],&g_1348[6],&g_1565,&g_1348[6],&g_1348[6],&g_1565,&g_1348[6]},{&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6]},{&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565},{&g_1348[6],&g_1348[6],&g_1565,&g_1348[6],&g_1348[6],&g_1565,&g_1348[6]},{&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6]},{&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565}},{{&g_1348[6],&g_1348[6],&g_1565,&g_1348[6],&g_1348[6],&g_1565,&g_1348[6]},{&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6]},{&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565},{&g_1348[6],&g_1348[6],&g_1565,&g_1348[6],&g_1348[6],&g_1565,&g_1348[6]},{&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6]},{&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565},{&g_1348[6],&g_1348[6],&g_1565,&g_1348[6],&g_1348[6],&g_1565,&g_1348[6]}},{{&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6]},{&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565},{&g_1348[6],&g_1348[6],&g_1565,&g_1348[6],&g_1348[6],&g_1565,&g_1348[6]},{&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6]},{&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565},{&g_1348[6],&g_1348[6],&g_1565,&g_1348[6],&g_1348[6],&g_1565,&g_1348[6]},{&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6]}},{{&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565},{&g_1348[6],&g_1348[6],&g_1565,&g_1348[6],&g_1348[6],&g_1565,&g_1348[6]},{&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1565},{&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565},{&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565},{&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565},{&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565}},{{&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565},{&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565},{&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565},{&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565},{&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565},{&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565,&g_1565},{&g_1565,&g_1565,&g_1348[6],&g_1565,&g_1565,&g_1348[6],&g_1565}}};
            uint16_t **l_1835 = &l_1836[1][2][6];
            struct S0 **l_1854 = (void*)0;
            struct S0 ***l_1853 = &l_1854;
            int32_t l_1859 = 0x40438D5CL;
            int32_t l_1885 = 0L;
            int32_t l_1887 = 1L;
            union U3 *l_1896[7][3][3] = {{{&g_1897,&g_160,&g_160},{&g_160,&g_1897,&g_1897},{&g_160,&g_160,&g_160}},{{&g_1897,&g_1897,&g_1897},{&g_160,&g_160,&g_1897},{&g_160,&g_1897,&g_1897}},{{&g_1897,&g_160,&g_160},{&g_160,&g_1897,&g_1897},{&g_160,&g_160,&g_160}},{{&g_1897,&g_1897,&g_1897},{&g_160,&g_160,&g_1897},{&g_160,&g_1897,&g_1897}},{{&g_1897,&g_160,&g_160},{&g_160,&g_1897,&g_1897},{&g_160,&g_160,&g_160}},{{&g_1897,&g_1897,&g_1897},{&g_160,&g_160,&g_1897},{&g_160,&g_1897,&g_1897}},{{&g_1897,&g_160,&g_160},{&g_160,&g_1897,&g_1897},{&g_160,&g_160,&g_160}}};
            union U3 *l_1898 = &g_1897;
            int i, j, k;
            for (g_2 = 0; (g_2 <= 0); g_2 += 1)
            { 
                (**g_1637) = func_7(g_9);
                for (g_1722.f0 = 0; (g_1722.f0 >= 0); g_1722.f0 -= 1)
                { 
                    int i, j, k;
                    return l_6[(g_1722.f0 + 5)][g_1722.f0][(g_1722.f0 + 2)];
                }
            }
        }
        for (g_828 = 0; (g_828 != 27); ++g_828)
        { 
            int8_t l_1961 = 0L;
            uint32_t l_1981 = 0xA7CC196DL;
            int32_t l_1986 = 1L;
            uint16_t l_1987 = 0x4F92L;
            union U2 l_2006 = {{-4L,0x1264L,0x4624L,0xB575DFB472C7BB8DLL,-1L,0x1008L}};
            int32_t l_2010 = (-1L);
            const uint32_t ****l_2019[7][5] = {{&g_2018,&g_2018,&g_2018,&g_2018,&g_2018},{&g_2018,&g_2018,&g_2018,&g_2018,&g_2018},{&g_2018,&g_2018,&g_2018,&g_2018,&g_2018},{&g_2018,&g_2018,&g_2018,&g_2018,&g_2018},{&g_2018,&g_2018,&g_2018,&g_2018,&g_2018},{&g_2018,&g_2018,&g_2018,&g_2018,&g_2018},{&g_2018,&g_2018,&g_2018,&g_2018,&g_2018}};
            uint16_t *l_2020 = &g_1195;
            int32_t *l_2021 = &l_1884[0];
            int32_t *l_2022[2][2][3] = {{{&l_1986,&g_1318,&l_1986},{&l_1962,&l_1962,&l_1962}},{{&l_1986,&g_1318,&l_1986},{&l_1962,&l_1962,&l_1962}}};
            int i, j, k;
            if ((**g_739))
            { 
                int64_t l_1938[3][5] = {{6L,0x5B985CF5BBE8FB4ELL,0L,0L,0L},{0x5B985CF5BBE8FB4ELL,0x5B985CF5BBE8FB4ELL,0L,0L,0L},{0x5B985CF5BBE8FB4ELL,0x5B985CF5BBE8FB4ELL,0L,0L,0L}};
                int i, j;
                for (g_138 = 0; (g_138 <= 1); g_138 += 1)
                { 
                    (**g_739) = l_1938[2][3];
                    return g_68;
                }
                if ((*g_75))
                    continue;
            }
            else
            { 
                int64_t l_1957 = 0L;
                (**g_74) &= (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((*g_782), (((g_1948[3][4][0] = (g_1945 = &g_1708)) == (void*)0) && (safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s(l_1957, ((((((safe_sub_func_uint16_t_u_u((**g_772), (+((l_1884[0] , l_1839) == (void*)0)))) & l_1961) , (*g_393)) , l_1906) ^ l_1962) | (***g_716)))), l_1961)), g_160.f0))))) | l_1957), (**g_195))), (**g_772)));
            }
            if (((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s(l_1934[1].f4, (safe_mod_func_int8_t_s_s(((*g_168) = (safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(l_1961, l_1962)), ((((safe_add_func_uint8_t_u_u(((*g_782) || ((0x77L <= l_1906) && ((**g_74) >= (*g_393)))), l_1827)) != l_1962) < l_1961) > 1L)))), (***g_1453))))), l_1827)) ^ 4294967290UL), l_1979)) | (***g_1453)), 8UL)) && (*g_249)))
            { 
                int32_t *l_1980[5][2] = {{&l_1883,&l_1883},{&l_1883,(void*)0},{&g_10.f4,&g_10.f4},{(void*)0,&g_10.f4},{&g_10.f4,(void*)0}};
                int i, j;
                l_1981--;
                return g_835;
            }
            else
            { 
                int8_t ****l_1984 = &g_1286;
                int32_t *l_1985[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1985[i] = &g_1901[2].f0;
                (*g_75) = (-1L);
                (*l_1984) = &g_1287[1][1];
                l_1987++;
                for (g_1773 = 0; (g_1773 <= 5); g_1773 += 1)
                { 
                    struct S0 l_1990 = {0x873BA5ACL,0x8426L,0x7BE8L,0x12B37D31FF4A897ALL,-1L,65535UL};
                    const int8_t ***l_2000 = &g_759;
                    const int8_t ****l_1999 = &l_2000;
                    int64_t * const *l_2002 = &g_62;
                    int i;
                    (**g_739) |= (((l_1990 , (safe_rshift_func_uint16_t_u_u(((void*)0 == l_1993), (safe_mul_func_uint16_t_u_u(65530UL, ((((safe_div_func_int64_t_s_s((l_1986 , 9L), (+g_53))) , (void*)0) == l_1999) , 0UL)))))) > (*g_168)) ^ 246UL);
                    l_2002 = l_2001;
                }
                if ((**g_74))
                    continue;
            }
            (*g_739) = (((((****g_1452) &= (((*g_249) = (l_1979 || l_2003)) , ((safe_mul_func_uint8_t_u_u(((l_2006 , ((l_2007 != (*g_782)) & (safe_rshift_func_int8_t_s_u(((((***l_1993) , ((void*)0 != &g_1708)) , 0x1437CCBCL) == 1UL), 0)))) != l_2010), l_1796)) | l_1857))) ^ l_3) < (-7L)) , (*g_74));
            (**g_74) ^= (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(((*g_782) &= (0x1BF839C6L >= ((**g_248) &= l_1934[1].f3))), 1UL)) != 0xB7L), ((***g_1637) , ((*l_2020) = ((*g_773) = ((l_2019[5][1] = g_2017) == &g_2018)))))), l_1884[0]));
            --l_2024;
        }
    }
    else
    { 
        int8_t l_2027 = 0xADL;
        const union U2 *l_2048 = &g_117;
        const union U2 **l_2047 = &l_2048;
        int32_t l_2050 = 0x40C0F945L;
        union U2 * const *l_2130 = &g_1477;
        union U2 * const **l_2129 = &l_2130;
        union U2 * const ***l_2128 = &l_2129;
        union U2 * const ****l_2127 = &l_2128;
        uint64_t **l_2151 = (void*)0;
        if (((l_2027 , (~(l_2003 || (l_1933 | ((***g_1453) = 0x96L))))) , l_2027))
        { 
            uint8_t l_2031 = 0UL;
            int32_t l_2060 = 0x38F035FDL;
            uint8_t l_2061[1][5][4] = {{{250UL,255UL,255UL,250UL},{255UL,250UL,255UL,255UL},{250UL,250UL,5UL,250UL},{250UL,255UL,255UL,250UL},{255UL,250UL,255UL,255UL}}};
            const struct S1 *l_2068 = &g_1722;
            const struct S1 **l_2067 = &l_2068;
            const struct S1 ***l_2066 = &l_2067;
            struct S1 ***l_2069 = &g_1638;
            union U2 ****l_2085[3];
            uint64_t l_2096[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            int16_t l_2108 = 0x2E5AL;
            const uint32_t l_2142 = 3UL;
            uint32_t l_2143 = 1UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_2085[i] = &g_1475[3];
            for (g_949.f2 = (-2); (g_949.f2 >= 56); g_949.f2 = safe_add_func_uint32_t_u_u(g_949.f2, 4))
            { 
                union U2 ***l_2046 = &g_1476[0];
                int32_t l_2051 = 0x0ACCA0FEL;
                int32_t l_2059 = (-10L);
                if (l_2031)
                    break;
                if (((safe_mul_func_uint8_t_u_u(l_2031, (safe_add_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(g_2038, (0x8EA18CF1L ^ ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((~(****g_1452)), ((((*l_2046) = (void*)0) == l_2047) || (l_2049[4][0] | 1L)))) < 1UL), l_2031)) && l_2050), 1)) > 0L)))) <= 18446744073709551615UL) | 255UL), l_2051)))) != (*g_393)))
                { 
                    struct S0 *****l_2052[2][6] = {{&g_1433,&g_1433,(void*)0,&g_1433,&g_1433,(void*)0},{&g_1433,&g_1433,(void*)0,&g_1433,&g_1433,(void*)0}};
                    int i, j;
                    l_2053 = l_2052[0][5];
                    (**g_74) = l_2051;
                    (*l_2047) = (*l_2047);
                }
                else
                { 
                    int32_t *l_2054 = (void*)0;
                    int32_t *l_2055 = (void*)0;
                    int32_t *l_2056 = &g_1903[3].f0;
                    int32_t *l_2057 = (void*)0;
                    int32_t *l_2058[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2058[i] = &g_1897.f0;
                    --l_2061[0][0][1];
                }
                if (((**g_74) = 0x906D3138L))
                { 
                    if ((**g_739))
                        break;
                }
                else
                { 
                    int32_t ***l_2065 = &g_739;
                    int32_t ****l_2064 = &l_2065;
                    if (l_2050)
                        break;
                    (*g_74) = (*g_74);
                    (*l_2064) = &g_74;
                }
            }
lbl_2109:
            if ((((*g_782) |= 18446744073709551615UL) < 0L))
            { 
                uint64_t l_2079[4][7][1] = {{{0xABC166318070289FLL},{0UL},{0UL},{0xABC166318070289FLL},{18446744073709551615UL},{0xB04EE29C51B0088FLL},{0x27B2333BA92DAEF6LL}},{{0xBECB9A395C23B325LL},{0x27B2333BA92DAEF6LL},{0xB04EE29C51B0088FLL},{18446744073709551615UL},{0xABC166318070289FLL},{0UL},{0UL}},{{0xABC166318070289FLL},{18446744073709551615UL},{0xB04EE29C51B0088FLL},{0x27B2333BA92DAEF6LL},{0xBECB9A395C23B325LL},{0x27B2333BA92DAEF6LL},{0xB04EE29C51B0088FLL}},{{18446744073709551615UL},{0xABC166318070289FLL},{0UL},{0UL},{0xABC166318070289FLL},{18446744073709551615UL},{0xB04EE29C51B0088FLL}}};
                int32_t l_2083 = 6L;
                int i, j, k;
                if ((l_2066 != l_2069))
                { 
                    uint32_t l_2072 = 18446744073709551609UL;
                    int32_t *l_2075 = &g_1276;
                    int8_t *l_2082 = &g_1359[2][2][4];
                    l_1883 = (safe_sub_func_int64_t_s_s((((l_2072 >= ((safe_mul_func_int8_t_s_s(((*g_168) = 0x97L), (((*g_74) != l_2075) == (safe_lshift_func_uint8_t_u_s((l_2079[1][1][0] = (!((*g_1748) == (void*)0))), ((*l_2082) = ((safe_mul_func_int16_t_s_s(g_1362, (*l_2075))) == 1UL))))))) >= l_2083)) >= l_2083) , l_2050), 0x9923A881742B8CEFLL));
                }
                else
                { 
                    return g_1360;
                }
            }
            else
            { 
                union U2 *****l_2086[1];
                int32_t l_2087 = (-1L);
                const int32_t l_2106 = 0x0C971FADL;
                int16_t l_2107 = (-3L);
                int i;
                for (i = 0; i < 1; i++)
                    l_2086[i] = &l_2085[2];
                l_2108 = ((((l_2087 = ((*g_773) ^= ((****l_1839) , (l_2084[4][0] != (l_2085[2] = l_2085[2]))))) ^ (safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((l_2096[1] == (((l_2027 != (+(l_1884[0] = (safe_mul_func_int16_t_s_s((!(safe_add_func_int64_t_s_s(l_2103, ((*g_782) ^= ((safe_mul_func_uint16_t_u_u((l_2106 >= 65535UL), 9L)) == l_2106))))), l_2049[4][0]))))) < l_2106) <= 0UL)), g_101[2])), l_2106)) >= l_1827), l_2107)), l_2031))) , (-2L)) < (-2L));
            }
            for (g_1364 = 0; (g_1364 <= 0); g_1364 += 1)
            { 
                int8_t l_2126[5][1][1];
                int8_t l_2131 = 1L;
                struct S0 **l_2132 = &g_948[0][0];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_2126[i][j][k] = (-5L);
                    }
                }
                for (l_2027 = 0; (l_2027 >= 0); l_2027 -= 1)
                { 
                    int16_t l_2110 = 0x569AL;
                    int32_t *l_2111 = &g_1276;
                    if (g_117.f0.f3)
                        goto lbl_2109;
                    (*l_2111) = ((**g_739) = l_2110);
                }
                for (g_1004 = 0; (g_1004 <= 2); g_1004 += 1)
                { 
                    union U2 *l_2112 = (void*)0;
                    union U2 * const *l_2120[2];
                    union U2 * const **l_2119[6] = {&l_2120[1],&l_2120[1],&l_2120[1],&l_2120[1],&l_2120[1],&l_2120[1]};
                    union U2 * const ***l_2121 = &l_2119[5];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2120[i] = &l_2112;
                    (*l_2047) = l_2112;
                    (**g_739) = ((safe_sub_func_uint8_t_u_u(0x98L, (l_2060 = ((((g_2115 = g_2115) == (g_1006[(g_1364 + 1)] , ((((((*l_2121) = l_2119[5]) != (g_1475[3] = &g_1476[0])) , ((***g_1453) ^= ((g_1903[3].f0 | (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((g_1006[(g_1364 + 1)] == 65526UL), l_2050)), (*g_782)))) < l_2126[0][0][0]))) && 0UL) , l_2127))) < l_2126[0][0][0]) != (**g_772))))) >= l_2131);
                    if ((*g_75))
                        break;
                }
                (*l_2132) = (**g_1750);
                return g_1048.f0.f1;
            }
            (**g_74) ^= (l_2031 , (g_2133 > ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((l_2096[1] < l_1883) <= (l_1857 && ((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((-6L) <= (l_2142 & 0xB0L)), g_1048.f0.f3)), 0x8C68A6F7L)) , l_2143))) > l_2031), 2)), 0x7A66L)) & l_6[4][0][0])));
        }
        else
        { 
            return g_2;
        }
        l_2050 = (((safe_mod_func_int64_t_s_s((l_2146 , ((safe_sub_func_int8_t_s_s(((*g_168) = (safe_rshift_func_uint8_t_u_s((l_2027 <= (0x7FL > ((void*)0 != (*g_2115)))), ((l_2151 == l_2152) || l_2027)))), l_2027)) && (*g_782))), l_2103)) > 0xBFL) , 0x7F594E04L);
        return l_2154;
    }
    if ((safe_sub_func_uint64_t_u_u((*g_782), ((safe_mul_func_int8_t_s_s((((****l_1839) , ((g_2161 = l_2159) == &g_1286)) , (((safe_div_func_uint32_t_u_u((l_2146.f0 , (--(***g_716))), (safe_sub_func_uint8_t_u_u(((*g_75) & ((-9L) ^ l_1906)), l_2168)))) , 0xB8L) && 1UL)), l_1884[0])) <= 8L))))
    { 
        uint64_t l_2188 = 18446744073709551610UL;
        int32_t l_2189 = 5L;
        int64_t ****l_2210 = (void*)0;
        uint8_t ****l_2211 = &g_1453;
        union U2 *l_2280 = &g_1048;
        uint32_t * const *l_2296 = &g_249;
        uint32_t * const **l_2295 = &l_2296;
        uint32_t * const ***l_2294 = &l_2295;
        const struct S0 l_2306 = {0x351288DFL,6UL,0x7366L,-1L,0x1099765CL,65533UL};
        uint16_t *l_2332[5][7] = {{&l_2249.f1,&l_1847,&g_23[0][2][3].f5,&g_1004,&g_1529,&g_1529,&g_1529},{(void*)0,&g_1529,&g_1529,(void*)0,&g_231,&g_213,&g_1004},{&g_213,&g_1529,&l_2249.f1,&g_1529,&g_471,&g_231,&l_2249.f2},{&g_1004,&l_1847,&g_213,&g_213,&g_213,&l_1847,&g_1004},{&g_1348[4],&g_213,&l_1847,&l_2249.f2,&g_213,&g_1348[6],&g_1529}};
        union U2 **l_2339 = &l_2280;
        struct S1 *l_2346 = (void*)0;
        int16_t l_2424 = 4L;
        union U3 *l_2472 = &g_1901[2];
        uint32_t l_2515 = 18446744073709551609UL;
        int32_t l_2524 = 0L;
        int i, j;
        for (g_674 = 0; (g_674 > 3); g_674 = safe_add_func_int8_t_s_s(g_674, 4))
        { 
            int32_t *l_2190 = &g_1276;
            int64_t l_2196 = 0x333D4A3875FD569CLL;
            uint32_t *l_2203 = &g_1281;
            int16_t *l_2223 = &g_1279[1];
            union U2 l_2254[3][6] = {{{{-1L,0xEDFDL,0xEFC6L,0x8BDCA640FD9C6AF3LL,0x292045D2L,0x35B1L}},{{0x9807D2D7L,0xDCCFL,65535UL,1L,0x6E27932EL,0xBB36L}},{{0x89626B7DL,0x3B33L,0x498AL,0x2ABEECBFD1975EBDLL,0xEBD2FC5DL,65528UL}},{{0x9807D2D7L,0xDCCFL,65535UL,1L,0x6E27932EL,0xBB36L}},{{-1L,0xEDFDL,0xEFC6L,0x8BDCA640FD9C6AF3LL,0x292045D2L,0x35B1L}},{{0x89626B7DL,0x3B33L,0x498AL,0x2ABEECBFD1975EBDLL,0xEBD2FC5DL,65528UL}}},{{{0x9807D2D7L,0xDCCFL,65535UL,1L,0x6E27932EL,0xBB36L}},{{-1L,0xEDFDL,0xEFC6L,0x8BDCA640FD9C6AF3LL,0x292045D2L,0x35B1L}},{{0x89626B7DL,0x3B33L,0x498AL,0x2ABEECBFD1975EBDLL,0xEBD2FC5DL,65528UL}},{{1L,65529UL,0xCDEAL,0x4333FFF8DBF67796LL,5L,1UL}},{{1L,65529UL,0xCDEAL,0x4333FFF8DBF67796LL,5L,1UL}},{{0x89626B7DL,0x3B33L,0x498AL,0x2ABEECBFD1975EBDLL,0xEBD2FC5DL,65528UL}}},{{{1L,65529UL,0xCDEAL,0x4333FFF8DBF67796LL,5L,1UL}},{{1L,65529UL,0xCDEAL,0x4333FFF8DBF67796LL,5L,1UL}},{{0x89626B7DL,0x3B33L,0x498AL,0x2ABEECBFD1975EBDLL,0xEBD2FC5DL,65528UL}},{{-1L,0xEDFDL,0xEFC6L,0x8BDCA640FD9C6AF3LL,0x292045D2L,0x35B1L}},{{0x9807D2D7L,0xDCCFL,65535UL,1L,0x6E27932EL,0xBB36L}},{{0x89626B7DL,0x3B33L,0x498AL,0x2ABEECBFD1975EBDLL,0xEBD2FC5DL,65528UL}}}};
            struct S1 *l_2255 = &g_1722;
            uint32_t l_2276 = 0xE7975BE2L;
            int32_t l_2279 = 8L;
            int8_t **** const l_2293 = &g_1286;
            int i, j;
            for (g_1193 = 0; (g_1193 <= 1); g_1193 += 1)
            { 
                uint32_t l_2187 = 18446744073709551614UL;
                (**g_739) = 1L;
                for (g_795 = 0; (g_795 <= 1); g_795 += 1)
                { 
                    int i, j, k;
                    if (g_1192[(g_1193 + 1)][(g_1193 + 1)][(g_1193 + 2)])
                        break;
                }
                for (g_1091 = 0; (g_1091 <= 3); g_1091 += 1)
                { 
                    uint8_t *****l_2179 = &g_1452;
                    uint32_t ***l_2180 = &g_248;
                    uint32_t ****l_2181[5];
                    const int16_t l_2186 = 0L;
                    uint16_t *l_2195 = &l_1847;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_2181[i] = &l_2180;
                    (**g_739) ^= ((l_2189 = (((l_2188 = ((l_2187 &= ((g_1192[(g_1091 + 3)][(g_1193 + 1)][(g_1091 + 1)] , (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(g_1192[(g_1193 + 3)][g_1091][g_1091], ((***g_716)--))), (((&g_1453 != ((*l_2179) = &g_1453)) || (((g_2182 = l_2180) == (void*)0) == ((*g_168) = ((safe_mul_func_int8_t_s_s(l_2186, 0x42L)) , g_1192[(g_1193 + 3)][g_1091][g_1091])))) < (-4L))))) <= l_1979)) <= (-5L))) < 5L) ^ l_1847)) || (*g_393));
                    (**g_739) ^= 0x2D9C57CCL;
                    (*g_74) = (void*)0;
                    (*g_739) = l_2190;
                    l_2196 &= (safe_mul_func_int8_t_s_s((*l_2190), (((safe_div_func_uint16_t_u_u((*g_773), (**g_772))) | 0x9FL) == ((void*)0 != l_2195))));
                }
            }
            (*l_2190) = ((-1L) != (safe_mul_func_uint8_t_u_u(((*g_196) &= (safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((***g_716), ((*l_2203)--))), (*l_2190)))), ((*g_168) = ((safe_sub_func_int8_t_s_s((l_2189 || (((safe_rshift_func_int8_t_s_s(((void*)0 == l_2210), (*l_2190))) == (*l_2190)) < (***g_2182))), l_1884[0])) && (*l_2190))))));
            if (((l_2211 == &g_1453) > (((((*g_196) = l_2212) ^ (safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((*l_2190), (-1L))) ^ ((((*l_2223) = ((safe_sub_func_int32_t_s_s((((*l_2190) , ((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((*l_2190), (*l_2190))), (*l_2190))) <= 0x7BD5L)) ^ 255UL), 0UL)) && (*l_2190))) > l_1884[0]) ^ 4294967292UL)), l_2003))) , 0UL) <= 1UL)))
            { 
                int16_t l_2235 = 0xE544L;
                int16_t l_2265 = 0xE021L;
                struct S0 l_2275[5] = {{0x39638E27L,1UL,65535UL,0xE4E7578A04790BABLL,0x251C1EB6L,1UL},{0x39638E27L,1UL,65535UL,0xE4E7578A04790BABLL,0x251C1EB6L,1UL},{0x39638E27L,1UL,65535UL,0xE4E7578A04790BABLL,0x251C1EB6L,1UL},{0x39638E27L,1UL,65535UL,0xE4E7578A04790BABLL,0x251C1EB6L,1UL},{0x39638E27L,1UL,65535UL,0xE4E7578A04790BABLL,0x251C1EB6L,1UL}};
                int i;
                if (((safe_add_func_int8_t_s_s(((**g_195) >= ((*g_168) = (((-1L) < (safe_mul_func_uint8_t_u_u((7UL | (safe_rshift_func_int8_t_s_u(0x9DL, ((safe_sub_func_int8_t_s_s((((((18446744073709551615UL < (((l_2232[2] , (((safe_mod_func_uint64_t_u_u((((*g_782) == l_2235) >= (*g_782)), 0x436AE7AE1F11B1C9LL)) >= l_2049[4][0]) <= l_3)) , l_2236) <= 0x64L)) | l_2188) , l_2235) , (*l_2190)) == (*l_2190)), 0xA5L)) != (*g_196))))), l_3))) <= (*g_168)))), 1UL)) > 7L))
                { 
                    uint32_t l_2258 = 0UL;
                    int32_t *l_2278[3][1];
                    union U2 *l_2281 = &g_2282;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_2278[i][j] = &g_1897.f3.f4;
                    }
                    (**g_74) = (((safe_add_func_uint16_t_u_u((0x3398E335L & (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((((l_2249 , ((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((l_2254[1][1] , ((*l_2223) = ((l_2189 == ((((((**g_1637) == (l_2255 = l_2255)) || (safe_rshift_func_int16_t_s_u((l_2212 >= l_2189), 2))) ^ l_2188) != l_1933) ^ 6UL)) , 0xE4DEL))), 0UL)), 18446744073709551609UL)) , 0x15C1L)) | 65527UL) < l_2258) >= (**g_74)), l_2235)), l_2188)), l_2189)), 0xAEL)), (*g_196)))), (-1L))) , (***g_716)) >= l_2146.f0.f3);
                    (**g_739) &= 0L;
                    l_2279 |= ((*l_2190) = (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((l_2265 < (((((((safe_rshift_func_uint8_t_u_u((0x72228BCEL & (safe_lshift_func_uint8_t_u_s(0x73L, (l_2189 = (safe_add_func_int64_t_s_s(((safe_div_func_uint8_t_u_u(((((((****l_1839) , func_16((***l_1839))) , ((l_1884[0] = (((*l_2255) , (void*)0) == l_2274[1][0][0])) , 0x00AEDBE313F9B95FLL)) <= 18446744073709551610UL) , l_2275[4]) , l_2258), 0xDDL)) , l_2276), 0UL)))))), 7)) & 0x1580177EL) != 0xDD9D15629D56E2BELL) ^ l_2235) > 7UL) , 2UL) < 0x7D2914BCL)), 0x7EL)) && l_2188), l_2265)), g_2277)));
                    l_2281 = l_2280;
                }
                else
                { 
                    return g_1363;
                }
            }
            else
            { 
                int8_t l_2288 = 0x64L;
                if ((+((((((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_2049[4][0], 0x85A4L)), 0xBAL)) <= (l_2288 == (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_2293 != l_2293), 0x8D4EL)), (***g_1453))) != l_2288) < (-1L)))) , 65535UL) | 65531UL) >= l_2249.f4) == l_2154)))
                { 
                    return g_231;
                }
                else
                { 
                    (*l_2190) = 0xBDE49A17L;
                    (**g_74) &= 4L;
                }
                return g_10.f0;
            }
            return l_2188;
        }
        for (g_2133 = 0; (g_2133 <= 5); g_2133 += 1)
        { 
            uint32_t * const ****l_2297 = &l_2294;
            struct S1 **l_2301 = &g_9;
            int32_t l_2315 = 0L;
            int32_t l_2335[3][5][5] = {{{(-5L),(-8L),(-8L),(-5L),0x358169F7L},{1L,0x24D13B2FL,(-8L),(-5L),(-3L)},{(-5L),0xF6CE3F03L,(-1L),(-10L),(-8L)},{(-1L),1L,(-5L),(-5L),1L},{0x13F8931FL,1L,5L,(-5L),1L}},{{0xF6CE3F03L,0x991838E6L,0x24D13B2FL,0x8F188EE9L,(-8L)},{1L,0x8F188EE9L,0x1967D258L,(-3L),(-3L)},{0xF6CE3F03L,5L,0x358169F7L,1L,5L},{0x1967D258L,0x8F188EE9L,1L,(-5L),0x24D13B2FL},{0x991838E6L,(-1L),(-5L),(-10L),0x1967D258L}},{{0xF6CE3F03L,0x24D13B2FL,1L,0x24D13B2FL,0xF6CE3F03L},{(-8L),(-5L),0x358169F7L,0x24D13B2FL,(-10L)},{0x13F8931FL,(-8L),1L,(-10L),(-3L)},{1L,0x358169F7L,(-10L),(-5L),(-10L)},{(-10L),(-10L),0x8F188EE9L,1L,0xF6CE3F03L}}};
            int i, j, k;
            (*l_2297) = l_2294;
            for (g_1529 = 0; (g_1529 <= 5); g_1529 += 1)
            { 
                int32_t *l_2298 = &l_1883;
                uint32_t ****l_2317 = &g_716;
                uint32_t *****l_2316 = &l_2317;
                const int32_t l_2318 = 0L;
                int8_t l_2319 = 4L;
                int i;
                (*g_74) = l_2298;
                (*g_75) = (safe_div_func_int8_t_s_s(((g_1279[g_1529] ^ (5UL < (((**l_1839) = l_2301) != (((safe_add_func_int64_t_s_s(0xBADBD8AD28232BB5LL, (safe_sub_func_int8_t_s_s((l_2306 , (safe_mod_func_uint32_t_u_u((l_2189 | ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((l_2315 = (5UL | l_2315)) , &g_2017) != l_2316), l_2146.f0.f1)), 11)) == 9L), (-9L))) , l_2003)), (*g_393)))), (**g_195))))) <= l_2318) , (void*)0)))) <= (**g_739)), l_2319));
                l_2335[2][1][2] &= (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((*g_1477) , (((***g_2182) = l_2188) >= 0x6FBE6025L)), (g_1348[g_1529] = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((l_2332[4][0] == (void*)0), 5)), 12))))) || l_2188) & ((safe_lshift_func_int8_t_s_u(l_2315, (*g_196))) <= 0x20DB79C0L)), l_2306.f0)) < l_2306.f1), l_2306.f4)), 8));
                l_1884[0] ^= (*l_2298);
            }
        }
    }
    else
    { 
        uint64_t l_2536 = 0x51E9A90B212F535ELL;
        int32_t l_2588 = 8L;
        (**g_739) = (l_2536 | 0x8B1E2C77L);
        for (g_618 = 0; (g_618 <= 52); g_618 = safe_add_func_uint32_t_u_u(g_618, 2))
        { 
            int64_t *****l_2539 = &g_1708;
            uint64_t *l_2550 = &g_1551[0];
            const int32_t l_2551 = 0xF46AD5B2L;
            uint32_t l_2558 = 18446744073709551615UL;
            int32_t *l_2566[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_2590 = 3L;
            const struct S0 l_2596 = {0xEF60FB97L,0x8FA3L,0UL,1L,0L,65535UL};
            const int64_t *l_2600[2];
            const int64_t **l_2599 = &l_2600[1];
            const int64_t ***l_2598 = &l_2599;
            int i;
            for (i = 0; i < 2; i++)
                l_2600[i] = &g_1006[1];
            if (l_2536)
                break;
            l_1884[0] &= ((l_2539 != &g_1708) , ((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((((*g_75) = ((((safe_rshift_func_int16_t_s_u(g_1194, 12)) && (((*g_772) != (void*)0) < l_2249.f5)) <= ((safe_mod_func_uint64_t_u_u(((*l_2550) = (*g_782)), l_2536)) , l_2551)) ^ 0xD46132A9L)) <= 0x159C151EL) ^ l_2551), 1UL)) < l_2551), l_1827)), 10)) == 0x5A1DL));
            g_1897.f0 &= (((safe_rshift_func_uint16_t_u_u((*g_773), 1)) <= (((safe_rshift_func_uint16_t_u_u(l_2212, 4)) && l_2558) , (0x68L != l_2146.f0.f5))) , ((safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint8_t_u_u(255UL, 5)))), ((l_2558 == 0UL) || l_2536))), (*g_75))) == l_2551));
            for (g_160.f3.f0 = 3; (g_160.f3.f0 != (-15)); g_160.f3.f0 = safe_sub_func_int16_t_s_s(g_160.f3.f0, 6))
            { 
                int32_t l_2575 = 0x2CE6A807L;
                int64_t ***l_2597 = &g_217;
                for (l_1962 = 0; (l_1962 <= 2); l_1962 += 1)
                { 
                    int16_t *l_2587[4];
                    int32_t l_2589 = 0x5B68A7D9L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2587[i] = &l_2236;
                    (**g_74) = (**g_739);
                    (**g_739) = (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_2575, 9)) > ((*l_2550)++)), ((*l_2477) , (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((!(safe_rshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(((void*)0 == (*g_1947)), ((l_2588 = g_10.f2) < ((l_2589 <= (*g_782)) || 0x9CL)))) <= 0L), 2))), 0x7876L)), l_2590))))), l_2536));
                }
                if ((*g_393))
                    continue;
                (**g_74) = (+((safe_mod_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u((****g_1452), l_2146.f0.f4)) > (l_2596 , (((((*g_1946) = l_2597) == l_2598) >= 0xE1L) ^ l_2441[4][1]))) >= 0xFEL) != (**g_739)), (***g_1453))) , l_2536));
            }
        }
    }
    if ((safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((((*l_2477) , (func_16((***l_1839)) , l_2441[3][1])) , (g_2607 = l_2605)) == (g_2609[0][0][2] = &g_1477)) < l_1979), (-1L))), 5)))
    { 
        uint8_t l_2611 = 0x26L;
        return l_2611;
    }
    else
    { 
        int32_t *l_2612 = &g_160.f0;
        const struct S1 *l_2625 = &g_332;
        union U2 l_2631 = {{0x7DAADAC5L,65530UL,0UL,1L,0x6DD64F15L,0xDC98L}};
        int16_t *l_2632[6] = {&g_1279[1],&g_1279[1],&g_416,&g_1279[1],&g_1279[1],&g_416};
        int64_t *l_2641 = &g_1897.f1;
        int64_t *l_2642 = &l_2103;
        int32_t *l_2643[7][1] = {{(void*)0},{(void*)0},{&g_1363},{(void*)0},{(void*)0},{&g_1363},{(void*)0}};
        int i, j;
        (*l_2612) = (*g_393);
        for (g_1897.f3.f4 = 0; (g_1897.f3.f4 <= 1); g_1897.f3.f4 += 1)
        { 
            int16_t l_2615[4][6] = {{(-10L),0xEF92L,0xF71EL,(-10L),0xF71EL,0xEF92L},{0x8F1EL,0xEF92L,0x904AL,0x8F1EL,0xF71EL,0xF71EL},{2L,0xEF92L,0xEF92L,2L,0xF71EL,0x904AL},{(-10L),0xEF92L,0xF71EL,(-10L),0xF71EL,0xEF92L}};
            struct S1 **l_2619 = &g_9;
            struct S1 ***l_2618 = &l_2619;
            const struct S1 **l_2626[4][5][5] = {{{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{(void*)0,&l_2625,&l_2625,&l_2625,(void*)0},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625}},{{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{(void*)0,&l_2625,&l_2625,&l_2625,(void*)0},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625}},{{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{(void*)0,&l_2625,&l_2625,&l_2625,(void*)0},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625}},{{(void*)0,&l_2625,&l_2625,&l_2625,(void*)0},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{&l_2625,&l_2625,&l_2625,&l_2625,&l_2625},{(void*)0,&l_2625,&l_2625,&l_2625,(void*)0}}};
            int i, j, k;
            (**g_1637) = func_7(((safe_sub_func_uint32_t_u_u((l_2615[2][1] < (safe_lshift_func_uint16_t_u_s((((*g_1637) != ((*l_2618) = (**l_1839))) != ((****g_1452)++)), 8))), (*g_249))) , func_18(func_18((g_2627 = (((safe_mul_func_int8_t_s_s(((*g_168) = ((void*)0 == l_2624)), (l_2615[1][3] && (*l_2612)))) == (**g_248)) , l_2625)), l_2249.f5), l_2629)));
            (*g_739) = l_2630;
            for (g_68 = 0; (g_68 <= 1); g_68 += 1)
            { 
                (*g_739) = (*g_739);
            }
        }
        (*l_2612) ^= ((*g_2627) , (&g_2161 != (void*)0));
        g_1903[3].f0 = ((((g_1279[4] = (l_2631 , (*l_2612))) && ((*l_2630) = (safe_mod_func_int32_t_s_s((-1L), (((safe_div_func_uint16_t_u_u(((**g_772) ^= (safe_sub_func_int64_t_s_s((safe_add_func_int8_t_s_s(((*g_168) |= (*l_2612)), (*l_2630))), ((*l_2642) &= ((void*)0 != &g_739))))), (*l_2612))) | (*l_2630)) | 0xACCDA13051B3F899LL))))) , (*l_2612)) < l_2360);
    }
    return (*l_2630);
}



static struct S1 * func_7(struct S1 * p_8)
{ 
    union U2 l_69[1][6] = {{{{0L,0x3225L,1UL,0x2D80D5DAD174F130LL,0L,0xAE64L}},{{0L,0x3225L,1UL,0x2D80D5DAD174F130LL,0L,0xAE64L}},{{0L,0x3225L,1UL,0x2D80D5DAD174F130LL,0L,0xAE64L}},{{0L,0x3225L,1UL,0x2D80D5DAD174F130LL,0L,0xAE64L}},{{0L,0x3225L,1UL,0x2D80D5DAD174F130LL,0L,0xAE64L}},{{0L,0x3225L,1UL,0x2D80D5DAD174F130LL,0L,0xAE64L}}}};
    int32_t *l_73[1][5];
    int32_t **l_72[3][5][2] = {{{(void*)0,(void*)0},{&l_73[0][0],&l_73[0][2]},{&l_73[0][1],&l_73[0][3]},{&l_73[0][3],(void*)0},{(void*)0,(void*)0}},{{&l_73[0][2],(void*)0},{(void*)0,(void*)0},{&l_73[0][3],(void*)0},{&l_73[0][4],(void*)0},{&l_73[0][2],&l_73[0][2]}},{{(void*)0,&l_73[0][2]},{&l_73[0][2],&l_73[0][0]},{&l_73[0][2],&l_73[0][2]},{(void*)0,&l_73[0][2]},{&l_73[0][2],(void*)0}}};
    int32_t ***l_76 = (void*)0;
    int32_t ***l_77 = (void*)0;
    int32_t **l_79 = &g_75;
    int32_t ***l_78 = &l_79;
    int8_t *l_87 = &g_88;
    int32_t l_89[6][5][3] = {{{0x2F13429AL,0x9626E4E1L,0x263C58A5L},{0xC42DAAAAL,6L,(-6L)},{1L,0x2F13429AL,0x263C58A5L},{0x42AB6986L,2L,0x42AB6986L},{0x162B35B4L,0x263C58A5L,0x84C66358L}},{{0xC42DAAAAL,2L,0x48BAA0A5L},{1L,0x2F13429AL,(-2L)},{0L,6L,0x42AB6986L},{1L,0x9626E4E1L,0x9626E4E1L},{0xC42DAAAAL,0x59814C77L,(-6L)}},{{0x162B35B4L,0x2F13429AL,0x9626E4E1L},{0x42AB6986L,(-4L),0x42AB6986L},{1L,0x263C58A5L,(-2L)},{0xC42DAAAAL,(-4L),0x48BAA0A5L},{0x2F13429AL,0x2F13429AL,0x84C66358L}},{{0L,0x59814C77L,0x42AB6986L},{0x2F13429AL,0x9626E4E1L,0x263C58A5L},{0xC42DAAAAL,6L,(-6L)},{1L,0x2F13429AL,0x263C58A5L},{0x42AB6986L,2L,0x42AB6986L}},{{0x162B35B4L,0x263C58A5L,0x84C66358L},{0xC42DAAAAL,2L,0x48BAA0A5L},{1L,0x2F13429AL,(-2L)},{0L,6L,0x42AB6986L},{1L,0x9626E4E1L,0x9626E4E1L}},{{0xC42DAAAAL,0x59814C77L,(-6L)},{0x162B35B4L,0x2F13429AL,0x9626E4E1L},{0x42AB6986L,(-4L),0x42AB6986L},{1L,0x263C58A5L,(-2L)},{0xC42DAAAAL,(-4L),0x48BAA0A5L}}};
    int32_t l_90 = 1L;
    struct S1 *l_1721 = &g_1722;
    int16_t l_1724 = 0x1F0AL;
    int16_t *l_1729[3][4][3] = {{{&g_1275,&g_416,&g_1275},{&g_1275,&g_416,&g_1275},{&g_1275,&g_416,&g_1275},{&g_1275,&g_416,&g_1275}},{{&g_1275,&g_416,&g_1275},{&g_1275,&g_416,&g_1275},{&g_1275,&g_416,&g_1275},{&g_1275,&g_416,&g_1275}},{{&g_1275,&g_416,&g_1275},{&g_1275,&g_416,&g_1275},{&g_1275,&g_416,&g_1275},{&g_1275,&g_416,&g_1275}}};
    uint8_t l_1730 = 0xDDL;
    int16_t l_1733 = 0xF963L;
    const int64_t l_1770 = 0x2B022DBCF2C743A8LL;
    int64_t l_1791 = 0x4C2CE090B87E5464LL;
    struct S1 ****l_1793[6];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_73[i][j] = &g_2;
    }
    for (i = 0; i < 6; i++)
        l_1793[i] = &g_1637;
    return p_8;
}



static union U3  func_11(struct S1 * p_12, uint32_t  p_13, struct S1 * p_14, const struct S1 * p_15)
{ 
    union U3 l_1723 = {0x155D70A6L};
    return l_1723;
}



static union U3  func_16(struct S1 * p_17)
{ 
    int32_t *l_1371 = &g_1276;
    union U2 *l_1386[3];
    union U2 **l_1385 = &l_1386[1];
    int16_t *l_1397 = &g_1278;
    uint8_t ***l_1410 = &g_195;
    int32_t l_1412 = 0L;
    int8_t ****l_1414 = &g_1286;
    int64_t **l_1425[7];
    struct S0 **l_1438 = &g_948[2][0];
    int32_t l_1446 = 0x3E0218A5L;
    uint32_t l_1447[7][2][3] = {{{0x23109098L,0x348AB7CCL,0x41EA292FL},{18446744073709551613UL,18446744073709551609UL,18446744073709551613UL}},{{0x23109098L,0x41EA292FL,0xB4ABAEC4L},{18446744073709551615UL,18446744073709551609UL,8UL}},{{0x348AB7CCL,0x348AB7CCL,0xB4ABAEC4L},{18446744073709551613UL,5UL,18446744073709551613UL}},{{0x348AB7CCL,0x41EA292FL,0x41EA292FL},{18446744073709551615UL,5UL,8UL}},{{0x23109098L,0x348AB7CCL,0x41EA292FL},{18446744073709551613UL,18446744073709551609UL,18446744073709551613UL}},{{0x23109098L,0x41EA292FL,0xB4ABAEC4L},{18446744073709551615UL,18446744073709551609UL,8UL}},{{0x348AB7CCL,0x348AB7CCL,0xB4ABAEC4L},{18446744073709551613UL,5UL,18446744073709551613UL}}};
    union U3 l_1451[1] = {{4L}};
    int16_t l_1524 = 0xD562L;
    union U3 *l_1547 = &l_1451[0];
    union U3 **l_1546 = &l_1547;
    int16_t l_1564 = (-1L);
    union U3 l_1633 = {-1L};
    struct S1 ***l_1639 = &g_1638;
    int32_t * const l_1718 = &g_160.f0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1386[i] = &g_117;
    for (i = 0; i < 7; i++)
        l_1425[i] = &g_64;
    for (g_156 = 0; (g_156 >= 10); g_156 = safe_add_func_int32_t_s_s(g_156, 1))
    { 
        struct S0 l_1380 = {3L,0x4F9CL,65526UL,0x617C1181C8813C5BLL,1L,0xEAF4L};
        const union U2 *l_1388 = &g_1048;
        const union U2 **l_1387[4] = {&l_1388,&l_1388,&l_1388,&l_1388};
        uint32_t **l_1396 = &g_249;
        const int8_t ****l_1413 = (void*)0;
        int32_t l_1415 = 0x128CFDD8L;
        int i;
        (*g_739) = l_1371;
        for (g_1091 = (-17); (g_1091 == 7); g_1091 = safe_add_func_uint8_t_u_u(g_1091, 3))
        { 
            const union U2 ***l_1389 = (void*)0;
            const union U2 ***l_1390 = &l_1387[0];
            int64_t * const *l_1391 = &g_64;
            int32_t *l_1398 = &g_160.f0;
            (*l_1398) ^= (safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((*g_75), (l_1380 , ((((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((l_1385 == ((*l_1390) = l_1387[0])), (l_1391 == l_1391))), (safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((l_1396 == l_1396), (*l_1371))), 0x64L)))) , g_68) , &g_1279[3]) != l_1397)))) <= 1L) && l_1380.f3), l_1380.f3)) , (**g_739)), (*g_249)));
            (*g_739) = (*g_739);
        }
        for (g_459 = (-24); (g_459 > 38); ++g_459)
        { 
            uint8_t ***l_1407 = &g_195;
            uint8_t ****l_1406 = &l_1407;
            uint8_t ***l_1409 = &g_195;
            uint8_t ****l_1408[7] = {&l_1409,&l_1409,&l_1409,&l_1409,&l_1409,&l_1409,&l_1409};
            int32_t *l_1411[7] = {&g_1318,&g_1318,&g_1318,&g_1318,&g_1318,&g_1318,&g_1318};
            int i;
            l_1412 = ((*l_1371) = (!(~(safe_add_func_uint64_t_u_u((safe_unary_minus_func_uint32_t_u(l_1380.f3)), (&g_195 == (l_1410 = ((*l_1406) = (void*)0))))))));
            if ((*l_1371))
                continue;
        }
        (**g_739) = (0x70L > ((*g_196) = 0x22L));
        l_1415 ^= ((l_1413 == l_1414) | l_1380.f4);
    }
    for (g_673 = 0; (g_673 != 20); g_673 = safe_add_func_int8_t_s_s(g_673, 1))
    { 
        int64_t ***l_1424 = &g_1423[2];
        int32_t l_1426 = (-9L);
        struct S0 **l_1432 = (void*)0;
        struct S0 ***l_1431 = &l_1432;
        struct S0 ****l_1430[5][1][1];
        struct S0 *****l_1429 = &l_1430[0][0][0];
        int32_t *l_1435 = &l_1412;
        int32_t l_1444 = 0x398EF6A0L;
        int32_t l_1445 = 0x379A0505L;
        union U3 l_1450 = {-1L};
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1430[i][j][k] = &l_1431;
            }
        }
    }
    (*l_1385) = (l_1451[0] , &g_1048);
    if ((*l_1371))
    { 
        uint8_t *****l_1454 = &g_1452;
        uint8_t ****l_1456[6][3] = {{(void*)0,(void*)0,(void*)0},{&g_1453,&g_1453,&g_1453},{(void*)0,(void*)0,(void*)0},{&g_1453,&g_1453,&g_1453},{(void*)0,(void*)0,(void*)0},{&g_1453,&g_1453,&g_1453}};
        uint8_t *****l_1455 = &l_1456[2][1];
        union U2 ****l_1478 = &g_1475[3];
        const int32_t l_1479 = 8L;
        int32_t l_1500 = 0x261F277BL;
        int32_t l_1502 = 6L;
        int32_t l_1503 = 0L;
        int32_t l_1504[6][5] = {{0L,0L,2L,0x81AC36E7L,(-1L)},{0x2040F56DL,0xB99EFDFFL,0xB99EFDFFL,0x2040F56DL,0L},{0x2040F56DL,0x81AC36E7L,1L,1L,0x81AC36E7L},{0L,0xB99EFDFFL,1L,2L,2L},{0xB99EFDFFL,0L,0xB99EFDFFL,1L,2L},{0x81AC36E7L,0x2040F56DL,2L,0x2040F56DL,0x81AC36E7L}};
        uint8_t l_1508[4];
        union U3 l_1584 = {0xDE89A12DL};
        int64_t ***l_1604 = (void*)0;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1508[i] = 246UL;
        if ((((((*l_1454) = g_1452) == ((*p_17) , ((*l_1455) = &l_1410))) , ((safe_add_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_int32_t_s((~((*g_782) = (safe_div_func_int32_t_s_s((*l_1371), 0x6724BFDEL)))))) || (safe_mod_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((247UL < ((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((*l_1478) = g_1475[3]) == &g_1476[1]), 0x9E996275C9C1DCBFLL)), 8L)) != (**g_195))) >= (**g_739)), (*g_773))), (*g_196))) < l_1479) >= l_1479), (**g_195)))) & (**g_248)), (*l_1371))), l_1479)) & 1L)) > (*l_1371)))
        { 
            union U3 l_1480 = {0xF7582ED6L};
            return l_1480;
        }
        else
        { 
            int64_t l_1483[4][2] = {{0xA551F6190E40CD07LL,0xA551F6190E40CD07LL},{2L,0xA551F6190E40CD07LL},{0xA551F6190E40CD07LL,2L},{0xA551F6190E40CD07LL,0xA551F6190E40CD07LL}};
            uint16_t *l_1496[6];
            int32_t l_1505 = 0x188F82DCL;
            int32_t l_1507 = 0xE30C5E51L;
            int32_t l_1523 = 5L;
            uint64_t l_1525 = 18446744073709551615UL;
            union U2 l_1581 = {{0xBE41F649L,1UL,0xE4BDL,0xB7BB6B37E6FAEE05LL,1L,0x5D49L}};
            int64_t ***l_1606[1][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int64_t ****l_1605 = &l_1606[0][2][1];
            int32_t *l_1607 = (void*)0;
            int32_t *l_1608[5];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1496[i] = &g_769;
            for (i = 0; i < 5; i++)
                l_1608[i] = &l_1451[0].f3.f4;
            if (((*l_1371) ^ ((safe_div_func_uint16_t_u_u((l_1483[3][0] < ((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((((*g_168) = (safe_rshift_func_int16_t_s_s((-6L), 0))) && ((((*g_782) ^= ((***g_716) && l_1483[3][0])) || (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(l_1483[3][0], (g_949.f2 ^= (*g_773)))), 7)), (-1L)))) < 0L)), g_1191)), 0)) && l_1479)), 65535UL)) >= 0x265E4D748F20545BLL)))
            { 
                int32_t l_1501[1];
                int32_t *l_1511 = (void*)0;
                int32_t *l_1512 = &l_1507;
                int32_t *l_1513 = &l_1501[0];
                int32_t *l_1514 = &l_1505;
                int32_t *l_1515 = &l_1503;
                int32_t *l_1516 = &g_160.f0;
                int32_t *l_1517 = &g_1318;
                int32_t *l_1518 = &l_1500;
                int32_t *l_1519 = &l_1502;
                int32_t *l_1520 = &g_1363;
                int32_t *l_1521 = (void*)0;
                int32_t *l_1522[7][1][2] = {{{&g_10.f4,&l_1501[0]}},{{&g_160.f0,&l_1501[0]}},{{&g_10.f4,&g_160.f0}},{{&g_160.f0,&g_10.f4}},{{&l_1501[0],&g_160.f0}},{{&l_1501[0],&g_10.f4}},{{&g_160.f0,&g_160.f0}}};
                uint8_t l_1549 = 0UL;
                uint64_t *l_1562 = (void*)0;
                uint64_t *l_1563[7];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1501[i] = 0xA4307B1CL;
                for (i = 0; i < 7; i++)
                    l_1563[i] = &g_1551[0];
                for (g_1318 = (-27); (g_1318 != (-9)); g_1318 = safe_add_func_uint16_t_u_u(g_1318, 9))
                { 
                    int32_t *l_1499[3][7][3] = {{{&g_1363,&g_1363,(void*)0},{&g_160.f0,&g_1318,&g_1318},{(void*)0,&g_1363,&g_2},{&g_160.f0,&g_2,&g_160.f0},{&g_1363,(void*)0,&g_2},{&g_1276,&g_1276,&g_1318},{&l_1412,(void*)0,(void*)0}},{{&g_1318,&g_2,&g_1363},{&l_1412,&g_1363,&l_1412},{&g_1276,&g_1318,&g_1363},{&g_1363,&g_1363,(void*)0},{&g_160.f0,&g_1318,&g_1318},{(void*)0,&g_1363,&g_2},{&g_160.f0,&g_2,&g_160.f0}},{{&g_1363,(void*)0,&g_2},{&g_1276,&g_1276,&g_1318},{&l_1412,(void*)0,(void*)0},{&g_1318,&g_2,&g_1363},{&l_1412,&g_1363,&l_1412},{&g_1276,&g_1318,&g_1363},{&g_1363,&g_1363,(void*)0}}};
                    int i, j, k;
                    (*g_739) = l_1499[2][5][0];
                    l_1508[1]++;
                }
                l_1525++;
                for (g_138 = 0; (g_138 <= 1); g_138 += 1)
                { 
                    int8_t l_1528 = 0xE6L;
                    int32_t **l_1541[4] = {&l_1517,&l_1517,&l_1517,&l_1517};
                    uint32_t *l_1543 = &g_1024[6][0][0];
                    union U3 **l_1548 = (void*)0;
                    int32_t l_1550 = 0x38A82843L;
                    int i;
                    ++g_1529;
                    (*l_1371) = ((((****g_1452) = (((safe_rshift_func_int16_t_s_u(0x9100L, ((((safe_add_func_int8_t_s_s((*l_1520), (~4294967290UL))) >= (((*l_1371) <= (safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((*g_773) = ((((g_74 = l_1541[2]) == (((((((((~l_1505) , ((--(*l_1543)) , l_1546)) == l_1548) , 0x3E58E1FC3E86BD02LL) < l_1479) > (*l_1514)) ^ 0UL) != l_1523) , (void*)0)) == 248UL) ^ 255UL)), l_1549)), 13))) > (*l_1520))) , (void*)0) != &l_1500))) >= (*l_1514)) <= 0x3AL)) , (****g_1452)) > l_1550);
                    ++g_1551[0];
                }
                if (((safe_lshift_func_uint16_t_u_u((l_1507 != (*g_393)), 4)) != ((safe_lshift_func_int8_t_s_u((l_1507 ^ (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_1500, 2)), (*g_773)))), 5)) <= (l_1504[0][1] = ((*g_782) = l_1479)))))
                { 
                    --g_1565;
                    (*l_1512) ^= (*l_1371);
                    (*l_1515) ^= (~(safe_sub_func_uint64_t_u_u((*l_1371), 0x6549BB0B27A3775DLL)));
                }
                else
                { 
                    (*l_1514) = (*l_1513);
                }
                (*l_1517) = 0x0C225844L;
            }
            else
            { 
                int8_t l_1579 = 1L;
                (*l_1371) = (safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((*g_196), 6)) != ((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(l_1579, 4)) , (+(((0x74L < (*g_168)) , l_1581) , (safe_lshift_func_int16_t_s_s((l_1584 , ((safe_rshift_func_int16_t_s_u(((+(safe_add_func_uint32_t_u_u((++(**g_248)), 5L))) >= 0UL), 14)) || l_1579)), 5))))), (**g_195))) >= g_675)), l_1581.f0.f5));
                return l_1584;
            }
            l_1500 |= ((l_1504[5][3] && (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u((~(safe_rshift_func_int16_t_s_u(((18446744073709551615UL > l_1503) , (!(safe_mul_func_uint16_t_u_u((((((*l_1371) , l_1604) != ((*l_1605) = l_1604)) || ((*g_773) ^= (*l_1371))) , l_1581.f0.f5), l_1584.f0)))), (*l_1371)))), l_1483[1][1])) , (*g_196)), 1)) ^ 0x46L), 0x680E181BL))) , (*g_393));
        }
        if (((*g_782) & (!((****l_1478) , (safe_mod_func_int8_t_s_s(((*g_168) &= (((l_1502 | ((safe_mul_func_int16_t_s_s(((0L != ((***g_716) >= 0L)) | (0x2AA6F56F6ECE585DLL && l_1504[1][2])), l_1504[2][2])) < (*l_1371))) < (*l_1371)) ^ l_1500)), (*l_1371)))))))
        { 
            return l_1584;
        }
        else
        { 
            uint8_t l_1618 = 0x23L;
            const uint32_t *l_1632 = (void*)0;
            const uint32_t **l_1631[5];
            const uint32_t ***l_1630[7][1][6] = {{{&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4]}},{{&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4]}},{{&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4]}},{{&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4]}},{{&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4]}},{{&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4]}},{{&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4],&l_1631[4]}}};
            const uint32_t *** const *l_1629 = &l_1630[6][0][3];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1631[i] = &l_1632;
            (*l_1371) = (safe_sub_func_int64_t_s_s((9L <= l_1503), (safe_sub_func_uint64_t_u_u(l_1503, 0xF5327CF62068BA3CLL))));
            l_1618 &= (*l_1371);
            (*l_1371) = (l_1584.f0 , (safe_mod_func_uint16_t_u_u(((l_1618 > (((*l_1397) ^= ((safe_mul_func_uint8_t_u_u((*l_1371), ((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((0xF6L >= 0xFAL), ((**g_195) >= (***g_1453)))) < l_1504[1][2]) , (void*)0) == l_1629), (**g_772))), l_1500)) ^ (*l_1371)))) , (*l_1371))) && (*g_773))) , (*l_1371)), 2UL)));
        }
        return l_1633;
    }
    else
    { 
        union U3 l_1636[2] = {{0x414D2406L},{0x414D2406L}};
        uint16_t *l_1654 = (void*)0;
        uint16_t *l_1655 = &g_117.f2;
        uint16_t *l_1656 = &g_1195;
        int32_t l_1657 = 0L;
        const struct S0 *l_1662[6];
        const struct S1 l_1673 = {0L,0xA1L,0x729939A4L,0x05E9L,0xB284AD05L};
        int32_t *l_1687 = &l_1633.f3.f4;
        int32_t l_1698 = 0x146026ABL;
        int32_t l_1700 = 1L;
        int32_t l_1701[3][5] = {{1L,2L,2L,1L,2L},{1L,1L,1L,1L,1L},{2L,1L,2L,2L,1L}};
        int32_t **l_1719 = (void*)0;
        int32_t **l_1720 = &l_1687;
        int i, j;
        for (i = 0; i < 6; i++)
            l_1662[i] = &g_23[3][0][0];
        for (g_835 = 0; (g_835 <= 43); g_835 = safe_add_func_int8_t_s_s(g_835, 6))
        { 
            return l_1636[1];
        }
        if (((g_1637 != l_1639) , (safe_sub_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(0xDAL, (safe_rshift_func_int8_t_s_u(((l_1636[1].f0 = ((*l_1371) = ((safe_div_func_uint16_t_u_u((*l_1371), (safe_add_func_uint16_t_u_u(l_1636[1].f0, ((((safe_mul_func_int16_t_s_s(0x3C2CL, ((*l_1656) &= ((*g_773) = ((safe_div_func_int8_t_s_s(((l_1636[1].f0 & (*l_1371)) , l_1636[1].f0), (***g_1453))) ^ l_1636[1].f0))))) | l_1636[1].f0) < l_1636[1].f0) >= (*l_1371)))))) >= (*l_1371)))) , 0x2BL), l_1412)))) < l_1657) < (*g_196)) >= 246UL), l_1657))))
        { 
            for (g_790 = (-30); (g_790 != 58); ++g_790)
            { 
                for (g_160.f3.f4 = (-5); (g_160.f3.f4 == 7); g_160.f3.f4 = safe_add_func_uint8_t_u_u(g_160.f3.f4, 6))
                { 
                    const struct S0 **l_1663 = &l_1662[3];
                    (*l_1663) = l_1662[3];
                }
            }
        }
        else
        { 
            union U2 *l_1664 = (void*)0;
            const int32_t l_1666 = 0x575C5DAAL;
            int32_t l_1689 = 0L;
            int32_t l_1696 = 0x9C5CE813L;
            int32_t l_1697 = 0xE9D66F46L;
            uint8_t l_1715 = 3UL;
            l_1636[1].f0 ^= (((***g_1637) , l_1664) != (*l_1385));
lbl_1685:
            if (g_835)
                goto lbl_1669;
            for (g_213 = 0; (g_213 <= 5); g_213 += 1)
            { 
                l_1657 &= (*g_393);
                (*g_739) = (((*g_196) && ((!((*g_168) == l_1666)) != ((*g_782)--))) , &l_1412);
                (**g_739) &= (*l_1371);
            }
lbl_1669:
            for (g_117.f1 = 0; g_117.f1 < 3; g_117.f1 += 1)
            {
                g_1423[g_117.f1] = &g_62;
            }
            if ((**g_739))
            { 
                (*l_1371) = (((*l_1371) <= ((void*)0 != l_1662[3])) > (**g_772));
                for (g_588 = (-14); (g_588 > 56); g_588 = safe_add_func_int16_t_s_s(g_588, 5))
                { 
                    int32_t l_1672 = 0x000BAEC9L;
                    (*g_739) = (void*)0;
                    l_1672 = (-1L);
                }
            }
            else
            { 
                union U3 l_1676 = {0x151F172FL};
                int32_t l_1699 = 0xF7DF18BEL;
                if ((g_1363 ^= ((l_1673 , ((((safe_add_func_uint16_t_u_u(((((l_1676 , (safe_rshift_func_uint8_t_u_s(l_1666, (safe_div_func_int8_t_s_s(l_1673.f1, ((~l_1666) ^ (((-6L) > (((~0x1D49L) && l_1676.f0) && 0UL)) > 0xC3F248AD1792B714LL))))))) & (***g_716)) , l_1676.f0) | (**g_248)), 7UL)) || (*g_393)) == (*l_1371)) , (*l_1371))) > l_1676.f0)))
                { 
                    int32_t *l_1686 = &l_1412;
                    int32_t **l_1688 = &l_1371;
                    int32_t *l_1690 = &l_1633.f0;
                    int32_t *l_1691 = &l_1633.f3.f4;
                    int32_t *l_1692 = &l_1633.f0;
                    int32_t *l_1693 = &l_1636[1].f3.f4;
                    int32_t *l_1694 = &l_1633.f3.f4;
                    int32_t *l_1695[1];
                    int64_t ****l_1706 = (void*)0;
                    int64_t ***** const l_1705 = &l_1706;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1695[i] = &l_1676.f0;
                    if (g_160.f0)
                        goto lbl_1685;
                    (*l_1688) = (l_1687 = ((*g_739) = l_1686));
                    --g_1702;
                    g_1707 = l_1705;
                    (**l_1639) = (**l_1639);
                }
                else
                { 
                    int32_t *l_1709 = &l_1412;
                    int32_t *l_1710 = &g_1276;
                    int32_t *l_1711 = &l_1633.f3.f4;
                    int32_t *l_1712 = &l_1451[0].f3.f4;
                    int32_t *l_1713 = &g_10.f4;
                    int32_t *l_1714[1][1][6] = {{{&l_1701[2][2],&l_1633.f3.f4,&l_1633.f3.f4,&l_1701[2][2],&l_1633.f3.f4,&l_1633.f3.f4}}};
                    int i, j, k;
                    l_1715++;
                    (*g_739) = &l_1412;
                }
            }
        }
        (*l_1720) = l_1718;
        (*l_1687) = (*l_1371);
    }
    return g_160;
}



static struct S1 * func_18(const struct S1 * p_19, uint32_t  p_20)
{ 
    int32_t *l_91[7][3] = {{&g_2,&g_10.f4,&g_2},{&g_10.f4,&g_10.f4,&g_10.f4},{&g_10.f4,&g_10.f4,&g_10.f4},{&g_10.f4,&g_10.f4,&g_10.f4},{&g_2,&g_10.f4,&g_2},{&g_10.f4,&g_10.f4,&g_10.f4},{&g_10.f4,&g_10.f4,&g_10.f4}};
    int32_t **l_92 = &g_75;
    int64_t **l_119 = &g_62;
    int8_t *l_164 = &g_53;
    struct S0 l_181 = {7L,0x5416L,9UL,0x3D4A470AD435052ALL,0x25A8C6FEL,7UL};
    uint8_t **l_198[3][5] = {{(void*)0,&g_196,&g_196,(void*)0,(void*)0},{(void*)0,&g_196,&g_196,(void*)0,(void*)0},{(void*)0,&g_196,&g_196,(void*)0,(void*)0}};
    union U2 l_344 = {{-9L,0x9125L,0x97C0L,0xBCFDF56B2D733C96LL,-9L,65535UL}};
    uint64_t l_373 = 0x9C04F6283349E383LL;
    union U2 l_404 = {{0x23310337L,0xBFDEL,0x4E6BL,0x63A7AE3B5AC5323BLL,1L,7UL}};
    const uint32_t **l_443 = (void*)0;
    uint32_t l_516[2];
    struct S1 l_566 = {-1L,0x52L,0x2ADF5C45L,0x818DL,0xB2AD188FL};
    int32_t l_615[2][3][4] = {{{0xE08362EFL,0x80BCB88AL,0x822718D2L,5L},{0xE08362EFL,0x822718D2L,0xE08362EFL,6L},{0x80BCB88AL,5L,6L,6L}},{{0x822718D2L,0x822718D2L,9L,5L},{5L,0x80BCB88AL,9L,0x80BCB88AL},{0x822718D2L,0xE08362EFL,6L,9L}}};
    int16_t *l_704 = &g_416;
    const uint16_t l_705 = 0x4AEBL;
    uint32_t l_710 = 0xC12A54AFL;
    uint16_t l_753[2][3][2] = {{{0xDCD1L,65535UL},{65535UL,0x0187L},{65535UL,0x0187L}},{{65535UL,65535UL},{0xDCD1L,0xDCD1L},{0xDCD1L,65535UL}}};
    int8_t **l_757 = &g_168;
    int8_t ***l_756 = &l_757;
    uint32_t *l_763 = &g_675;
    int32_t l_820[5] = {1L,1L,1L,1L,1L};
    union U3 *l_988 = &g_160;
    union U3 **l_987 = &l_988;
    uint32_t l_1014 = 0UL;
    int8_t l_1042 = 0x25L;
    int8_t l_1053 = 0xAFL;
    struct S1 * const *l_1058 = &g_9;
    uint64_t **l_1060 = &g_782;
    uint32_t ** const *l_1072 = &g_248;
    union U2 *l_1121 = &g_117;
    union U2 ** const l_1120 = &l_1121;
    int32_t l_1220 = 0L;
    int32_t l_1231 = (-6L);
    uint32_t ***l_1247[5];
    int64_t l_1344 = 0xA4312CB04A3A926CLL;
    int32_t l_1361 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_516[i] = 0x21607018L;
    for (i = 0; i < 5; i++)
        l_1247[i] = &g_248;
    return &g_10;
}



static const struct S1 * func_21(struct S0  p_22)
{ 
    struct S1 *l_29 = &g_10;
    g_68 |= func_24((((func_26(l_29, &g_10) > (g_10.f3 == 0x8706703C071E14FELL)) , (void*)0) != (void*)0));
    return l_29;
}



static int32_t  func_24(int64_t  p_25)
{ 
    int8_t *l_59 = (void*)0;
    int8_t *l_60 = &g_53;
    int32_t l_61 = 0xAE84C8BEL;
    int64_t **l_63 = &g_62;
    int64_t **l_65 = (void*)0;
    int64_t **l_66 = &g_64;
    int32_t *l_67 = &l_61;
    (*l_67) = ((0x89L != ((*l_60) = 1L)) < (g_23[0][2][3].f5 > (l_61 || (((*l_63) = g_62) == ((*l_66) = g_64)))));
    return g_53;
}



static uint64_t  func_26(struct S1 * p_27, const struct S1 * p_28)
{ 
    int32_t l_32 = (-7L);
    int32_t l_39 = 0L;
    uint8_t *l_40 = &g_10.f1;
    int8_t *l_43 = (void*)0;
    uint16_t l_44 = 65527UL;
    int64_t *l_51 = &g_23[0][2][3].f3;
    int8_t *l_52 = &g_53;
    int32_t *l_54[2][3] = {{&l_39,&l_39,&g_10.f4},{&l_39,&l_39,&g_10.f4}};
    uint64_t l_55 = 0x821B11E678B10BEFLL;
    int i, j;
    l_55 = (safe_mul_func_int8_t_s_s(((*l_52) ^= (l_32 ^ ((safe_unary_minus_func_uint8_t_u(((!(safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((l_44 = (g_23[0][2][3].f1 == ((*l_40)++))), ((g_23[0][2][3].f1 >= ((*l_51) = ((l_39 >= (((safe_sub_func_uint16_t_u_u(l_32, ((g_10.f0 = (safe_lshift_func_int8_t_s_u((((((safe_add_func_uint16_t_u_u(((g_23[0][2][3].f0 || l_32) , l_39), 0xBF30L)) , g_10.f3) >= 0xD3506333L) , g_2) & g_10.f0), 6))) && 4UL))) > 0x7FCB947DA7D1F030LL) , l_39)) < 1UL))) && 0x322AL))), l_39))) >= l_32))) >= g_23[0][2][3].f1))), l_32));
    for (g_10.f4 = 0; (g_10.f4 == (-3)); g_10.f4--)
    { 
        int32_t **l_58 = &l_54[0][1];
        (*l_58) = &g_2;
    }
    return g_23[0][2][3].f2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
    transparent_crc(g_10.f3, "g_10.f3", print_hash_value);
    transparent_crc(g_10.f4, "g_10.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_23[i][j][k].f0, "g_23[i][j][k].f0", print_hash_value);
                transparent_crc(g_23[i][j][k].f1, "g_23[i][j][k].f1", print_hash_value);
                transparent_crc(g_23[i][j][k].f2, "g_23[i][j][k].f2", print_hash_value);
                transparent_crc(g_23[i][j][k].f3, "g_23[i][j][k].f3", print_hash_value);
                transparent_crc(g_23[i][j][k].f4, "g_23[i][j][k].f4", print_hash_value);
                transparent_crc(g_23[i][j][k].f5, "g_23[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_104[i][j][k], "g_104[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_117.f0.f0, "g_117.f0.f0", print_hash_value);
    transparent_crc(g_117.f0.f1, "g_117.f0.f1", print_hash_value);
    transparent_crc(g_117.f0.f2, "g_117.f0.f2", print_hash_value);
    transparent_crc(g_117.f0.f3, "g_117.f0.f3", print_hash_value);
    transparent_crc(g_117.f0.f4, "g_117.f0.f4", print_hash_value);
    transparent_crc(g_117.f0.f5, "g_117.f0.f5", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_332.f0, "g_332.f0", print_hash_value);
    transparent_crc(g_332.f1, "g_332.f1", print_hash_value);
    transparent_crc(g_332.f2, "g_332.f2", print_hash_value);
    transparent_crc(g_332.f3, "g_332.f3", print_hash_value);
    transparent_crc(g_332.f4, "g_332.f4", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_419[i], "g_419[i]", print_hash_value);

    }
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_949.f0, "g_949.f0", print_hash_value);
    transparent_crc(g_949.f1, "g_949.f1", print_hash_value);
    transparent_crc(g_949.f2, "g_949.f2", print_hash_value);
    transparent_crc(g_949.f3, "g_949.f3", print_hash_value);
    transparent_crc(g_949.f4, "g_949.f4", print_hash_value);
    transparent_crc(g_949.f5, "g_949.f5", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1006[i], "g_1006[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1024[i][j][k], "g_1024[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1048.f0.f0, "g_1048.f0.f0", print_hash_value);
    transparent_crc(g_1048.f0.f1, "g_1048.f0.f1", print_hash_value);
    transparent_crc(g_1048.f0.f2, "g_1048.f0.f2", print_hash_value);
    transparent_crc(g_1048.f0.f3, "g_1048.f0.f3", print_hash_value);
    transparent_crc(g_1048.f0.f4, "g_1048.f0.f4", print_hash_value);
    transparent_crc(g_1048.f0.f5, "g_1048.f0.f5", print_hash_value);
    transparent_crc(g_1091, "g_1091", print_hash_value);
    transparent_crc(g_1128, "g_1128", print_hash_value);
    transparent_crc(g_1182, "g_1182", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1191, "g_1191", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1192[i][j][k], "g_1192[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1194, "g_1194", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1274, "g_1274", print_hash_value);
    transparent_crc(g_1275, "g_1275", print_hash_value);
    transparent_crc(g_1276, "g_1276", print_hash_value);
    transparent_crc(g_1278, "g_1278", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1279[i], "g_1279[i]", print_hash_value);

    }
    transparent_crc(g_1281, "g_1281", print_hash_value);
    transparent_crc(g_1289, "g_1289", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1306[i][j][k], "g_1306[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1318, "g_1318", print_hash_value);
    transparent_crc(g_1319, "g_1319", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1348[i], "g_1348[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1359[i][j][k], "g_1359[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1360, "g_1360", print_hash_value);
    transparent_crc(g_1362, "g_1362", print_hash_value);
    transparent_crc(g_1363, "g_1363", print_hash_value);
    transparent_crc(g_1364, "g_1364", print_hash_value);
    transparent_crc(g_1506, "g_1506", print_hash_value);
    transparent_crc(g_1529, "g_1529", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1551[i], "g_1551[i]", print_hash_value);

    }
    transparent_crc(g_1565, "g_1565", print_hash_value);
    transparent_crc(g_1702, "g_1702", print_hash_value);
    transparent_crc(g_1722.f0, "g_1722.f0", print_hash_value);
    transparent_crc(g_1722.f1, "g_1722.f1", print_hash_value);
    transparent_crc(g_1722.f2, "g_1722.f2", print_hash_value);
    transparent_crc(g_1722.f3, "g_1722.f3", print_hash_value);
    transparent_crc(g_1722.f4, "g_1722.f4", print_hash_value);
    transparent_crc(g_1742, "g_1742", print_hash_value);
    transparent_crc(g_1743, "g_1743", print_hash_value);
    transparent_crc(g_1773, "g_1773", print_hash_value);
    transparent_crc(g_1846, "g_1846", print_hash_value);
    transparent_crc(g_1886, "g_1886", print_hash_value);
    transparent_crc(g_1888, "g_1888", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1889[i][j][k], "g_1889[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1897.f0, "g_1897.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1901[i].f0, "g_1901[i].f0", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1903[i].f0, "g_1903[i].f0", print_hash_value);

    }
    transparent_crc(g_2038, "g_2038", print_hash_value);
    transparent_crc(g_2133, "g_2133", print_hash_value);
    transparent_crc(g_2277, "g_2277", print_hash_value);
    transparent_crc(g_2282.f0.f0, "g_2282.f0.f0", print_hash_value);
    transparent_crc(g_2282.f0.f1, "g_2282.f0.f1", print_hash_value);
    transparent_crc(g_2282.f0.f2, "g_2282.f0.f2", print_hash_value);
    transparent_crc(g_2282.f0.f3, "g_2282.f0.f3", print_hash_value);
    transparent_crc(g_2282.f0.f4, "g_2282.f0.f4", print_hash_value);
    transparent_crc(g_2282.f0.f5, "g_2282.f0.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2525[i], "g_2525[i]", print_hash_value);

    }
    transparent_crc(g_2526, "g_2526", print_hash_value);
    transparent_crc(g_2628.f0, "g_2628.f0", print_hash_value);
    transparent_crc(g_2628.f1, "g_2628.f1", print_hash_value);
    transparent_crc(g_2628.f2, "g_2628.f2", print_hash_value);
    transparent_crc(g_2628.f3, "g_2628.f3", print_hash_value);
    transparent_crc(g_2628.f4, "g_2628.f4", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
