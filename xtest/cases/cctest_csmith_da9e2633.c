// SPDX-License-Identifier: MIT
// cctest_csmith_da9e2633.c --- cctest case csmith_da9e2633 (csmith seed 3667797555)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x157c5fce */
/* @exp_ticks 0x391c */

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

// Options:   -s 3667797555 -o /tmp/csmith_gen_yddx9jck/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   int16_t  f1;
   uint32_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
   int16_t  f1;
};
#pragma pack(pop)

union U3 {
   int8_t  f0;
   const int64_t  f1;
   int8_t  f2;
   const int32_t  f3;
};

union U4 {
   const uint16_t  f0;
   uint16_t  f1;
   int32_t  f2;
};


static int32_t g_5 = (-1L);
static struct S1 g_6[1] = {{0L,4294967292UL}};
static union U3 g_17 = {0xD8L};
static struct S2 g_31 = {-3L,0L};
static uint64_t g_106 = 0x2A8B94E1185E692DLL;
static int64_t g_116 = 0x05D7DFB7EED95D17LL;
static uint16_t g_122 = 0x90EDL;
static struct S0 g_140 = {0x70772F823EF36B23LL,-1L,4UL};
static const union U4 g_161 = {65532UL};
static uint8_t g_167[1][3] = {{0x4EL,0x4EL,0x4EL}};
static int8_t g_180[1][3][5] = {{{(-1L),(-1L),(-6L),(-1L),(-1L)},{(-3L),(-1L),(-3L),(-3L),(-1L)},{(-1L),(-3L),(-3L),(-1L),(-3L)}}};
static uint64_t g_182 = 0x9071708EF45CCAC4LL;



static uint8_t  func_1(void);
static int32_t  func_2(uint32_t  p_3, struct S1  p_4);
static const uint8_t  func_12(union U3  p_13, int16_t  p_14, union U3  p_15, struct S2  p_16);
static struct S0  func_22(union U3  p_23, int32_t  p_24);




static uint8_t  func_1(void)
{ 
    union U3 l_18 = {0xB6L};
    struct S2 l_19 = {-10L,2L};
    union U4 l_150 = {65529UL};
    if (func_2(g_5, g_6[0]))
    { 
        int16_t l_11 = 1L;
        int32_t l_144 = 0xD683B573L;
        l_144 = func_2(l_11, ((255UL > func_12(g_17, g_17.f2, l_18, l_19)) , g_6[0]));
    }
    else
    { 
        int8_t l_151 = 0L;
        int32_t l_165 = 1L;
        uint64_t l_172 = 0UL;
        if ((safe_mul_func_uint64_t_u_u(0x1FC311CE4DD9FAC9LL, (((safe_lshift_func_int16_t_s_s(((+g_17.f2) , 0x8D4AL), (((l_150 , g_140.f0) >= 0x2DF2L) || g_140.f0))) <= l_151) >= g_140.f2))))
        { 
            int8_t l_163 = 0xFCL;
            int32_t l_166 = 1L;
            for (g_31.f0 = 25; (g_31.f0 <= 28); ++g_31.f0)
            { 
                union U3 l_154 = {1L};
                uint16_t l_162 = 65535UL;
                int32_t l_164[4][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
                int i, j;
                l_165 = ((l_154 , ((l_164[0][1] = (((((safe_mul_func_uint16_t_u_u(8UL, (g_31.f1 = ((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((g_161 , (l_162 <= l_154.f0)), g_17.f0)), g_161.f0)) ^ 4294967295UL)))) , l_163) == g_161.f1) & g_140.f1) > l_163)) >= g_17.f2)) <= 0x2ED4AB7EL);
                if (g_161.f1)
                    break;
                g_167[0][2]--;
            }
            for (g_5 = 0; g_5 < 1; g_5 += 1)
            {
                struct S1 tmp = {0x9AD98C0EL,0xE4DD1CC3L};
                g_6[g_5] = tmp;
            }
        }
        else
        { 
            uint32_t l_175 = 5UL;
            int32_t l_181[1];
            int i;
            for (i = 0; i < 1; i++)
                l_181[i] = 0x50DAE4CDL;
            for (l_151 = 0; (l_151 >= 0); --l_151)
            { 
                l_172--;
            }
            l_175--;
            for (l_165 = 29; (l_165 <= (-17)); --l_165)
            { 
                g_182++;
            }
        }
    }
    g_31.f0 ^= (g_6[0].f0 = (safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((safe_div_func_int8_t_s_s(l_150.f1, g_167[0][0])) == (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_150.f1, 5)), (safe_rshift_func_int16_t_s_s(((((g_180[0][2][2] = (l_19.f0 , g_106)) == g_161.f1) & 0x0E134CBBL) > l_18.f2), l_18.f2)))), l_18.f0))) <= 0x73DF663DL), l_19.f1)), g_161.f0)), g_17.f2)));
    return l_18.f0;
}



