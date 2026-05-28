// SPDX-License-Identifier: MIT
// cctest_csmith_0f1686d4.c --- cctest case csmith_0f1686d4 (csmith seed 253134548)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf8c1aeac */
/* @exp_ticks 0x4cc3 */

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

// Options:   -s 253134548 -o /tmp/csmith_gen_sr7obrs8/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
   uint32_t  f1;
   int32_t  f2;
};

union U1 {
   const uint32_t  f0;
   const uint8_t  f1;
   int32_t  f2;
   int16_t  f3;
   int64_t  f4;
};

union U2 {
   uint16_t  f0;
   struct S0  f1;
};

union U3 {
   uint32_t  f0;
   uint32_t  f1;
   int64_t  f2;
};


static int32_t g_3 = 1L;
static int32_t g_8 = (-5L);
static uint8_t g_9 = 3UL;
static int8_t g_39[4][1][7] = {{{4L,0xC2L,4L,(-1L),0xC2L,0x4BL,0x4BL}},{{0xC2L,7L,(-1L),7L,0xC2L,(-1L),0xFEL}},{{0xFEL,0x4BL,(-1L),0xFEL,(-1L),0x4BL,0xFEL}},{{4L,0xFEL,0x4BL,(-1L),0xFEL,(-1L),0x4BL}}};
static uint64_t g_56 = 0xF412F3A6825D8284LL;
static int64_t g_67 = 0xCC5119B5F814D196LL;
static int32_t g_71 = 2L;
static int32_t *g_74[4] = {&g_71,&g_71,&g_71,&g_71};
static struct S0 g_83 = {0xB887L,0xE475996EL,-1L};
static int16_t g_93 = 0xC7A9L;
static uint32_t g_95[1] = {0xDA12577EL};
static int8_t *g_112 = &g_39[0][0][0];
static const union U3 g_159 = {18446744073709551615UL};
static union U1 g_199 = {4294967292UL};
static uint8_t g_216[3][7][1] = {{{0xA3L},{9UL},{0xA3L},{9UL},{0xA3L},{9UL},{0xA3L}},{{9UL},{0xA3L},{9UL},{0xA3L},{9UL},{0xA3L},{9UL}},{{0xA3L},{9UL},{0xA3L},{9UL},{0xA3L},{9UL},{0xA3L}}};
static uint16_t *g_240 = &g_83.f0;
static union U3 g_245 = {0x8B33212FL};
static union U3 *g_244 = &g_245;
static union U3 **g_243 = &g_244;
static int64_t *g_310[1] = {&g_245.f2};
static uint16_t g_325 = 0x7CC1L;
static uint16_t g_327 = 0x8B5FL;
static int32_t **g_351 = &g_74[2];
static int32_t ***g_350 = &g_351;
static int32_t ****g_349 = &g_350;
static int16_t g_356[5][3] = {{0xCA2BL,0xCA2BL,0xDA0BL},{0xCA2BL,0xCA2BL,0xDA0BL},{0xCA2BL,0xCA2BL,0xDA0BL},{0xCA2BL,0xCA2BL,0xDA0BL},{0xCA2BL,0xCA2BL,0xDA0BL}};
static int16_t * const g_359 = &g_199.f3;
static int16_t * const *g_358 = &g_359;
static int64_t **g_367 = &g_310[0];
static int32_t *****g_380 = &g_349;
static union U2 g_414 = {0x1787L};
static int8_t **g_447 = &g_112;
static int64_t ***g_451 = (void*)0;
static const int32_t g_464 = 0x297D01C4L;
static const int32_t g_466 = (-1L);
static int32_t ***g_509[5] = {&g_351,&g_351,&g_351,&g_351,&g_351};
static int32_t **** const g_508 = &g_509[3];
static int32_t **** const *g_507 = &g_508;
static uint16_t g_639 = 0x52EBL;
static int16_t *g_686[7] = {&g_93,&g_93,&g_93,&g_93,&g_93,&g_93,&g_93};
static int16_t **g_685 = &g_686[3];
static int16_t ***g_684 = &g_685;
static struct S0 *g_692 = &g_83;
static struct S0 **g_691 = &g_692;
static int8_t g_785 = 0xADL;
static uint32_t g_850 = 0x58A3D46FL;
static union U1 *g_978 = &g_199;
static union U1 **g_977[5][1][6] = {{{&g_978,&g_978,&g_978,&g_978,&g_978,&g_978}},{{&g_978,&g_978,&g_978,&g_978,&g_978,&g_978}},{{&g_978,&g_978,&g_978,&g_978,&g_978,&g_978}},{{&g_978,&g_978,&g_978,&g_978,&g_978,&g_978}},{{&g_978,&g_978,&g_978,&g_978,&g_978,&g_978}}};
static union U1 ***g_976 = &g_977[1][0][4];
static uint16_t **g_1015 = &g_240;
static uint16_t ** const *g_1014 = &g_1015;
static uint16_t ** const **g_1013 = &g_1014;
static int32_t ** const *g_1064[4] = {&g_351,&g_351,&g_351,&g_351};
static int32_t ** const **g_1063 = &g_1064[3];
static int32_t ** const ***g_1062 = &g_1063;
static uint8_t *g_1100 = (void*)0;
static uint8_t **g_1099 = &g_1100;
static uint8_t ** const *g_1098 = &g_1099;
static uint8_t ***g_1126 = &g_1099;
static uint8_t ****g_1125[7] = {&g_1126,&g_1126,&g_1126,&g_1126,&g_1126,&g_1126,&g_1126};
static uint8_t ****g_1127 = &g_1126;
static uint8_t ****g_1129[1] = {&g_1126};
static int16_t g_1200 = 0xECC5L;
static uint32_t g_1202 = 18446744073709551615UL;
static int32_t g_1259 = 0x2A4DC7D8L;
static const uint16_t g_1268 = 7UL;
static const uint16_t *g_1269[5][1][5] = {{{&g_1268,(void*)0,(void*)0,&g_1268,&g_1268}},{{&g_1268,&g_1268,&g_1268,&g_1268,&g_1268}},{{&g_1268,&g_1268,(void*)0,(void*)0,&g_1268}},{{&g_1268,&g_1268,&g_1268,&g_1268,&g_1268}},{{&g_1268,(void*)0,(void*)0,&g_1268,&g_1268}}};
static union U2 *g_1300 = (void*)0;
static int64_t g_1342 = 0x05F1CD770F59EDFCLL;
static int32_t * const *g_1385 = (void*)0;
static int32_t * const **g_1384 = &g_1385;
static int32_t * const ***g_1383[2][2][1] = {{{&g_1384},{&g_1384}},{{&g_1384},{&g_1384}}};
static int8_t g_1496[7] = {0x95L,0x95L,0x95L,0x95L,0x95L,0x95L,0x95L};
static int8_t * const g_1515 = (void*)0;
static int8_t * const * const g_1514 = &g_1515;
static int8_t * const * const *g_1513 = &g_1514;
static uint64_t g_1639 = 18446744073709551610UL;
static int32_t g_1640 = 0xD795A25CL;
static union U1 ****g_1689 = &g_976;
static union U1 *****g_1688 = &g_1689;



static const int32_t  func_1(void);
static int32_t  func_12(int32_t * const  p_13, uint16_t  p_14, uint32_t  p_15, int32_t * p_16, int8_t  p_17);
static int32_t * func_18(int32_t * p_19, int32_t  p_20, int32_t  p_21, uint8_t  p_22);
static int64_t  func_34(int32_t ** const  p_35);
static int32_t ** const  func_36(union U3  p_37);
static union U3  func_40(int32_t  p_41);
static int32_t  func_47(struct S0  p_48, const int8_t * p_49);
static int32_t * func_50(int32_t  p_51);




