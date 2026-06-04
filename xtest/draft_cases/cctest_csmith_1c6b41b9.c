// SPDX-License-Identifier: MIT
// cctest_csmith_1c6b41b9.c --- cctest case csmith_1c6b41b9 (csmith seed 476791225)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6988160e */
/* @exp_ticks 0x7933 */

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

// Options:   -s 476791225 -o /home/agent1/fast_data/tmp/csmith_gen_ppv96akk/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint16_t  f1;
};

union U1 {
   const uint64_t  f0;
   int32_t  f1;
   uint32_t  f2;
};

union U2 {
   uint8_t  f0;
   uint64_t  f1;
};

union U3 {
   uint64_t  f0;
   uint8_t  f1;
   uint8_t  f2;
};

union U4 {
   const int64_t  f0;
   const int16_t  f1;
};

union U5 {
   int16_t  f0;
   struct S0  f1;
   const int64_t  f2;
};


static int16_t g_17[5] = {1L,1L,1L,1L,1L};
static int64_t g_26 = 0x3BD791F9E6A0122DLL;
static uint32_t g_27[1] = {1UL};
static int32_t g_35 = (-1L);
static union U2 g_37 = {0x16L};
static struct S0 g_38 = {0x20C256FAL,65528UL};
static int32_t g_59[4] = {0x4F1DFBA3L,0x4F1DFBA3L,0x4F1DFBA3L,0x4F1DFBA3L};
static uint8_t g_62 = 0UL;
static uint32_t g_89[1][5][4] = {{{18446744073709551615UL,18446744073709551607UL,0xC11418CDL,0xC11418CDL},{0x0E041B8CL,0x0E041B8CL,18446744073709551615UL,0xC11418CDL},{0xBCFA1F81L,18446744073709551607UL,0xBCFA1F81L,18446744073709551615UL},{0xBCFA1F81L,18446744073709551615UL,18446744073709551615UL,0xBCFA1F81L},{0x0E041B8CL,18446744073709551615UL,0xC11418CDL,18446744073709551615UL}}};
static uint8_t g_94 = 0x8AL;
static uint32_t g_97 = 0xE8FFC0A9L;
static union U1 g_98 = {0xFCA48CC9215A1442LL};
static uint8_t g_129 = 0xB2L;
static uint32_t g_145 = 18446744073709551613UL;
static union U4 g_150 = {0L};
static uint32_t g_156 = 0x71A48C8DL;
static int8_t g_185 = 1L;
static int16_t g_188[5] = {0xF735L,0xF735L,0xF735L,0xF735L,0xF735L};
static uint16_t g_189 = 0x0CD0L;
static uint8_t g_194 = 0xEAL;
static uint16_t g_199 = 0x253EL;
static int16_t g_208 = 0x3F7DL;
static uint64_t g_239 = 5UL;
static int16_t g_240 = 0x4691L;
static uint32_t g_241 = 0xD5100AA5L;
static int8_t g_253[3] = {0xA3L,0xA3L,0xA3L};
static uint8_t g_254 = 2UL;
static union U5 g_273 = {-1L};
static int32_t g_287[2] = {0x325EEF5AL,0x325EEF5AL};
static int8_t g_288 = 0L;
static uint64_t g_291 = 1UL;
static int32_t g_294[2] = {0x214F20BEL,0x214F20BEL};



static uint64_t  func_1(void);
static int32_t  func_4(uint8_t  p_5, union U1  p_6);
static uint64_t  func_11(union U2  p_12, int64_t  p_13, int32_t  p_14);
static int32_t  func_28(union U3  p_29, uint32_t  p_30, union U2  p_31, int8_t  p_32);