static int32_t  func_2(uint32_t  p_3, struct S1  p_4)
{ 
    int32_t l_9 = 0xF1E0C863L;
    int32_t l_10 = 0x164F943AL;
    l_10 &= (p_4.f0 = ((p_4.f0 < (safe_add_func_int8_t_s_s((((l_9 & 0x1DL) >= 0x9737L) || l_9), p_4.f1))) == g_6[0].f0));
    return g_5;
}



static const uint8_t  func_12(union U3  p_13, int16_t  p_14, union U3  p_15, struct S2  p_16)
{ 
    struct S0 l_76 = {2UL,0x48EDL,0x424908F8L};
    int32_t l_105[5][2][5] = {{{6L,0L,0L,6L,0x96B20D6DL},{6L,0L,0L,6L,0x96B20D6DL}},{{6L,0L,0L,6L,0x96B20D6DL},{6L,0L,0L,6L,(-1L)}},{{(-5L),6L,6L,(-5L),(-1L)},{(-5L),6L,6L,(-5L),(-1L)}},{{(-5L),6L,6L,(-5L),(-1L)},{(-5L),6L,6L,(-5L),(-1L)}},{{(-5L),6L,6L,(-5L),(-1L)},{(-5L),6L,6L,(-5L),(-1L)}}};
    int32_t l_107[5];
    uint32_t l_117 = 2UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_107[i] = 0xB47CE4ADL;
    if ((safe_mod_func_uint64_t_u_u(g_17.f2, ((l_76 = func_22(g_17, g_6[0].f0)) , 0x33FEF3BFE2B3C890LL))))
    { 
        struct S0 l_82 = {5UL,0x19BBL,0UL};
lbl_81:
        for (p_13.f0 = (-29); (p_13.f0 <= (-27)); p_13.f0 = safe_add_func_int64_t_s_s(p_13.f0, 1))
        { 
            for (p_15.f0 = 0; (p_15.f0 > (-26)); p_15.f0--)
            { 
                return p_16.f0;
            }
            if (g_17.f0)
                goto lbl_81;
        }
        l_76 = l_82;
    }
    else
    { 
        uint8_t l_95 = 0x37L;
        int8_t l_118 = 0xD4L;
        int32_t l_120 = 1L;
        int32_t l_121 = (-7L);
        if ((l_107[4] |= (safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(g_17.f2, ((safe_div_func_uint16_t_u_u((g_106 = (safe_mul_func_int8_t_s_s(l_95, (safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((l_105[3][1][4] = ((((safe_mul_func_int8_t_s_s((-1L), (safe_lshift_func_int16_t_s_s(((func_22((g_31 , g_17), l_76.f2) , p_14) & p_13.f0), p_13.f0)))) & g_17.f2) < g_17.f2) && 3L)), 0)) <= l_76.f1), g_17.f2))))))), 4UL)) <= (-1L)))), 8)), g_17.f2)) && l_76.f0), p_15.f2))))
        { 
            int32_t l_119 = 0xD85517B9L;
            l_118 = (safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((g_17.f0 != (((safe_div_func_int32_t_s_s(g_6[0].f1, l_107[4])) >= (((g_116 = (g_5 && g_31.f0)) != g_106) > g_17.f0)) > l_117)), (-3L))) , g_31.f0), l_105[3][1][4]));
            --g_122;
        }
        else
        { 
            uint16_t l_133 = 0xBD8CL;
            p_16.f0 &= l_107[4];
            p_16.f0 = (g_31.f0 = (4294967293UL | ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(0xAB8FL, (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_133, p_15.f0)), l_133)))), 5)) | l_105[1][0][2])));
        }
        g_5 = l_105[3][1][4];
    }
    for (p_13.f2 = 3; (p_13.f2 >= 0); p_13.f2 -= 1)
    { 
        struct S1 l_141 = {0x4BB60450L,0xFDFF98C6L};
        int i;
        l_76 = (g_140 = func_22(g_17, (safe_lshift_func_int8_t_s_u((((safe_div_func_int8_t_s_s(((0x9CB853F4F8798744LL && (l_107[(p_13.f2 + 1)] && (safe_div_func_int64_t_s_s(p_16.f0, g_5)))) , l_107[(p_13.f2 + 1)]), l_76.f1)) , g_31.f0) < l_107[(p_13.f2 + 1)]), 4))));
        for (l_117 = 1; (l_117 <= 4); l_117 += 1)
        { 
            int32_t l_142 = 0L;
            int32_t l_143[3];
            int i;
            for (i = 0; i < 3; i++)
                l_143[i] = 0x056CAAECL;
            l_107[4] = (l_141 , (l_141.f0 |= (l_105[3][1][4] |= ((l_142 != (g_106 != l_107[2])) & l_143[2]))));
        }
    }
    return g_6[0].f1;
}