static const int32_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_4 = &g_3;
    int32_t *l_5 = (void*)0;
    int8_t l_6[4][2][5] = {{{0x20L,0x65L,(-4L),0x20L,2L},{0x65L,0L,(-4L),0x54L,(-4L)}},{{2L,2L,0L,0x20L,0x17L},{0x65L,0x17L,(-1L),0x20L,0x20L}},{{0x20L,0x24L,0x20L,0x54L,0x32L},{(-1L),0x17L,0x65L,0x20L,0x32L}},{{0L,2L,2L,0L,0x20L},{(-4L),0L,0x65L,0x32L,0x17L}}};
    int32_t *l_7[3];
    uint8_t l_1530 = 0x24L;
    uint32_t l_1533 = 0UL;
    struct S0 l_1541 = {0xDAF4L,6UL,0x0F0E1327L};
    uint8_t l_1619 = 0x41L;
    uint32_t l_1625 = 1UL;
    const uint16_t l_1682 = 0xEA73L;
    const int64_t l_1704 = 0xB697CF638766457DLL;
    int32_t *l_1761 = &g_1259;
    const int32_t l_1765 = 0xD01F77AAL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_7[i] = (void*)0;
    g_9++;
    if (((*l_2) = ((9L < (func_12(l_7[0], g_9, g_9, func_18(l_2, (*l_4), ((((safe_rshift_func_int16_t_s_s((g_8 , g_3), g_3)) , (void*)0) != &g_3) == g_9), g_3), l_1530) & l_1533)) , (*****g_507))))
    { 
        union U2 *l_1534 = &g_414;
        union U2 **l_1535 = &g_1300;
        (*l_1535) = l_1534;
    }
    else
    { 
        uint8_t l_1536 = 1UL;
        int32_t *** const **l_1539 = (void*)0;
        int32_t l_1562 = 0x5F780867L;
        int32_t l_1563[7] = {(-1L),0x578B4587L,0x578B4587L,(-1L),0x578B4587L,0x578B4587L,(-1L)};
        int32_t l_1706 = 0x62C57799L;
        struct S0 l_1747 = {5UL,4UL,0x98ED7D0FL};
        uint8_t l_1762 = 0UL;
        int i;
        if (l_1536)
        { 
            union U1 ****l_1537 = &g_976;
            union U1 *****l_1538 = &l_1537;
            int32_t l_1552[5];
            struct S0 *l_1569 = &l_1541;
            int32_t l_1598[4] = {7L,7L,7L,7L};
            int i;
            for (i = 0; i < 5; i++)
                l_1552[i] = (-5L);
            if (((((*l_1538) = l_1537) != (void*)0) , ((l_1539 = (void*)0) != &g_1383[0][0][0])))
            { 
                int32_t l_1540 = 2L;
                int32_t l_1543 = 0x2B646D26L;
                uint64_t *l_1553 = (void*)0;
                uint64_t *l_1554 = &g_56;
                int32_t l_1556 = 0x18FEE754L;
                int32_t l_1557 = (-1L);
                int32_t l_1558 = 1L;
                int32_t l_1559 = 0L;
                int32_t l_1560[4][6];
                uint32_t l_1566 = 0x87BBB39BL;
                int32_t *l_1579 = &g_71;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_1560[i][j] = 2L;
                }
                for (l_1530 = 0; (l_1530 <= 0); l_1530 += 1)
                { 
                    struct S0 l_1542[3][2] = {{{65530UL,0xFBBD0904L,8L},{65530UL,0xFBBD0904L,8L}},{{65530UL,0xFBBD0904L,8L},{65530UL,0xFBBD0904L,8L}},{{65530UL,0xFBBD0904L,8L},{65530UL,0xFBBD0904L,8L}}};
                    int i, j;
                    if (l_1540)
                        break;
                    l_1542[0][0] = l_1541;
                    if (l_1540)
                        continue;
                    (*l_2) |= (-1L);
                    l_1543 &= (****g_349);
                }
                if ((g_95[0] , (((*l_2) != ((**g_367) = 0xD5DA58BC6159BED8LL)) >= ((0L && ((*l_1554) = (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((***g_684), (safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((***g_684), 9L)), l_1552[4])))), 7UL)))) > (*g_112)))))
                { 
                    (****g_380) = &l_1552[4];
                    return l_1552[4];
                }
                else
                { 
                    int32_t l_1555 = 0L;
                    int32_t l_1561 = 0x642A44A7L;
                    int32_t l_1564 = (-2L);
                    int32_t l_1565[7][3][6] = {{{0xAD44B8CAL,0xAD44B8CAL,0xA0DD10BBL,0xCE682DE4L,1L,(-1L)},{0x96E5E701L,(-1L),(-8L),0x7C7B130DL,(-10L),0xA0DD10BBL},{0xA0DD10BBL,0x96E5E701L,(-8L),(-9L),0xAD44B8CAL,(-1L)}},{{0x27CA3A8CL,(-9L),0xAD44B8CAL,0x8C939E45L,0x0261C8B4L,(-9L)},{0x8C939E45L,0x0261C8B4L,(-9L),0x7C7B130DL,0xCE682DE4L,0x7C7B130DL},{0xB7CC3122L,0L,0xB7CC3122L,(-8L),0xA0DD10BBL,1L}},{{0xA0DD10BBL,0x7C7B130DL,0x96E5E701L,0xA5479E29L,0x09CB2036L,0x5D93EF7FL},{0x0261C8B4L,0x27CA3A8CL,6L,0xA5479E29L,1L,(-8L)},{0xA0DD10BBL,(-10L),0x7C7B130DL,(-8L),(-1L),0x96E5E701L}},{{0xB7CC3122L,1L,0x659CEDC5L,0x7C7B130DL,0xDB63B705L,0xDB63B705L},{0x8C939E45L,(-1L),(-1L),0x8C939E45L,0x27CA3A8CL,0xD8DA6957L},{0L,(-8L),0x09CB2036L,0x659CEDC5L,0L,0xA0DD10BBL}},{{0xAD44B8CAL,(-9L),0x8C939E45L,0xDB63B705L,0L,6L},{1L,(-8L),0x0261C8B4L,0xC86A4DD7L,0x27CA3A8CL,(-10L)},{0x12CAAC3BL,(-1L),(-9L),6L,0xDB63B705L,0xC86A4DD7L}},{{(-1L),1L,0x5D93EF7FL,1L,(-1L),0xB7CC3122L},{0x5D93EF7FL,(-10L),0L,0xAD44B8CAL,1L,(-1L)},{1L,0x27CA3A8CL,0xCE682DE4L,(-10L),0x09CB2036L,(-1L)}},{{0xA5479E29L,0x7C7B130DL,0L,1L,0xA0DD10BBL,0xB7CC3122L},{0x09CB2036L,0L,0x5D93EF7FL,(-9L),0xCE682DE4L,0xC86A4DD7L},{(-10L),0x0261C8B4L,(-9L),(-9L),0x0261C8B4L,(-10L)}}};
                    int i, j, k;
                    l_1566--;
                    l_1556 |= l_1555;
                    l_1569 = (void*)0;
                    l_1579 = func_18(func_50(l_1564), ((safe_mul_func_int16_t_s_s(((l_1558 >= 0x47L) , ((((((*l_1554)++) <= g_8) < (safe_sub_func_int16_t_s_s((!((safe_lshift_func_uint16_t_u_u((((((***g_1063) == (*g_351)) <= 0x341E065B5DB908B6LL) >= (**g_367)) < l_1552[4]), (**g_1015))) ^ l_1552[1])), (**g_1015)))) || (*l_2)) > 0x8C56508DL)), 0xF49EL)) && 1L), l_1564, l_1563[6]);
                }
            }
            else
            { 
                int8_t l_1601 = 1L;
                int32_t l_1602[6][6][7] = {{{2L,6L,1L,0L,(-7L),3L,0x12E5ABA3L},{0L,(-1L),0x903CD761L,0x7FFCFE54L,0x4BBE55AFL,(-7L),1L},{0L,0xF195EC4AL,0x9A798E5AL,1L,0x59EF6654L,0xFDA1D8B8L,0x55DDB88EL},{4L,(-10L),(-10L),0xB3B45712L,(-7L),4L,1L},{0x5D9AC54EL,0x9A798E5AL,0x260CCDF5L,6L,(-8L),(-8L),6L},{0xB3A0E5E0L,1L,0xB3A0E5E0L,(-3L),0x4023EF69L,(-6L),(-1L)}},{{0L,(-9L),0L,0xFDAB8C43L,(-3L),0x9A798E5AL,6L},{0L,(-7L),0L,1L,7L,(-6L),9L},{0xE7F95924L,0xF4C46A56L,0xF195EC4AL,0xB39EF4E2L,(-8L),(-8L),(-9L)},{0xA0828E18L,0x2D87A54FL,0x5840C1E1L,9L,1L,4L,0x2D87A54FL},{1L,6L,2L,5L,0xF195EC4AL,0xFDA1D8B8L,0x6F022675L},{(-1L),1L,(-8L),0x903CD761L,4L,(-7L),7L}},{{0x022DE4F9L,2L,0x1C2FE737L,0xB39EF4E2L,(-8L),0xB39EF4E2L,0x1C2FE737L},{(-3L),(-3L),(-1L),0x637638E2L,(-6L),1L,9L},{(-8L),0xC0CF5140L,0x12E5ABA3L,0L,0x9A798E5AL,(-8L),0x81BFCD60L},{0x5840C1E1L,(-1L),0xAAE6077CL,0L,(-6L),0L,0x577EA7DFL},{3L,(-1L),1L,6L,(-8L),0x661D4FDBL,0x007AE7CCL},{0xAAE6077CL,(-1L),0xEE920F4EL,0x903CD761L,4L,(-4L),0x273E05E7L}},{{0xF195EC4AL,0x9A798E5AL,1L,0x59EF6654L,0xFDA1D8B8L,0x55DDB88EL,(-3L)},{9L,0xE2DD8803L,0x27D663F8L,(-1L),(-7L),(-1L),0xD2732D95L},{(-1L),0x5D9AC54EL,0x022DE4F9L,3L,3L,0x022DE4F9L,0x5D9AC54EL},{0x3491F346L,0x88F715F3L,(-1L),0x9FFBFC76L,0xD91219B4L,0xD2732D95L,0xA0828E18L},{0L,0x1C2FE737L,3L,(-1L),1L,0xB39EF4E2L,0xFDA1D8B8L},{9L,(-1L),0x273E05E7L,0x9FFBFC76L,0L,(-10L),0x167F9D1BL}},{{(-3L),0xFDA1D8B8L,0x12E5ABA3L,3L,(-7L),0L,1L},{(-8L),(-7L),(-4L),(-1L),0L,(-8L),0x577EA7DFL},{0x661D4FDBL,0xF4C46A56L,(-8L),0x59EF6654L,0x5D9AC54EL,2L,(-8L)},{0x7FFCFE54L,1L,0x3491F346L,0x903CD761L,0x577EA7DFL,0x5840C1E1L,0xB3A0E5E0L},{3L,0xF195EC4AL,0x661D4FDBL,6L,0x661D4FDBL,0xF195EC4AL,3L},{9L,0L,0L,0L,(-3L),0L,0xE2DD8803L}},{{(-1L),(-9L),0xFDAB8C43L,0L,3L,0L,(-7L)},{0x273E05E7L,(-1L),0L,0x637638E2L,(-10L),0xB3A0E5E0L,(-1L)},{(-10L),0x1C2FE737L,0x661D4FDBL,0xB39EF4E2L,(-9L),0x260CCDF5L,0xA1AD4A6BL},{0L,0x167F9D1BL,0x3491F346L,1L,0xEE920F4EL,(-10L),(-3L)},{(-8L),2L,(-8L),0xC0CF5140L,0L,0x9A798E5AL,0x1C2FE737L},{0L,0xD91219B4L,(-4L),0x3491F346L,(-6L),0x903CD761L,1L}}};
                int i, j, k;
                for (g_325 = 0; (g_325 == 53); g_325 = safe_add_func_uint8_t_u_u(g_325, 2))
                { 
                    uint8_t l_1584 = 0x41L;
                    int32_t l_1585 = (-1L);
                    struct S0 * const l_1591 = &l_1541;
                    int64_t *l_1599[4][4] = {{(void*)0,&g_67,&g_67,(void*)0},{&g_67,(void*)0,&g_1342,(void*)0},{&g_67,&g_1342,&g_67,&g_1342},{(void*)0,(void*)0,&g_1342,&g_1342}};
                    int i, j;
                    (*g_1127) = ((((safe_sub_func_int16_t_s_s(((1UL & 0x49976760L) >= (l_1584 >= (l_1585 = 0xFE6412E5938600CALL))), (!(safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((void*)0 == l_1591) ^ (l_1552[3] |= (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((((&g_685 == (void*)0) <= (-4L)) > 1UL), g_95[0])), 4)) , l_1598[3]), 65527UL)))), g_850)), l_1598[3]))))) , (void*)0) == (void*)0) , (void*)0);
                }
                if (((void*)0 == &g_358))
                { 
                    int64_t l_1600 = 0xA24CAFC83E546448LL;
                    int32_t l_1603[4][4] = {{0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L)},{0L,(-1L),0L,(-1L)}};
                    uint32_t l_1604 = 0x75F9CA08L;
                    int i, j;
                    --l_1604;
                    return l_1598[1];
                }
                else
                { 
                    return (****g_508);
                }
            }
        }
        else
        { 
            uint64_t l_1607[2];
            const int16_t l_1618 = 1L;
            int16_t l_1679[7][3][1] = {{{0x0C0CL},{(-1L)},{7L}},{{0x6B2CL},{7L},{(-1L)}},{{0x0C0CL},{(-1L)},{7L}},{{0x6B2CL},{7L},{(-1L)}},{{0x0C0CL},{(-1L)},{7L}},{{0x6B2CL},{7L},{(-1L)}},{{0x0C0CL},{(-1L)},{7L}}};
            int32_t *l_1683 = (void*)0;
            uint16_t l_1690 = 65533UL;
            int32_t l_1707[5] = {0x729C0031L,0x729C0031L,0x729C0031L,0x729C0031L,0x729C0031L};
            uint32_t l_1725 = 0x8169ACF0L;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1607[i] = 0UL;
        }
        l_1762++;
    }
    return l_1765;
}