static uint64_t  func_1(void)
{ 
    union U2 l_15 = {0x2EL};
    uint8_t l_16[1];
    int32_t l_309 = 0x7B138009L;
    int32_t l_310 = (-1L);
    int32_t l_311 = (-6L);
    int32_t l_312 = 1L;
    int32_t l_322[1];
    int i;
    for (i = 0; i < 1; i++)
        l_16[i] = 0xDBL;
    for (i = 0; i < 1; i++)
        l_322[i] = 1L;
    g_294[0] |= (safe_div_func_int32_t_s_s(func_4((safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(func_11(l_15, l_15.f0, (l_16[0] = (-1L))), l_15.f0)), 0x7534BEE77D733C45LL)), g_98), g_199));
    if (g_98.f0)
    { 
        uint8_t l_303 = 0xD8L;
        int32_t l_308 = (-3L);
        int32_t l_313 = 0x4A5735E2L;
        int32_t l_316 = 0L;
        int32_t l_319 = (-5L);
        uint32_t l_323 = 0x514B632DL;
        struct S0 l_326[5][1] = {{{0L,0x733FL}},{{0xE6DE8E0CL,0x3303L}},{{0L,0x733FL}},{{0xE6DE8E0CL,0x3303L}},{{0L,0x733FL}}};
        int i, j;
        if ((l_308 = (safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s(l_303, l_15.f0)) || ((0x2F0CL ^ (((safe_mul_func_uint16_t_u_u(65535UL, g_59[0])) < g_240) != g_27[0])) < 4L)), 4)), l_16[0])), 5))))
        { 
            int64_t l_318 = (-2L);
            int32_t l_320 = 8L;
            l_309 ^= 0x5AE5765BL;
            for (g_273.f0 = 3; (g_273.f0 >= 0); g_273.f0 -= 1)
            { 
                int64_t l_314 = 2L;
                int32_t l_315 = 0x1237CA5BL;
                int32_t l_317 = (-1L);
                int32_t l_321 = (-10L);
                --l_323;
            }
            g_38 = (l_326[4][0] = g_38);
        }
        else
        { 
            uint8_t l_329 = 0x8FL;
            int32_t l_334 = (-3L);
            l_334 |= (safe_sub_func_uint16_t_u_u(l_329, ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(0x6A09L, 14)), (l_312 , 7UL))) == 0x96CBFC90L)));
        }
        g_38 = g_38;
        g_294[0] = l_326[4][0].f1;
    }
    else
    { 
        uint16_t l_337[4][4][1] = {{{65529UL},{65529UL},{0xE1E5L},{0UL}},{{0xE1E5L},{65529UL},{65529UL},{0xE1E5L}},{{0UL},{0xE1E5L},{65529UL},{65529UL}},{{0xE1E5L},{0UL},{0xE1E5L},{65529UL}}};
        union U2 l_342 = {0xD0L};
        int i, j, k;
        if (((l_312 = (safe_mod_func_uint64_t_u_u(l_16[0], (l_311 |= ((l_337[2][0][0] ^ (((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((l_342 , (l_322[0] != g_38.f1)), 0x2B85L)), 1L)) < l_342.f0) || 2L)) >= l_16[0]))))) | l_342.f0))
        { 
            uint32_t l_348 = 1UL;
            l_311 ^= (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((!(l_348 && (safe_add_func_int16_t_s_s(((g_98 , (18446744073709551615UL < g_287[1])) & 0x614374FFD2AC4DE5LL), l_337[2][0][0])))), l_16[0])), g_253[0]));
        }
        else
        { 
            g_294[1] = g_35;
            return l_15.f0;
        }
    }
    return g_38.f1;
}



static int32_t  func_4(uint8_t  p_5, union U1  p_6)
{ 
    int8_t l_101[1][2][5] = {{{0L,1L,0L,1L,0L},{(-7L),(-7L),(-7L),(-7L),(-7L)}}};
    struct S0 l_142 = {0xBB384EBAL,0x2E2AL};
    union U5 l_169 = {1L};
    int32_t l_184 = 2L;
    int32_t l_206 = 0x0193F488L;
    uint16_t l_207 = 0x3F9EL;
    uint64_t l_264[1][2][3] = {{{18446744073709551615UL,18446744073709551615UL,0x751E06E49FE0A111LL},{18446744073709551615UL,18446744073709551615UL,0x751E06E49FE0A111LL}}};
    int64_t l_282 = 0x729CE5635FC2021FLL;
    int i, j, k;
    return p_6.f2;
}