static struct S0  func_22(union U3  p_23, int32_t  p_24)
{ 
    uint32_t l_27 = 0xCB4E3473L;
    struct S2 l_30[5] = {{0x1F1C18A0L,-1L},{0x1F1C18A0L,-1L},{0x1F1C18A0L,-1L},{0x1F1C18A0L,-1L},{0x1F1C18A0L,-1L}};
    struct S2 l_32 = {-1L,0xFE01L};
    int8_t l_33 = 0x7BL;
    int32_t l_34 = (-7L);
    uint64_t l_56[4];
    struct S0 l_75[1][4][3] = {{{{1UL,-10L,18446744073709551615UL},{0xB5D9459313D93154LL,0xD5CAL,0xD7ACB2E3L},{0xB5D9459313D93154LL,0xD5CAL,0xD7ACB2E3L}},{{0xB5D9459313D93154LL,0xD5CAL,0xD7ACB2E3L},{0x676EBEA24D657348LL,0x0CAEL,0xFA02E7B8L},{0x9173DEB0DB54EB92LL,0x3347L,0x0445F764L}},{{1UL,-10L,18446744073709551615UL},{0x676EBEA24D657348LL,0x0CAEL,0xFA02E7B8L},{1UL,-10L,18446744073709551615UL}},{{0x1BC6E4F414216A80LL,0x1701L,0x3A679AE6L},{0xB5D9459313D93154LL,0xD5CAL,0xD7ACB2E3L},{0x9173DEB0DB54EB92LL,0x3347L,0x0445F764L}}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_56[i] = 1UL;
    if (((p_23.f2 >= (safe_lshift_func_uint8_t_u_s(g_5, ((l_34 = (l_27 != ((l_32 = (g_31 = (l_30[2] = ((safe_div_func_uint16_t_u_u((0x97A0B891L <= g_17.f0), g_17.f0)) , l_30[2])))) , l_33))) <= p_23.f2)))) , 0x62ED5BB0L))
    { 
        uint16_t l_39 = 65533UL;
        int32_t l_40 = 0xEDBCC772L;
        l_40 |= ((p_23.f2 && g_17.f2) <= (l_30[1] , (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((l_39 | l_39) | p_23.f0), l_39)), l_30[2].f1))));
        l_40 |= ((g_31.f1 | ((((((((safe_sub_func_uint32_t_u_u((((safe_div_func_uint8_t_u_u(l_32.f1, l_30[2].f1)) < ((safe_mod_func_uint8_t_u_u(((l_34 = (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((+(((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_23.f2, 7UL)), p_23.f2)) < 0x26L) ^ 0x0C02L)), 6)), l_39))) < 7L), 1L)) || p_23.f2)) > p_23.f0), 0xAAEEA3ADL)) != g_6[0].f1) , l_39) || g_17.f0) ^ p_23.f0) > p_24) != g_17.f2) > 0UL)) | l_32.f0);
    }
    else
    { 
        int32_t l_72 = (-6L);
        g_31.f0 &= l_56[0];
        for (g_31.f0 = 0; (g_31.f0 < 11); g_31.f0++)
        { 
            uint8_t l_71 = 1UL;
            int32_t l_73 = 1L;
            const struct S1 l_74[3][5][5] = {{{{0L,0x0966AB14L},{8L,0xD4E85873L},{9L,4294967295UL},{1L,4294967293UL},{1L,4294967293UL}},{{0x2CF448C3L,1UL},{0L,0x61642E2BL},{0x2CF448C3L,1UL},{0x4231C6F7L,0x76835008L},{0xDD6C5526L,4UL}},{{0L,4294967286UL},{0xEDBFDF84L,4294967289UL},{1L,4294967293UL},{0xEDBFDF84L,4294967289UL},{0L,4294967286UL}},{{0x2CF448C3L,1UL},{0x46C40596L,4294967287UL},{0x7A95F242L,4294967295UL},{0xAC0D4F8AL,4294967295UL},{0x7A95F242L,4294967295UL}},{{0L,0x0966AB14L},{0L,0x0966AB14L},{1L,4294967293UL},{0L,4294967286UL},{0xF164004CL,4294967295UL}}},{{{1L,1UL},{-1L,0x0D328F3CL},{0x2CF448C3L,1UL},{0x46C40596L,4294967287UL},{0x7A95F242L,4294967295UL}},{{0xEDBFDF84L,4294967289UL},{0L,4294967286UL},{9L,4294967295UL},{9L,4294967295UL},{0L,4294967286UL}},{{0x7A95F242L,4294967295UL},{-1L,0x0D328F3CL},{8L,0x86747B33L},{0x098501CAL,4294967293UL},{0xDD6C5526L,4UL}},{{8L,0xD4E85873L},{0L,0x0966AB14L},{8L,0xD4E85873L},{9L,4294967295UL},{1L,4294967293UL}},{{-9L,0UL},{0x46C40596L,4294967287UL},{0xDD6C5526L,4UL},{0x46C40596L,4294967287UL},{-9L,0UL}}},{{{8L,0xD4E85873L},{0xEDBFDF84L,4294967289UL},{0L,0x0966AB14L},{0L,4294967286UL},{0L,0x0966AB14L}},{{0x7A95F242L,4294967295UL},{0L,0x61642E2BL},{0xDD6C5526L,4UL},{0xAC0D4F8AL,4294967295UL},{6L,1UL}},{{0xEDBFDF84L,4294967289UL},{8L,0xD4E85873L},{8L,0xD4E85873L},{0xEDBFDF84L,4294967289UL},{0L,0x0966AB14L}},{{1L,1UL},{0xAC0D4F8AL,4294967295UL},{8L,0x86747B33L},{0x4231C6F7L,0x76835008L},{-9L,0UL}},{{0L,0x0966AB14L},{8L,0xD4E85873L},{9L,4294967295UL},{1L,4294967293UL},{1L,4294967293UL}}}};
            int i, j, k;
            l_73 = (l_34 = (safe_rshift_func_int8_t_s_s(((0xAFB0L == ((-9L) ^ ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(2L, 0)) < (safe_lshift_func_int8_t_s_u(g_6[0].f0, l_71))) , g_6[0].f1), g_17.f0)), 0xE6L)), l_30[2].f0)) > 0xD9C5L))) == l_72), p_23.f2)));
            g_6[0] = l_74[2][2][4];
        }
        l_34 &= p_23.f2;
    }
    return l_75[0][0][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_6[i].f0, "g_6[i].f0", print_hash_value);
        transparent_crc(g_6[i].f1, "g_6[i].f1", print_hash_value);

    }
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_17.f2, "g_17.f2", print_hash_value);
    transparent_crc(g_31.f0, "g_31.f0", print_hash_value);
    transparent_crc(g_31.f1, "g_31.f1", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_161.f0, "g_161.f0", print_hash_value);
    transparent_crc(g_161.f1, "g_161.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_167[i][j], "g_167[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_180[i][j][k], "g_180[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_182, "g_182", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