static int32_t  func_12(int32_t * const  p_13, uint16_t  p_14, uint32_t  p_15, int32_t * p_16, int8_t  p_17)
{ 
    int32_t *l_1531 = &g_3;
    union U1 *l_1532 = &g_199;
    (**g_350) = l_1531;
    (**g_976) = l_1532;
    return (****g_1063);
}



static int32_t * func_18(int32_t * p_19, int32_t  p_20, int32_t  p_21, uint8_t  p_22)
{ 
    int32_t ***l_25 = (void*)0;
    int32_t *l_27 = (void*)0;
    int32_t **l_26 = &l_27;
    uint8_t ***l_1302 = &g_1099;
    int32_t l_1314 = 0x51769CA3L;
    int32_t l_1319 = 0x66B80EC9L;
    int32_t l_1320[7][7][5] = {{{0xEBFD4D24L,2L,(-10L),0xC653C700L,1L},{6L,(-10L),(-1L),0L,(-4L)},{0x04FCE083L,(-10L),4L,(-3L),0L},{0L,2L,0x04FCE083L,0x25FAC1D0L,0x6378B34BL},{4L,0x31A98601L,8L,(-3L),(-3L)},{1L,(-7L),1L,0L,0x03E0AEA7L},{1L,3L,0x438249C6L,0xC653C700L,0xFA5CFF93L}},{{4L,0x3345141FL,1L,0x762222E3L,(-1L)},{0L,0x0023C2F5L,0x438249C6L,0xFA5CFF93L,0x25FAC1D0L},{0x04FCE083L,0xC517ED5BL,1L,0L,0x25FAC1D0L},{6L,0L,8L,0x6378B34BL,(-1L)},{0xEBFD4D24L,0xA2CE66BBL,0x04FCE083L,0L,0xFA5CFF93L},{0x598A1199L,0L,4L,0xF5E0CD72L,0x03E0AEA7L},{1L,0xC517ED5BL,(-1L),0xF5E0CD72L,(-3L)}},{{1L,0x0023C2F5L,(-10L),0L,0x6378B34BL},{(-7L),0x3345141FL,1L,0x6378B34BL,0L},{1L,3L,6L,0L,(-4L)},{1L,(-7L),6L,0xFA5CFF93L,1L},{0x598A1199L,0x31A98601L,1L,0x762222E3L,(-1L)},{0xEBFD4D24L,2L,(-10L),0xC653C700L,1L},{6L,(-10L),(-1L),0L,(-4L)}},{{0x04FCE083L,(-10L),4L,(-3L),0L},{0L,2L,0x04FCE083L,0x25FAC1D0L,0x6378B34BL},{4L,0x31A98601L,8L,(-3L),(-3L)},{1L,(-7L),1L,0L,0x03E0AEA7L},{1L,3L,0x438249C6L,0xC653C700L,0xFA5CFF93L},{4L,0x3345141FL,1L,0x762222E3L,(-1L)},{0L,0x0023C2F5L,0x438249C6L,0xFA5CFF93L,0x25FAC1D0L}},{{0x04FCE083L,0xC517ED5BL,1L,0L,0x25FAC1D0L},{6L,0L,8L,0x6378B34BL,(-1L)},{0xEBFD4D24L,0xA2CE66BBL,0x04FCE083L,0L,0xFA5CFF93L},{0x598A1199L,0x93C34B7BL,0xF8727EB4L,6L,(-1L)},{0xBE9676BCL,1L,0x67195849L,6L,0x438249C6L},{(-7L),(-8L),0x456E764CL,1L,(-10L)},{(-5L),(-5L),0xAA21924CL,(-10L),1L}},{{(-7L),0x112E6C50L,0xC2598B50L,(-1L),(-7L)},{0xBE9676BCL,6L,0xC2598B50L,4L,0xEBFD4D24L},{(-1L),1L,0xAA21924CL,0x04FCE083L,0xFA51F2ECL},{0xFDA396E7L,0xFFF5C39BL,0x456E764CL,8L,0xEBFD4D24L},{0xC2598B50L,0x68142BF6L,0x67195849L,1L,(-7L)},{0x0B6F9167L,0x68142BF6L,0xF8727EB4L,0x438249C6L,1L},{0L,0xFFF5C39BL,0x0B6F9167L,1L,(-10L)}},{{0xF8727EB4L,1L,0L,0x438249C6L,0x438249C6L},{(-1L),6L,(-1L),1L,(-1L)},{(-1L),0x112E6C50L,(-8L),8L,4L},{0xF8727EB4L,(-5L),(-7L),0x04FCE083L,1L},{0L,(-8L),(-8L),4L,1L},{0x0B6F9167L,1L,(-1L),(-1L),1L},{0xC2598B50L,0x93C34B7BL,0L,(-10L),1L}}};
    int16_t l_1321[5] = {0xBA3AL,0xBA3AL,0xBA3AL,0xBA3AL,0xBA3AL};
    uint16_t l_1322 = 4UL;
    uint16_t l_1354 = 0UL;
    uint32_t l_1390 = 0x159EF5E3L;
    int64_t ***l_1425 = &g_367;
    const uint16_t **l_1454 = &g_1269[0][0][3];
    int16_t ****l_1460 = &g_684;
    uint64_t l_1466 = 0x2464083259B6741BLL;
    struct S0 **l_1475[2];
    uint64_t l_1484 = 0x8B16A81BBCD8521FLL;
    union U1 **l_1507 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1475[i] = &g_692;
    l_26 = (void*)0;
    for (g_3 = (-5); (g_3 > (-10)); g_3 = safe_sub_func_int32_t_s_s(g_3, 6))
    { 
        int8_t *l_38 = &g_39[3][0][0];
        int32_t l_1256 = 0xE21CB2A1L;
        int32_t l_1257 = 4L;
        int32_t *l_1258 = &g_1259;
        struct S0 **l_1262 = &g_692;
    }
    return (****g_380);
}