static uint64_t  func_11(union U2  p_12, int64_t  p_13, int32_t  p_14)
{ 
    uint32_t l_18 = 1UL;
    int32_t l_25 = 0xBDA99DA9L;
    for (p_13 = 4; (p_13 >= 1); p_13 -= 1)
    { 
        int32_t l_36[2][2][1] = {{{7L},{(-4L)}},{{7L},{(-4L)}}};
        int i, j, k;
        l_18 = g_17[p_13];
        for (p_12.f1 = 0; (p_12.f1 <= 4); p_12.f1 += 1)
        { 
            union U3 l_33 = {0UL};
            int i;
            g_27[0] = (g_26 = (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((g_17[p_12.f1] >= (0x5F40E13FL != ((((18446744073709551612UL ^ (l_25 = g_17[p_12.f1])) , p_12.f0) ^ 0xD8L) && l_18))), 0)), 0x6EBBL)) >= g_17[p_12.f1]), l_18)));
            l_25 = (((func_28(l_33, ((g_17[p_13] & (l_36[1][0][0] |= (g_35 |= (~((p_13 & g_26) && 4UL))))) == (-8L)), g_37, p_14) < 1L) , g_27[0]) < g_26);
        }
    }
    return g_97;
}



static int32_t  func_28(union U3  p_29, uint32_t  p_30, union U2  p_31, int8_t  p_32)
{ 
    struct S0 l_39 = {5L,1UL};
    int32_t l_40 = 0x6FFEA1E1L;
    int64_t l_77 = 8L;
    int64_t l_78 = 0L;
    int32_t l_92 = 0x99F167E6L;
    int32_t l_93[2];
    int i;
    for (i = 0; i < 2; i++)
        l_93[i] = 0xEB0059F0L;
    l_39 = g_38;
    if (g_27[0])
    { 
        uint32_t l_43 = 0x5D742CC3L;
        int32_t l_60 = (-1L);
        int32_t l_61 = 0x56FF37E3L;
        if ((((l_39.f1 & p_32) < (g_38.f1++)) < (l_43 != (safe_rshift_func_uint16_t_u_s(((65535UL > p_32) == g_26), 3)))))
        { 
            if ((((((((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(p_29.f0, 0xE2L)), (0xE519C81B93497140LL <= ((((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(0xA3BBE75688AFC007LL, p_32)), 9)) >= 1UL) != g_38.f1) ^ 0x2D6AL)))) < 0L) != p_32) | g_17[1]) != g_27[0]) , g_35) >= g_17[0]))
            { 
                uint32_t l_58 = 4294967291UL;
                g_59[0] = (safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u(p_30, 1UL)), l_58));
                return p_31.f0;
            }
            else
            { 
                g_62--;
            }
            if (p_30)
            { 
                return p_29.f1;
            }
            else
            { 
                return g_37.f0;
            }
        }
        else
        { 
            for (p_31.f0 = 13; (p_31.f0 >= 35); p_31.f0 = safe_add_func_uint16_t_u_u(p_31.f0, 6))
            { 
                l_40 = g_37.f0;
            }
        }
        if ((safe_mod_func_uint64_t_u_u(0xA6DD7547197E38F9LL, (safe_rshift_func_uint16_t_u_u(0x3FBDL, (g_38.f1 = ((safe_rshift_func_int16_t_s_u(p_29.f0, (safe_rshift_func_uint8_t_u_u(((((safe_div_func_int64_t_s_s(g_26, g_17[3])) >= g_37.f0) ^ l_77) == l_39.f1), l_78)))) > l_39.f1)))))))
        { 
            int8_t l_87 = 6L;
            for (g_38.f1 = (-2); (g_38.f1 <= 44); g_38.f1 = safe_add_func_uint32_t_u_u(g_38.f1, 2))
            { 
                uint16_t l_88 = 0xFCDBL;
                l_87 &= (safe_rshift_func_int16_t_s_s((1L | (p_31.f0 >= ((((((safe_mod_func_uint64_t_u_u(l_77, (l_43 , p_29.f0))) , p_30) ^ l_43) && 18446744073709551610UL) >= g_17[1]) == g_59[0]))), 8));
                g_89[0][1][3] |= (l_88 == 5L);
                if (l_87)
                    continue;
            }
        }
        else
        { 
            for (p_29.f0 = (-27); (p_29.f0 != 45); p_29.f0++)
            { 
                l_60 = 0xF73BC91AL;
                return p_32;
            }
        }
    }
    else
    { 
        return g_59[0];
    }
    g_94++;
    return l_93[1];
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
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);

    }
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_27[i], "g_27[i]", print_hash_value);

    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_89[i][j][k], "g_89[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_98.f2, "g_98.f2", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_188[i], "g_188[i]", print_hash_value);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_253[i], "g_253[i]", print_hash_value);

    }
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_273.f0, "g_273.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_287[i], "g_287[i]", print_hash_value);

    }
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_294[i], "g_294[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