static int64_t  func_34(int32_t ** const  p_35)
{ 
    union U2 l_843[7][3] = {{{65527UL},{0xD872L},{65527UL}},{{65527UL},{0xD872L},{65527UL}},{{65527UL},{0xD872L},{65527UL}},{{65527UL},{0xD872L},{65527UL}},{{65527UL},{0xD872L},{65527UL}},{{65527UL},{0xD872L},{65527UL}},{{65527UL},{0xD872L},{65527UL}}};
    int64_t **l_848 = &g_310[0];
    int32_t l_865 = 1L;
    int32_t l_866 = 0L;
    int32_t l_867 = 0x8C7D5273L;
    int32_t l_868 = 0xDF05F54CL;
    int32_t l_869 = 0x7B4720A8L;
    int32_t l_870[6][4] = {{1L,0x02CB2733L,4L,0x37A340D2L},{0xA898D805L,0x172C167DL,0xA898D805L,0x37A340D2L},{4L,0x02CB2733L,1L,(-9L)},{0x94A015F6L,(-9L),0x02CB2733L,0x02CB2733L},{0L,0L,0x02CB2733L,0xA898D805L},{0x94A015F6L,0x9C32DC7EL,1L,(-9L)}};
    int64_t l_889 = 0x8BE924B614B034F1LL;
    uint16_t **l_890[7][6][5] = {{{&g_240,(void*)0,(void*)0,&g_240,&g_240},{(void*)0,&g_240,(void*)0,&g_240,(void*)0},{&g_240,&g_240,&g_240,&g_240,(void*)0},{&g_240,(void*)0,&g_240,(void*)0,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240}},{{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,(void*)0,(void*)0,&g_240}},{{&g_240,&g_240,(void*)0,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,(void*)0,(void*)0,(void*)0,&g_240},{&g_240,&g_240,(void*)0,&g_240,(void*)0},{&g_240,&g_240,&g_240,&g_240,&g_240},{(void*)0,&g_240,&g_240,&g_240,(void*)0}},{{(void*)0,&g_240,&g_240,&g_240,(void*)0},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,(void*)0,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{(void*)0,(void*)0,&g_240,&g_240,&g_240}},{{&g_240,&g_240,(void*)0,(void*)0,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,(void*)0,&g_240,&g_240,(void*)0},{&g_240,&g_240,&g_240,&g_240,(void*)0},{&g_240,&g_240,&g_240,(void*)0,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240}},{{&g_240,&g_240,&g_240,(void*)0,&g_240},{(void*)0,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_240,&g_240},{&g_240,&g_240,(void*)0,&g_240,&g_240}},{{(void*)0,&g_240,(void*)0,&g_240,&g_240},{(void*)0,&g_240,&g_240,&g_240,(void*)0},{&g_240,&g_240,&g_240,(void*)0,&g_240},{&g_240,&g_240,&g_240,(void*)0,&g_240},{&g_240,&g_240,&g_240,&g_240,(void*)0},{&g_240,&g_240,&g_240,&g_240,&g_240}}};
    uint16_t ***l_891 = &l_890[6][1][4];
    union U3 l_892 = {0x0B916E6BL};
    uint16_t **l_893 = &g_240;
    int32_t *l_894 = &g_83.f2;
    int32_t l_944 = (-3L);
    const union U1 *l_1000 = &g_199;
    int8_t l_1033 = (-3L);
    int32_t *l_1056 = (void*)0;
    uint32_t l_1078 = 4294967295UL;
    int16_t ***l_1148[6][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_685,&g_685,(void*)0,&g_685}};
    uint32_t l_1187 = 0UL;
    union U3 **l_1226 = &g_244;
    struct S0 *l_1252 = (void*)0;
    int i, j, k;
    for (g_93 = 0; (g_93 <= 0); g_93 += 1)
    { 
        uint32_t l_842 = 18446744073709551615UL;
        int8_t **l_844 = &g_112;
        int64_t **l_845 = (void*)0;
        int32_t l_862[6] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
        int32_t *l_864[7][4][3] = {{{&g_71,(void*)0,&l_862[4]},{(void*)0,(void*)0,&l_862[4]},{&g_71,&g_71,&l_862[4]},{(void*)0,(void*)0,&l_862[4]}},{{(void*)0,&g_71,(void*)0},{(void*)0,(void*)0,&g_71},{(void*)0,(void*)0,(void*)0},{&g_71,(void*)0,&l_862[4]}},{{(void*)0,(void*)0,&l_862[4]},{&g_71,&g_71,&l_862[4]},{(void*)0,(void*)0,&l_862[4]},{(void*)0,&g_71,(void*)0}},{{(void*)0,(void*)0,&g_71},{(void*)0,(void*)0,(void*)0},{&g_71,(void*)0,&l_862[4]},{(void*)0,(void*)0,&l_862[4]}},{{&g_71,&g_71,&l_862[4]},{(void*)0,(void*)0,&l_862[4]},{(void*)0,&g_71,(void*)0},{(void*)0,(void*)0,&g_71}},{{(void*)0,(void*)0,(void*)0},{&g_71,(void*)0,&l_862[4]},{(void*)0,(void*)0,&l_862[4]},{&g_71,&g_71,&l_862[4]}},{{(void*)0,(void*)0,&l_862[4]},{(void*)0,&g_71,(void*)0},{(void*)0,(void*)0,&g_71},{(void*)0,(void*)0,(void*)0}}};
        uint8_t l_871[5] = {251UL,251UL,251UL,251UL,251UL};
        int16_t l_874 = 0x4A4EL;
        int i, j, k;
        for (g_199.f4 = 0; (g_199.f4 >= 0); g_199.f4 -= 1)
        { 
            union U2 l_846 = {65530UL};
            for (g_245.f1 = 0; (g_245.f1 <= 0); g_245.f1 += 1)
            { 
                union U1 l_855 = {4294967290UL};
                int32_t l_863 = 0x10A797FDL;
                for (g_56 = 0; (g_56 <= 0); g_56 += 1)
                { 
                    union U2 *l_847 = &g_414;
                    int32_t *l_849 = &g_71;
                    int i, j, k;
                    l_842 |= g_216[g_245.f1][(g_56 + 1)][g_199.f4];
                    (*l_849) &= ((((((l_843[1][1] , l_844) == (void*)0) , l_845) != (((*l_847) = l_846) , l_848)) > ((g_216[(g_245.f1 + 1)][(g_245.f1 + 2)][g_56] , &g_56) != (void*)0)) && 0L);
                    g_850--;
                    if ((*l_849))
                        break;
                    l_863 ^= (l_862[4] = (((safe_div_func_uint16_t_u_u(((l_846.f0 == ((l_855 , (-4L)) == ((((!(safe_add_func_uint16_t_u_u(((&g_367 == (void*)0) | (!(((((safe_add_func_int64_t_s_s(((void*)0 != (*g_447)), 0L)) || l_843[1][1].f0) <= 0xD68441CB97F3A338LL) >= (*g_240)) & g_356[3][2]))), 0xCE17L))) && l_855.f3) ^ (*l_849)) && g_9))) == l_855.f1), (-6L))) | l_846.f0) && l_843[1][1].f0));
                }
            }
        }
        for (g_325 = 0; (g_325 <= 0); g_325 += 1)
        { 
            return l_842;
        }
        --l_871[1];
        l_874 = 0x766C3E98L;
        for (g_414.f0 = 0; (g_414.f0 <= 0); g_414.f0 += 1)
        { 
            const int32_t l_875 = 0xB4ED5AF9L;
            if (l_875)
                break;
        }
    }
    for (g_83.f1 = (-15); (g_83.f1 != 21); g_83.f1 = safe_add_func_uint8_t_u_u(g_83.f1, 9))
    { 
        struct S0 l_878 = {0x4B75L,0xAF0F2EEBL,0x7629D622L};
        const union U3 l_888 = {0UL};
        l_843[1][1].f1 = l_878;
        l_870[5][2] = (l_878.f2 = (g_159.f0 < (g_466 , (((l_878.f2 && (safe_mod_func_int64_t_s_s(l_869, ((((((l_868 = 1L) != (~(safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((&g_684 == (l_888 , (void*)0)), l_870[4][1])), l_869)), 0x909BL)))) , l_867) ^ l_865) ^ l_889) ^ 65535UL)))) , 0x76L) || 0xFFL))));
    }
    return (*l_894);
}



static int32_t ** const  func_36(union U3  p_37)
{ 
    int32_t **l_433 = (void*)0;
    uint8_t l_434 = 0xE1L;
    int32_t l_456[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    union U1 *l_460 = &g_199;
    const int32_t *l_465 = &g_466;
    union U2 l_487 = {0xBAC0L};
    const int32_t **l_547 = &l_465;
    const int32_t ** const *l_546[7] = {&l_547,&l_547,&l_547,&l_547,&l_547,&l_547,&l_547};
    const int32_t ** const **l_545 = &l_546[1];
    int64_t l_548[1][6];
    const int8_t l_549 = 0x6DL;
    int64_t l_550 = 0x76E58631845602C0LL;
    uint8_t l_622 = 1UL;
    int32_t l_626 = 0xDB505DEBL;
    int16_t ***l_690 = (void*)0;
    uint8_t l_735 = 0x7DL;
    int32_t ** const l_739[7][7] = {{(void*)0,&g_74[0],(void*)0,&g_74[0],(void*)0,&g_74[0],(void*)0},{&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1]},{(void*)0,&g_74[0],(void*)0,&g_74[0],(void*)0,&g_74[0],(void*)0},{&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1]},{(void*)0,&g_74[0],(void*)0,&g_74[0],(void*)0,&g_74[0],(void*)0},{&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1]},{(void*)0,&g_74[0],(void*)0,&g_74[0],(void*)0,&g_74[0],(void*)0}};
    int32_t l_794 = 0x668A2367L;
    uint64_t l_820[2][4][3] = {{{18446744073709551609UL,4UL,4UL},{4UL,0x7C7D4E10EBBD21A4LL,1UL},{18446744073709551609UL,0x7C7D4E10EBBD21A4LL,18446744073709551609UL},{0x00118346F337C8E0LL,4UL,1UL}},{{0x00118346F337C8E0LL,0x00118346F337C8E0LL,4UL},{18446744073709551609UL,4UL,4UL},{4UL,0x7C7D4E10EBBD21A4LL,1UL},{18446744073709551609UL,0x7C7D4E10EBBD21A4LL,18446744073709551609UL}}};
    int64_t **l_834 = &g_310[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_548[i][j] = 0x61FE8829AA26C402LL;
    }
    (*g_350) = l_433;
    for (g_83.f0 = 0; (g_83.f0 <= 0); g_83.f0 += 1)
    { 
        int32_t *l_435 = &g_71;
        int8_t **l_449[7] = {&g_112,&g_112,&g_112,&g_112,&g_112,(void*)0,&g_112};
        int64_t ***l_450 = &g_367;
        int32_t l_453[2][2];
        const int32_t *l_467 = &g_71;
        int16_t l_497 = 0L;
        union U3 l_504[3][3] = {{{3UL},{0x57EA1C4DL},{3UL}},{{3UL},{0x57EA1C4DL},{3UL}},{{3UL},{0x57EA1C4DL},{3UL}}};
        int64_t l_592 = 3L;
        uint64_t *l_602 = &g_56;
        uint8_t l_603[6];
        int8_t ***l_610 = &g_447;
        int8_t l_625 = 0x54L;
        uint16_t *l_662 = &l_487.f0;
        union U1 * const l_665 = &g_199;
        int32_t l_701 = 0xA4A04111L;
        int32_t l_769 = (-9L);
        struct S0 l_778 = {0x5D9DL,0UL,0x33DC54A2L};
        int8_t l_824 = 0x0CL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_453[i][j] = 2L;
        }
        for (i = 0; i < 6; i++)
            l_603[i] = 0x73L;
        (*l_435) = (l_434 ^ 0UL);
    }
    return (**g_508);
}



static union U3  func_40(int32_t  p_41)
{ 
    uint8_t l_46[5];
    const int8_t *l_76 = (void*)0;
    union U3 l_200[4][1][3] = {{{{1UL},{1UL},{1UL}}},{{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}}},{{{1UL},{1UL},{1UL}}},{{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL}}}};
    int32_t *l_205 = &g_3;
    int32_t l_206 = 0xE595985FL;
    uint16_t *l_239 = &g_83.f0;
    int32_t l_262[5][4][6] = {{{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L}},{{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L}},{{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L}},{{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L}},{{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L},{6L,6L,6L,6L,6L,6L}}};
    int32_t ****l_332 = (void*)0;
    int32_t l_340 = (-7L);
    union U2 l_345 = {0UL};
    uint8_t *l_427 = &l_46[4];
    uint32_t l_428 = 0x6C75D04DL;
    int32_t *l_429[6] = {&g_414.f1.f2,&g_414.f1.f2,&g_414.f1.f2,&g_414.f1.f2,&g_414.f1.f2,&g_414.f1.f2};
    uint64_t l_430 = 0xE2CAF06CDC36DC31LL;
    uint32_t l_431 = 4294967293UL;
    union U3 l_432 = {18446744073709551615UL};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_46[i] = 8UL;
    for (g_8 = 13; (g_8 > (-12)); g_8--)
    { 
        l_46[4] ^= p_41;
    }
    if (l_46[3])
    { 
        int32_t l_61 = (-1L);
        int8_t l_63 = (-1L);
        struct S0 l_68 = {0xE60EL,18446744073709551611UL,-7L};
        int16_t *l_210[7][5];
        uint8_t *l_223 = &l_46[4];
        uint32_t *l_226 = &g_95[0];
        int8_t **l_231 = &g_112;
        int32_t *l_232 = &g_83.f2;
        int32_t *l_233 = &g_71;
        int16_t l_234 = (-1L);
        const int64_t *l_237[2][5] = {{&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67}};
        int32_t l_277 = (-6L);
        int32_t l_279 = 0xE41FB136L;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 5; j++)
                l_210[i][j] = (void*)0;
        }
        for (p_41 = 0; (p_41 <= 0); p_41 += 1)
        { 
            union U1 l_52 = {0x7718CE68L};
            uint64_t *l_55[1];
            int16_t *l_62 = &l_52.f3;
            int64_t *l_66 = &g_67;
            int32_t *l_73 = &g_71;
            int32_t **l_72[7] = {&l_73,&l_73,&l_73,&l_73,&l_73,&l_73,&l_73};
            struct S0 l_75 = {0x1BFDL,18446744073709551615UL,2L};
            uint64_t l_185 = 18446744073709551607UL;
            union U3 *l_203 = &l_200[3][0][0];
            int32_t l_217 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_55[i] = &g_56;
            if (func_47((((g_74[1] = func_50(((((l_52 , (0UL <= (safe_add_func_uint64_t_u_u((l_52 , l_46[(p_41 + 4)]), (g_56++))))) , (safe_sub_func_int16_t_s_s(((*l_62) = l_61), ((l_63 || (((*l_66) = (safe_mod_func_int32_t_s_s(0x9BECC425L, g_39[0][0][0]))) || 9UL)) | p_41)))) , l_68) , (-6L)))) != (void*)0) , l_75), l_76))
            { 
                for (g_56 = 0; (g_56 <= 0); g_56 += 1)
                { 
                    return g_159;
                }
                (*l_73) = p_41;
            }
            else
            { 
                int32_t l_184 = 0x6AEDDC00L;
                int64_t l_196 = (-1L);
                int8_t * const * const l_201[1] = {&g_112};
                int i;
                l_185++;
                for (g_93 = 0; (g_93 >= 0); g_93 -= 1)
                { 
                    int32_t l_190[6] = {0xFD7B8CEBL,0x528EACBFL,0xFD7B8CEBL,0xFD7B8CEBL,0x528EACBFL,0xFD7B8CEBL};
                    uint32_t *l_202 = &l_200[3][0][1].f1;
                    union U3 **l_204 = &l_203;
                    int i;
                    l_68.f2 = (0x70B228D4L | ((*l_202) = (l_190[5] > ((safe_sub_func_int64_t_s_s(((g_95[0] != (((safe_div_func_int32_t_s_s((0x7FC44B101EA09A76LL | (+l_68.f2)), (((l_196 ^ ((((safe_mul_func_uint8_t_u_u(((((g_199 , g_83) , l_200[3][0][1]) , (void*)0) == l_201[0]), (*l_73))) >= (*g_112)) , l_190[0]) , 255UL)) >= 0x1419D0CF3FB13B51LL) , p_41))) ^ p_41) <= 0x00FAL)) , p_41), p_41)) | l_68.f0))));
                    (*l_204) = l_203;
                    g_74[1] = l_205;
                }
                for (l_184 = 0; l_184 < 4; l_184 += 1)
                {
                    for (l_68.f0 = 0; l_68.f0 < 1; l_68.f0 += 1)
                    {
                        for (l_196 = 0; l_196 < 7; l_196 += 1)
                        {
                            g_39[l_184][l_68.f0][l_196] = 0L;
                        }
                    }
                }
            }
            l_206 = p_41;
            for (g_199.f3 = 0; (g_199.f3 >= 0); g_199.f3 -= 1)
            { 
                int16_t **l_209[1][5][3] = {{{(void*)0,(void*)0,&l_62},{&l_62,&l_62,&l_62},{&l_62,&l_62,(void*)0},{&l_62,&l_62,&l_62},{(void*)0,&l_62,(void*)0}}};
                uint8_t *l_215[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_215[i] = &g_216[0][1][0];
                (*l_73) ^= ((p_41 < (safe_mod_func_int16_t_s_s(((g_39[2][0][5] < 0x18F3L) ^ (&g_93 == (l_210[4][3] = &g_93))), (safe_mod_func_int64_t_s_s(((*l_66) = (safe_add_func_uint32_t_u_u(((l_217 = (((l_46[p_41] = (p_41 || ((*l_62) &= p_41))) , g_199.f3) > p_41)) && p_41), p_41))), l_61))))) <= p_41);
                for (g_83.f2 = 0; (g_83.f2 <= 0); g_83.f2 += 1)
                { 
                    return g_159;
                }
            }
        }
        l_234 = ((*l_233) &= ((safe_add_func_uint8_t_u_u(g_216[0][1][0], 0x5EL)) == (safe_mul_func_uint8_t_u_u((*l_205), (((safe_unary_minus_func_int32_t_s(((++(*l_223)) < (((*l_226) &= g_39[3][0][0]) >= (safe_add_func_int32_t_s_s(((*l_232) &= (safe_mul_func_uint16_t_u_u((l_231 == (void*)0), (p_41 != 0x6021L)))), (*l_205))))))) > g_159.f1) == 18446744073709551608UL)))));
        (*l_233) = (safe_lshift_func_int8_t_s_s(((4294967294UL == (&l_76 != (g_199 , &g_112))) | (l_237[1][0] == (void*)0)), (*g_112)));
        for (l_63 = 0; (l_63 <= 4); l_63 += 1)
        { 
            uint16_t **l_241 = (void*)0;
            uint16_t **l_242 = &g_240;
            union U3 ***l_246 = &g_243;
            int32_t l_251 = 0x2531EACAL;
            int32_t *l_269 = &l_68.f2;
            uint32_t l_280 = 1UL;
            (*l_233) = ((((+(g_83 , (g_83.f0 | (((l_239 == ((*l_242) = g_240)) | 0x5CL) >= ((((*l_246) = g_243) == ((safe_mod_func_int16_t_s_s((l_251 = (0x77AF36F2L > 0L)), g_3)) , (void*)0)) == g_245.f0))))) ^ 4294967290UL) && 0x6EL) , (*l_205));
            for (g_199.f4 = 0; (g_199.f4 >= 0); g_199.f4 -= 1)
            { 
                int32_t l_263 = 0x88A3AD5CL;
                int64_t l_275 = 3L;
                int32_t l_276 = 0xA28D94D3L;
                int32_t l_278[3][5] = {{0L,(-1L),0L,0x3CD8B2D7L,(-1L)},{1L,0L,(-1L),0L,1L},{0L,0L,(-1L),1L,(-1L)}};
                int i, j;
                (*l_233) = ((*l_232) = (g_95[g_199.f4] && (g_95[g_199.f4] <= (safe_div_func_int16_t_s_s((((((((*g_112) && (safe_mod_func_uint16_t_u_u(0UL, (*g_240)))) , (safe_rshift_func_int16_t_s_s(g_95[0], 5))) == ((p_41 , (*l_232)) != p_41)) & l_251) & g_95[g_199.f4]) == 0x38L), 0xC1B4L)))));
                for (g_8 = 0; (g_8 <= 1); g_8 += 1)
                { 
                    union U3 *l_268 = &l_200[2][0][2];
                    int32_t l_270 = 0L;
                    int32_t *l_271 = &l_270;
                    int32_t *l_272 = &l_68.f2;
                    int32_t *l_273 = (void*)0;
                    int32_t *l_274[5][4] = {{(void*)0,(void*)0,&l_262[3][3][4],&g_3},{&g_71,&g_3,&g_71,&l_262[3][3][4]},{&g_71,&l_262[3][3][4],&l_262[3][3][4],&g_71},{(void*)0,&l_262[3][3][4],&g_3,&l_262[3][3][4]},{&l_262[3][3][4],&g_3,&g_3,&g_3}};
                    int i, j;
                    (*l_232) &= (((0x643B924528D8049FLL & ((safe_add_func_uint8_t_u_u((((l_263 |= l_262[1][3][3]) == (((((((*l_205) | 0xF09AL) || g_39[3][0][0]) , ((*l_239) &= (safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s(0xB75CB66975232A7DLL, (g_56 ^= g_95[0]))), p_41)))) , l_268) == (void*)0) , 0x66E9L)) && 251UL), p_41)) && p_41)) != g_199.f2) >= l_251);
                    l_269 = &g_71;
                    ++l_280;
                }
                l_269 = &p_41;
                if (p_41)
                    break;
                for (l_263 = 1; (l_263 <= 4); l_263 += 1)
                { 
                    int32_t **l_283[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_283[i] = &l_232;
                    l_269 = func_50(p_41);
                    if ((*l_269))
                        break;
                    if (p_41)
                        continue;
                }
            }
            return l_200[3][0][1];
        }
    }
    else
    { 
        int16_t *l_287 = (void*)0;
        int16_t **l_286 = &l_287;
        int32_t *l_288 = &l_262[1][1][3];
        int64_t *l_309 = &g_67;
        union U3 l_379 = {18446744073709551610UL};
        int32_t *l_413 = &g_8;
        union U2 *l_415[7][5] = {{&l_345,&l_345,&l_345,&l_345,&l_345},{&l_345,&l_345,&l_345,&l_345,&l_345},{&l_345,&l_345,&l_345,&l_345,&l_345},{&l_345,&l_345,&l_345,&l_345,&l_345},{&l_345,&l_345,&l_345,&l_345,&l_345},{&l_345,&l_345,&l_345,&l_345,&l_345},{&l_345,&l_345,&l_345,&l_345,&l_345}};
        union U3 l_416[2][5][6] = {{{{0xF6651F00L},{1UL},{18446744073709551615UL},{1UL},{0xF6651F00L},{1UL}},{{0x53C3C391L},{18446744073709551608UL},{0x53C3C391L},{1UL},{0x53C3C391L},{18446744073709551608UL}},{{0xF6651F00L},{18446744073709551608UL},{18446744073709551615UL},{18446744073709551608UL},{0xF6651F00L},{18446744073709551608UL}},{{0x53C3C391L},{1UL},{0x53C3C391L},{18446744073709551608UL},{0x53C3C391L},{1UL}},{{0xF6651F00L},{1UL},{18446744073709551615UL},{1UL},{0xF6651F00L},{1UL}}},{{{0x53C3C391L},{18446744073709551608UL},{0x53C3C391L},{1UL},{0x53C3C391L},{18446744073709551608UL}},{{0xF6651F00L},{18446744073709551608UL},{18446744073709551615UL},{18446744073709551608UL},{0xF6651F00L},{18446744073709551608UL}},{{0x53C3C391L},{1UL},{0x53C3C391L},{18446744073709551608UL},{0x53C3C391L},{1UL}},{{0xF6651F00L},{1UL},{18446744073709551615UL},{1UL},{0xF6651F00L},{1UL}},{{0x53C3C391L},{18446744073709551608UL},{0x53C3C391L},{1UL},{0x53C3C391L},{18446744073709551608UL}}}};
        int i, j, k;
        (*l_288) &= (g_56 == (((*l_286) = (void*)0) == l_239));
        for (g_199.f2 = 0; (g_199.f2 <= 5); ++g_199.f2)
        { 
            uint64_t * const l_305 = (void*)0;
            int32_t l_306 = 0x2597C399L;
            int64_t *l_307 = &l_200[3][0][1].f2;
            int32_t *****l_333 = &l_332;
            int16_t **l_343 = &l_287;
            int16_t ***l_344 = &l_286;
            int16_t *l_357 = &g_93;
            int16_t * const **l_360 = &g_358;
            int64_t l_378 = 0xE9D9F5103A31140BLL;
            union U3 l_398 = {0xB11A5C24L};
            (*l_288) = (((((*l_307) = (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_95[0], (*l_288))), ((safe_div_func_int8_t_s_s(((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(p_41, (((void*)0 != l_305) , ((l_306 = (*l_288)) && p_41)))), 15)), 1L)), 0xFE621D3B27F0A4E5LL)) != 2L), 0x63L)) >= 0x8E7FF3C31E116E14LL)))) || g_245.f0) < p_41) && p_41);
            for (g_8 = 0; (g_8 <= 3); g_8 += 1)
            { 
                int16_t ***l_308 = &l_286;
                int64_t *l_311 = &g_67;
                int64_t **l_312 = (void*)0;
                int64_t **l_313 = &l_311;
                const union U1 l_320[1][6] = {{{0x905D4C12L},{0x905D4C12L},{0x672867E9L},{0x905D4C12L},{0x905D4C12L},{0x672867E9L}}};
                int i, j;
                (*l_308) = (void*)0;
                (*l_288) ^= ((g_310[0] = l_309) != ((*l_313) = l_311));
                for (g_83.f0 = 0; (g_83.f0 <= 3); g_83.f0 += 1)
                { 
                    const int16_t **l_323 = (void*)0;
                    uint16_t *l_324 = &g_325;
                    uint16_t *l_326 = &g_327;
                    int i, j, k;
                    (*l_288) |= 1L;
                    (*l_288) = (((l_262[(g_8 + 1)][g_8][(g_8 + 1)] < (safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(0x52L, p_41)) & (safe_mul_func_int16_t_s_s((l_320[0][0] , (safe_rshift_func_uint16_t_u_s(((*l_326) = ((*l_324) = (l_323 == ((*l_308) = &l_287)))), 9))), (safe_mod_func_int64_t_s_s((((*l_205) , 65532UL) && 0xD99AL), (*l_288)))))), (*l_205)))) == 1UL) <= l_320[0][0].f1);
                    (*l_288) ^= (safe_rshift_func_int8_t_s_s(0xDBL, 3));
                }
            }
            (*l_333) = l_332;
            (*l_288) = ((safe_mul_func_uint8_t_u_u(((*g_240) & (((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((*g_112) ^ (&l_239 == &g_240)), (*g_112))), (&l_309 == (void*)0))) < 1L) , g_199.f1)), g_3)) && l_340);
            if (((safe_rshift_func_int8_t_s_s(((((*l_344) = l_343) == (l_345 , ((*l_360) = (((-10L) || (!((*l_288) ^ (safe_add_func_int16_t_s_s((((*l_333) = g_349) == (void*)0), (((*l_357) |= (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((*g_112) <= 0x58L) ^ 0xDFE9C205218EBE7BLL), (*l_205))), g_356[0][0]))) < 0UL)))))) , g_358)))) > 0L), (*g_112))) >= (-1L)))
            { 
                int64_t **l_366 = &g_310[0];
                int64_t ***l_365[4][7][5] = {{{(void*)0,&l_366,&l_366,&l_366,(void*)0},{(void*)0,&l_366,&l_366,&l_366,(void*)0},{&l_366,&l_366,&l_366,&l_366,&l_366},{(void*)0,&l_366,(void*)0,&l_366,&l_366},{&l_366,&l_366,&l_366,&l_366,(void*)0},{(void*)0,(void*)0,&l_366,&l_366,(void*)0},{&l_366,&l_366,&l_366,&l_366,&l_366}},{{(void*)0,&l_366,&l_366,(void*)0,(void*)0},{(void*)0,&l_366,&l_366,&l_366,&l_366},{&l_366,&l_366,(void*)0,&l_366,(void*)0},{&l_366,&l_366,&l_366,&l_366,&l_366},{(void*)0,&l_366,(void*)0,(void*)0,&l_366},{&l_366,&l_366,(void*)0,&l_366,&l_366},{(void*)0,(void*)0,&l_366,&l_366,(void*)0}},{{&l_366,&l_366,&l_366,&l_366,&l_366},{(void*)0,&l_366,&l_366,(void*)0,&l_366},{&l_366,&l_366,&l_366,&l_366,&l_366},{(void*)0,&l_366,(void*)0,&l_366,(void*)0},{&l_366,&l_366,&l_366,&l_366,&l_366},{(void*)0,&l_366,(void*)0,&l_366,(void*)0},{&l_366,&l_366,&l_366,&l_366,&l_366}},{{&l_366,(void*)0,&l_366,&l_366,(void*)0},{&l_366,&l_366,&l_366,&l_366,&l_366},{(void*)0,&l_366,&l_366,(void*)0,(void*)0},{&l_366,&l_366,(void*)0,&l_366,&l_366},{&l_366,(void*)0,(void*)0,&l_366,&l_366},{&l_366,&l_366,&l_366,&l_366,&l_366},{&l_366,&l_366,&l_366,(void*)0,(void*)0}}};
                int32_t l_377[5] = {0x235667D9L,0x235667D9L,0x235667D9L,0x235667D9L,0x235667D9L};
                int i, j, k;
                if (((safe_mul_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(((g_367 = &g_310[0]) == &g_310[0]), ((l_345 , (safe_rshift_func_int8_t_s_s((0x2A8B4AB5L > (+((*l_205) , (~(safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((~((*l_288) > p_41)), 1)), 5)))))), l_377[2]))) <= g_245.f0))) , 8L) != g_3) == p_41), l_378)) && 65528UL))
                { 
                    (*l_288) = p_41;
                    return (**g_243);
                }
                else
                { 
                    return l_379;
                }
            }
            else
            { 
                uint64_t *l_393[7][3] = {{(void*)0,&g_56,&g_56},{&g_56,&g_56,&g_56},{&g_56,(void*)0,&g_56},{&g_56,&g_56,(void*)0},{&g_56,(void*)0,(void*)0},{(void*)0,&g_56,&g_56},{&g_56,&g_56,&g_56}};
                uint8_t *l_396 = &g_216[0][1][0];
                int i, j;
                g_380 = &g_349;
                if (((!((*g_358) == (*g_358))) == ((*g_112) < (+((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s((*l_205), p_41)) <= (++g_56)), ((*l_396) ^= ((0xDCL <= p_41) != p_41)))), 2)), (*l_288))), g_199.f3)) ^ p_41)))))
                { 
                    int64_t *l_397 = &g_67;
                    (***g_350) |= p_41;
                    p_41 |= (*l_288);
                    (*l_288) ^= p_41;
                    (*l_288) &= (l_397 == l_309);
                }
                else
                { 
                    return l_398;
                }
            }
        }
        l_340 |= (1UL && ((p_41 ^ ((safe_lshift_func_int16_t_s_u((**g_358), 12)) > (safe_div_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((-1L), (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u(((((*g_240) ^= ((((((*l_413) = (((*l_288) = 0x487DL) , g_356[0][1])) , (l_345 = (g_414 , l_345))) , (***g_350)) > 0xF050C66CL) , 0UL)) == (*l_205)) & 1UL), p_41)) || p_41) > 0x9170L), g_325)), p_41)))), 6)) == p_41) < p_41), g_83.f2)))) , g_159.f1));
        return l_416[1][0][5];
    }
    l_430 &= ((safe_mod_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((((p_41 || ((safe_div_func_uint64_t_u_u((((*g_112) | ((*l_427) = (safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(p_41, (0x5FCBL & (((1L > (5UL | 0x3C67D10F451CD1CFLL)) & 0xD6845E04L) < (*l_205))))) , 0x0FD1L), p_41)))) ^ (*l_205)), p_41)) != 0x10DBL)) & (*l_205)) != 1UL), l_428)) > g_356[0][0]), (*l_205))) != (*l_205));
    l_431 ^= p_41;
    return l_432;
}



static int32_t  func_47(struct S0  p_48, const int8_t * p_49)
{ 
    const int32_t l_91 = 2L;
    int32_t *l_98 = &g_71;
    const int32_t *l_99 = &g_3;
    int32_t l_108 = 0x9369D405L;
    int64_t *l_118 = &g_67;
    int32_t l_119[6] = {0L,5L,5L,0L,5L,5L};
    int32_t l_133 = (-7L);
    int64_t l_162 = (-1L);
    int32_t l_168 = 0x48CB3587L;
    int64_t l_172 = 0x702F4191A83F4B73LL;
    int32_t **l_183 = &g_74[1];
    int i;
    for (p_48.f1 = 19; (p_48.f1 > 11); p_48.f1 = safe_sub_func_int32_t_s_s(p_48.f1, 2))
    { 
        int32_t *l_81 = &g_3;
        int32_t *l_82[2];
        int16_t *l_92 = &g_93;
        uint32_t *l_94 = &g_95[0];
        uint64_t *l_96[4];
        int32_t **l_97[6][7][4] = {{{&l_82[0],&g_74[2],&g_74[0],&l_82[0]},{(void*)0,&l_82[0],&l_81,&l_81},{&g_74[1],(void*)0,&g_74[1],&l_81},{&l_81,&l_82[0],(void*)0,&l_82[0]},{&g_74[0],&g_74[2],&l_82[0],&l_82[0]},{&g_74[1],&g_74[1],&l_82[0],&g_74[1]},{&g_74[0],&g_74[3],(void*)0,&g_74[2]}},{{&l_81,(void*)0,&g_74[1],(void*)0},{&g_74[1],(void*)0,&l_81,&g_74[2]},{(void*)0,&g_74[3],&g_74[0],&g_74[1]},{&l_82[0],&g_74[1],&g_74[1],&l_82[0]},{&l_82[0],&g_74[2],&g_74[0],&l_82[0]},{(void*)0,&l_82[0],&l_81,&l_81},{&g_74[1],(void*)0,&g_74[1],&l_81}},{{&l_81,&l_82[0],(void*)0,&l_82[0]},{&g_74[0],&g_74[2],&l_82[0],&l_82[0]},{&g_74[1],&g_74[1],&l_82[0],&g_74[1]},{&g_74[0],&g_74[3],(void*)0,&g_74[2]},{&l_81,(void*)0,&g_74[1],(void*)0},{&g_74[2],(void*)0,&g_74[0],&l_82[0]},{(void*)0,&l_81,&g_74[1],&g_74[2]}},{{&g_74[1],&l_81,&l_81,&g_74[1]},{&g_74[1],&l_82[0],&g_74[1],&g_74[3]},{(void*)0,&g_74[1],&g_74[0],(void*)0},{&g_74[2],&l_82[0],&g_74[2],(void*)0},{&g_74[0],&g_74[1],(void*)0,&g_74[3]},{&g_74[1],&l_82[0],&g_74[1],&g_74[1]},{&l_81,&l_81,&g_74[1],&g_74[2]}},{{&g_74[1],&l_81,(void*)0,&l_82[0]},{&g_74[0],(void*)0,&g_74[2],(void*)0},{&g_74[2],(void*)0,&g_74[0],&l_82[0]},{(void*)0,&l_81,&g_74[1],&g_74[2]},{&g_74[1],&l_81,&l_81,&g_74[1]},{&g_74[1],&l_82[0],&g_74[1],&g_74[3]},{(void*)0,&g_74[1],&g_74[0],(void*)0}},{{&g_74[2],&l_82[0],&g_74[2],(void*)0},{&g_74[0],&g_74[1],(void*)0,&g_74[3]},{&g_74[1],&l_82[0],&g_74[1],&g_74[1]},{&l_81,&l_81,&g_74[1],&g_74[2]},{&g_74[1],&l_81,(void*)0,&l_82[0]},{&g_74[0],(void*)0,&g_74[2],(void*)0},{&g_74[2],(void*)0,&g_74[0],&l_82[0]}}};
        const int32_t **l_100 = &l_99;
        uint64_t l_128[3][5][1] = {{{18446744073709551606UL},{0x2394782D3B2C2567LL},{0x2394782D3B2C2567LL},{18446744073709551606UL},{18446744073709551613UL}},{{0x9812E294E6100BB5LL},{18446744073709551613UL},{18446744073709551606UL},{0x2394782D3B2C2567LL},{0x2394782D3B2C2567LL}},{{18446744073709551606UL},{18446744073709551613UL},{0x9812E294E6100BB5LL},{18446744073709551613UL},{18446744073709551606UL}}};
        int64_t l_134 = 0L;
        int64_t l_173 = (-7L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_82[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_96[i] = &g_56;
        l_98 = func_50((((g_56 = ((&g_67 == (void*)0) == (((*l_94) = (safe_mod_func_int8_t_s_s(((l_82[0] = l_81) != &g_3), ((g_83 , (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_int64_t_s((((l_91 && (((l_92 = l_92) == (void*)0) == 0x57L)) <= (-6L)) == g_83.f1))), p_48.f0)), g_93)), p_48.f0))) ^ (*l_81))))) == g_83.f0))) == g_93) & g_39[0][0][6]));
        (*l_100) = l_99;
        for (g_83.f2 = 0; (g_83.f2 == (-18)); g_83.f2 = safe_sub_func_uint32_t_u_u(g_83.f2, 3))
        { 
            uint16_t *l_107[1][4][1] = {{{&g_83.f0},{(void*)0},{&g_83.f0},{(void*)0}}};
            int8_t *l_110 = &g_39[3][0][0];
            int8_t **l_109 = &l_110;
            int8_t *l_111 = &g_39[2][0][0];
            int32_t l_113 = 9L;
            int32_t l_117 = 1L;
            int32_t l_120 = 0xD0C3B02FL;
            int8_t l_121 = 0x01L;
            int32_t l_122 = (-2L);
            int32_t l_123 = 0L;
            int32_t l_124 = 2L;
            int32_t l_125 = (-10L);
            int32_t l_126 = (-4L);
            int32_t l_127 = 0x68907D73L;
            int64_t l_167 = (-5L);
            int16_t l_170 = 9L;
            int32_t l_171 = 0x66A14887L;
            int32_t l_174 = 8L;
            int32_t l_175 = (-1L);
            int32_t l_179[6][6][7] = {{{6L,1L,4L,0xF104C48CL,0L,(-1L),0x24607D91L},{0xBB54E963L,1L,0x954B3076L,0xD8481955L,0xD3A4A643L,0x28FEA07EL,(-6L)},{0xBB54E963L,0x0D1D7AFCL,0x401A02D2L,1L,0L,0x401A02D2L,0x8C61DE7BL},{6L,6L,0x8048BA43L,0x47CB3112L,0x7E708576L,(-9L),0x5C545DF8L},{0x7E708576L,0xA0D65FEBL,0x63BB0C62L,(-1L),0x7AA2B660L,(-1L),0x65CE0A90L},{0xEDC7D469L,0xB2A4F0B9L,(-1L),0x079757A9L,0xA800BAB0L,0xD72E1F03L,0xBB987F49L}},{{(-1L),0x65CE0A90L,0x5C545DF8L,0L,0x0D2EE368L,0x21F4F38DL,0x5AB8D4A8L},{0xE7DDAC24L,0L,1L,0xD8481955L,0x96E35F7FL,0xE2CF94C7L,4L},{0xBB987F49L,1L,0x5AB8D4A8L,0L,0x5AB8D4A8L,1L,0xBB987F49L},{1L,0x8F6ABD5FL,0x5DF54E5BL,0x401A02D2L,(-1L),6L,0xD72E1F03L},{0xD3A4A643L,0x3C70DB10L,0xECF1100CL,(-6L),0xD8481955L,0xFE2B2CAFL,(-1L)},{0xA0D65FEBL,0xAEFC81A4L,0x5DF54E5BL,1L,(-1L),(-1L),0x5AB8D4A8L}},{{0x8FD7EE3AL,5L,0xE2CF94C7L,0xFE2B2CAFL,0x2EE73452L,3L,0x35B96C2FL},{0xA800BAB0L,1L,0x6F7AD59DL,4L,1L,(-1L),0x0B72BA6DL},{4L,3L,0x924034DBL,0x21F4F38DL,3L,(-1L),0x47CB3112L},{(-6L),0xF104C48CL,0L,3L,0x337131A3L,3L,3L},{0xB2A4F0B9L,0xEA367607L,(-1L),0x47CB3112L,(-9L),0x3C70DB10L,0x1A7B2F35L},{1L,0x35B96C2FL,(-2L),0x0D1D7AFCL,0x954B3076L,0x63BB0C62L,9L}},{{0xA7EA4D04L,0xAEFC81A4L,(-6L),1L,0xAE9904F2L,0L,2L},{0x5AB8D4A8L,1L,4L,0x2EE73452L,0xAE9904F2L,0xEDC7D469L,0xAEFC81A4L},{0x47CB3112L,(-2L),0x7BD035DCL,5L,0x954B3076L,0x4870E668L,0L},{0x924034DBL,0xAE9904F2L,0xE3D2E3B1L,1L,(-9L),0L,(-1L)},{0xDBC6659EL,0x8048BA43L,(-1L),1L,0x337131A3L,0x8C61DE7BL,0L},{0x21F4F38DL,1L,(-1L),(-9L),3L,(-6L),0xD72E1F03L}},{{0x954B3076L,0xDBC6659EL,(-1L),1L,1L,0xE2CF94C7L,(-6L)},{0x5AB8D4A8L,9L,0x8F6ABD5FL,0x337131A3L,0x2EE73452L,0x7CCF519EL,0x2EE73452L},{(-9L),0x4870E668L,0x4870E668L,(-9L),(-1L),2L,0xDBC6659EL},{0xB21A9614L,(-9L),(-1L),3L,(-1L),1L,0xB1BB6D1EL},{0xB2A4F0B9L,0L,0xEDC7D469L,0xC72E0A35L,0x24607D91L,0x65CE0A90L,0xDBC6659EL},{(-9L),(-1L),0x8FD7EE3AL,5L,0xE2CF94C7L,0xFE2B2CAFL,0x2EE73452L}},{{(-1L),0x5AB8D4A8L,0xA7EA4D04L,0x7BD035DCL,1L,0xB1BB6D1EL,(-6L)},{0xA800BAB0L,0x1A7B2F35L,0x7E708576L,0xD72E1F03L,1L,0x6F7AD59DL,0xD72E1F03L},{0xEA367607L,(-1L),0x8FD7EE3AL,0x0D1D7AFCL,3L,0x8AA17036L,0L},{2L,1L,3L,0x954B3076L,0L,(-1L),(-1L)},{0x5C545DF8L,0x337131A3L,(-9L),0xAEFC81A4L,0x34273FCDL,1L,0L},{0xC9E5FE33L,0L,0x4870E668L,0x21F4F38DL,(-1L),(-1L),0xAEFC81A4L}}};
            int i, j, k;
            p_48.f2 = (safe_div_func_int8_t_s_s(((*l_111) = ((((((((l_108 &= p_48.f0) > ((g_56 = (l_113 ^= (((*l_109) = &g_39[3][0][0]) != (g_112 = l_111)))) == (0L < (!(*l_99))))) & ((safe_mul_func_int8_t_s_s(0x19L, (*l_81))) >= l_117)) , l_118) != &g_67) , (*g_112)) && 0xE2L) , l_117)), p_48.f2));
            ++l_128[0][4][0];
            for (p_48.f2 = (-12); (p_48.f2 >= (-7)); p_48.f2 = safe_add_func_int8_t_s_s(p_48.f2, 5))
            { 
                uint8_t l_135 = 0x39L;
                uint8_t l_161 = 255UL;
                int32_t * const l_163 = &g_3;
                int32_t l_166 = (-5L);
                int32_t l_169[3];
                uint8_t l_176[2][1];
                uint32_t l_180 = 0x43399B6CL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_169[i] = (-1L);
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_176[i][j] = 1UL;
                }
                l_135++;
                for (l_135 = 0; (l_135 < 4); ++l_135)
                { 
                    uint8_t l_160 = 255UL;
                    int32_t **l_164 = (void*)0;
                    int32_t **l_165 = &l_82[1];
                    l_161 = (((safe_lshift_func_int8_t_s_s(0xF8L, ((safe_div_func_uint32_t_u_u(((1UL > (+5UL)) , (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(g_93, (((((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((l_118 == ((safe_sub_func_int8_t_s_s(((((((safe_mul_func_uint16_t_u_u((((g_159 , p_49) == (void*)0) == p_48.f0), 1L)) == p_48.f1) ^ g_9) || p_48.f0) && g_95[0]) & 0UL), 248UL)) , (void*)0)), p_48.f0)) > 0UL), g_83.f0)) && p_48.f0) >= 4294967289UL) , l_135) ^ 0xCBL))) >= p_48.f0), (*g_112)))), p_48.f0)) && p_48.f2))) <= l_160) , p_48.f1);
                    (*l_165) = (l_162 , l_163);
                }
                l_176[0][0]--;
                l_180--;
            }
        }
    }
    (*l_183) = &l_133;
    return p_48.f1;
}



static int32_t * func_50(int32_t  p_51)
{ 
    uint64_t l_69 = 9UL;
    int32_t *l_70 = &g_71;
    (*l_70) &= l_69;
    return &g_3;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_39[i][j][k], "g_39[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_95[i], "g_95[i]", print_hash_value);

    }
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    transparent_crc(g_199.f0, "g_199.f0", print_hash_value);
    transparent_crc(g_199.f1, "g_199.f1", print_hash_value);
    transparent_crc(g_199.f2, "g_199.f2", print_hash_value);
    transparent_crc(g_199.f3, "g_199.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_216[i][j][k], "g_216[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_245.f0, "g_245.f0", print_hash_value);
    transparent_crc(g_245.f1, "g_245.f1", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_356[i][j], "g_356[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_414.f0, "g_414.f0", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_850, "g_850", print_hash_value);
    transparent_crc(g_1200, "g_1200", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    transparent_crc(g_1259, "g_1259", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1496[i], "g_1496[i]", print_hash_value);

    }
    transparent_crc(g_1639, "g_1639", print_hash_value);
    transparent_crc(g_1640, "g_1640", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
