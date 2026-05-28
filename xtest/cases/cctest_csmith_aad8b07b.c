// SPDX-License-Identifier: MIT
// cctest_csmith_aad8b07b.c --- cctest case csmith_aad8b07b (csmith seed 2866327675)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc4c63f3b */
/* @exp_ticks 0x39ff */

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

// Options:   -s 2866327675 -o /tmp/csmith_gen_c9__64na/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   uint16_t  f1;
   int32_t  f2;
};

union U1 {
   uint64_t  f0;
   const uint64_t  f1;
};


static const int16_t g_6 = (-1L);
static int64_t g_7 = 4L;
static int32_t g_17 = 6L;
static union U1 g_18 = {0xC6076FDA0246C382LL};
static uint16_t g_38 = 1UL;
static uint64_t g_46 = 18446744073709551611UL;
static int16_t g_78 = 0L;
static int8_t g_79[2][4][3] = {{{0xC4L,0x9EL,0xC4L},{0xC4L,(-10L),1L},{0xC4L,(-2L),(-1L)},{0xC4L,0x9EL,0xC4L}},{{0xC4L,(-10L),1L},{0xC4L,(-2L),(-1L)},{0xC4L,0x9EL,0xC4L},{0xC4L,(-10L),1L}}};
static uint32_t g_95 = 0xCC5F5551L;
static struct S0 g_131 = {0UL,0x5FB7L,-1L};
static int32_t g_150[3] = {(-10L),(-10L),(-10L)};
static int64_t g_160 = 0x736CA90BE2757DA9LL;



static int64_t  func_1(void);
static struct S0  func_2(const int8_t  p_3, uint32_t  p_4, uint16_t  p_5);
static uint32_t  func_8(int8_t  p_9, int64_t  p_10, union U1  p_11, int8_t  p_12, uint8_t  p_13);
static int32_t  func_21(const uint16_t  p_22);




static int64_t  func_1(void)
{ 
    uint16_t l_16 = 0xC4F3L;
    struct S0 l_225[4] = {{18446744073709551615UL,65526UL,0xC72C318DL},{18446744073709551615UL,65526UL,0xC72C318DL},{18446744073709551615UL,65526UL,0xC72C318DL},{18446744073709551615UL,65526UL,0xC72C318DL}};
    int i;
    l_225[3] = func_2((g_7 &= g_6), func_8((g_17 = ((safe_div_func_uint16_t_u_u(g_6, l_16)) <= g_6)), l_16, g_18, g_18.f0, l_16), g_6);
    return g_150[0];
}



static struct S0  func_2(const int8_t  p_3, uint32_t  p_4, uint16_t  p_5)
{ 
    int64_t l_181 = 0xE9F5D49091EDA5D4LL;
    int32_t l_182 = 0xC708496AL;
    int32_t l_183[3][5][5] = {{{(-1L),(-8L),0x4FD87F62L,(-8L),(-1L)},{(-1L),(-2L),(-1L),(-1L),(-2L)},{(-1L),0L,8L,(-8L),8L},{(-1L),(-1L),(-2L),(-1L),(-1L)},{0x4FD87F62L,0L,0x4FD87F62L,0x0BA8EAFAL,8L}},{{(-1L),6L,6L,(-1L),6L},{8L,0L,(-1L),0L,8L},{6L,(-1L),6L,6L,(-1L)},{8L,0x0BA8EAFAL,0x4FD87F62L,0L,0x4FD87F62L},{(-1L),(-1L),(-2L),(-1L),(-1L)}},{{0x4FD87F62L,0L,0x4FD87F62L,0x0BA8EAFAL,8L},{(-1L),6L,6L,(-1L),6L},{8L,0L,(-1L),0L,8L},{6L,(-1L),6L,6L,(-1L)},{8L,0x0BA8EAFAL,0x4FD87F62L,0L,0x4FD87F62L}}};
    uint64_t l_184 = 0x696F317466328CBBLL;
    int32_t l_196[1][4] = {{0x41E28011L,0x41E28011L,0x41E28011L,0x41E28011L}};
    int i, j, k;
    for (g_95 = (-21); (g_95 == 47); ++g_95)
    { 
        uint8_t l_176 = 255UL;
        int32_t l_179 = 0x330629C9L;
        int32_t l_180[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_180[i][j] = 0x52120ADCL;
        }
        g_17 ^= g_150[1];
        --l_176;
        l_184--;
    }
    g_150[0] = (safe_lshift_func_int8_t_s_s((g_79[0][3][2] = (safe_rshift_func_int16_t_s_u((((!(l_183[1][3][0] = (safe_rshift_func_int16_t_s_u(0x0A1DL, (p_5--))))) >= (l_196[0][3] >= (((l_182 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(l_182, (safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((g_38 <= g_160), l_181)), 4294967295UL)), p_4)))), g_131.f0)), p_4)), g_131.f0)), 5))) ^ l_181) , p_3))) , l_184), 8))), 4));
    for (l_181 = (-14); (l_181 >= 15); l_181 = safe_add_func_uint8_t_u_u(l_181, 7))
    { 
        int64_t l_222 = (-1L);
        g_17 = (safe_rshift_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(g_79[1][0][1], (g_160 , ((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int8_t_s(l_222)), 2)) , (safe_rshift_func_uint8_t_u_s(p_5, p_4)))))), 3));
    }
    return g_131;
}



static uint32_t  func_8(int8_t  p_9, int64_t  p_10, union U1  p_11, int8_t  p_12, uint8_t  p_13)
{ 
    int16_t l_171[1];
    int i;
    for (i = 0; i < 1; i++)
        l_171[i] = (-1L);
    g_17 &= 0xA70051EFL;
    for (p_10 = 0; (p_10 >= 25); p_10 = safe_add_func_uint32_t_u_u(p_10, 9))
    { 
        struct S0 l_151 = {5UL,0x7F53L,0xFDED0FC9L};
        uint16_t l_158 = 65535UL;
        if (func_21(p_9))
        { 
            struct S0 l_152 = {1UL,65535UL,0x911739D6L};
            int32_t l_153[5] = {1L,1L,1L,1L,1L};
            int i;
            l_152 = l_151;
            l_153[2] = g_18.f0;
        }
        else
        { 
            uint32_t l_165 = 0xF9B73E17L;
            for (p_13 = 0; (p_13 > 37); p_13 = safe_add_func_uint32_t_u_u(p_13, 1))
            { 
                uint32_t l_159 = 0x66F30B27L;
                g_150[2] = ((g_46 & (((safe_add_func_uint16_t_u_u((l_159 = l_158), (((g_160 |= 0xCDL) > (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_95, g_131.f1)), g_18.f0))) >= g_131.f1))) != l_165) < (-8L))) == g_78);
            }
        }
        return l_151.f1;
    }
    g_17 = (g_95 && ((((safe_unary_minus_func_uint32_t_u((safe_add_func_uint32_t_u_u(g_38, (safe_sub_func_uint32_t_u_u((l_171[0] , (((((safe_add_func_uint64_t_u_u((0x5EL > 0x6FL), p_10)) && p_12) , l_171[0]) < g_150[0]) || 0xF2DFL)), p_10)))))) , 0xAC5CL) == 0x7CF6L) , p_11.f1));
    return p_13;
}



static int32_t  func_21(const uint16_t  p_22)
{ 
    int8_t l_34 = 0L;
    int32_t l_35 = 1L;
    int32_t l_36 = 0x4BA928F0L;
    int32_t l_37[5][5];
    struct S0 l_41 = {1UL,65531UL,0xB5A27557L};
    int32_t l_106 = 0L;
    int8_t l_149 = (-10L);
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            l_37[i][j] = 6L;
    }
    if ((safe_rshift_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((~(g_46 ^= (((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_17, (++g_38))), (l_41 , p_22))) > (((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(g_6, p_22)) >= g_18.f1), l_35)) <= p_22) != p_22)) > l_35))) || 2L) == l_37[0][0]), 3)), 3)) || p_22) , 0x62C90ACEFCE06DFELL) || 0x4EC6F9132F4BB0F5LL), 15)))
    { 
        int32_t l_51 = 0x8BA54F90L;
        int32_t l_60[2][2][5] = {{{0xBC5F7C0CL,0xBC5F7C0CL,(-1L),0xBC5F7C0CL,0xBC5F7C0CL},{(-8L),0xB3EC6B9FL,(-8L),(-8L),0xB3EC6B9FL}},{{0xBC5F7C0CL,0xE97A0EDEL,0xE97A0EDEL,0xBC5F7C0CL,0xE97A0EDEL},{0xB3EC6B9FL,0xB3EC6B9FL,1L,0xB3EC6B9FL,0xB3EC6B9FL}}};
        int i, j, k;
lbl_111:
        for (l_41.f0 = (-23); (l_41.f0 >= 49); l_41.f0 = safe_add_func_uint32_t_u_u(l_41.f0, 1))
        { 
            uint64_t l_54 = 18446744073709551615UL;
            if (g_6)
                break;
            if ((safe_mod_func_int32_t_s_s(l_51, (safe_add_func_uint64_t_u_u(l_54, g_6)))))
            { 
                int16_t l_57[3][5][4] = {{{0x1D0BL,(-10L),1L,0x0DD4L},{0x1D0BL,(-10L),1L,1L},{0xF611L,0x0DD4L,(-1L),7L},{0x0F86L,0x1D0BL,0x1D0BL,0x0F86L},{7L,(-1L),0x0DD4L,0xF611L}},{{1L,1L,(-10L),0x1D0BL},{0x0DD4L,1L,(-10L),0x1D0BL},{0x29ADL,1L,0x0128L,0xF611L},{0xE627L,(-1L),6L,0x0F86L},{0x1521L,0x1D0BL,0x1521L,7L}},{{0x41E9L,0x0DD4L,0x80BBL,1L},{(-1L),(-10L),1L,0x0DD4L},{0x0128L,(-10L),1L,0x29ADL},{(-1L),0x0128L,0x80BBL,0xE627L},{0x41E9L,6L,0x1521L,0x1521L}}};
                int i, j, k;
                g_17 = (safe_mod_func_int16_t_s_s(l_57[1][2][3], l_57[1][2][3]));
                g_17 = ((safe_add_func_uint16_t_u_u((l_60[1][0][1] ^= 65532UL), 0x1F09L)) && 1UL);
                if (l_51)
                    continue;
            }
            else
            { 
                int64_t l_84 = 0x71E9D644770C58F8LL;
                g_17 = ((safe_lshift_func_int8_t_s_u((((g_79[0][3][2] = (safe_mod_func_uint64_t_u_u(((safe_add_func_int64_t_s_s(2L, ((safe_unary_minus_func_int8_t_s(l_54)) ^ ((g_78 = ((safe_rshift_func_int8_t_s_u((4294967295UL | (safe_mul_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((((g_18.f1 , 8L) && l_54) != p_22), 0x78C3L)) || l_54), l_54)), 4294967291UL)) ^ 0xDC4CAE1FL) && l_54) , g_38), p_22))), p_22)) && g_18.f0)) >= p_22)))) || g_17), 0x05ADB5619AF7C767LL))) || l_54) | 0x1AD519FDL), 2)) || l_54);
                l_60[1][1][3] = (((safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s(((((0x0447D5CE9A204B7FLL < ((l_84 == l_51) , (g_79[1][2][0] , p_22))) , 0xB4BAC794L) < p_22) , g_46), p_22)), l_84)) | l_51) != g_18.f0);
            }
        }
        for (g_78 = 0; (g_78 <= (-2)); g_78 = safe_sub_func_uint32_t_u_u(g_78, 9))
        { 
            uint16_t l_104 = 1UL;
            int32_t l_109[2][4][4] = {{{0x868D4C3CL,0x868D4C3CL,0x868D4C3CL,0x868D4C3CL},{0x868D4C3CL,0x868D4C3CL,0x868D4C3CL,0x868D4C3CL},{0x868D4C3CL,0x868D4C3CL,0x868D4C3CL,0x868D4C3CL},{0x868D4C3CL,0x868D4C3CL,0x868D4C3CL,0x868D4C3CL}},{{0x868D4C3CL,0x868D4C3CL,0x868D4C3CL,0x868D4C3CL},{0x868D4C3CL,0x868D4C3CL,0x868D4C3CL,0x868D4C3CL},{0x868D4C3CL,0x868D4C3CL,0x868D4C3CL,0x868D4C3CL},{0x868D4C3CL,0x868D4C3CL,0x868D4C3CL,0x868D4C3CL}}};
            int i, j, k;
            g_17 = (safe_lshift_func_int8_t_s_s(0L, ((7L | (g_18 , ((l_37[2][1] ^= (l_60[1][0][1] <= g_78)) <= p_22))) && l_41.f0)));
            if (l_51)
            { 
                uint8_t l_105 = 0xDEL;
                int32_t l_107[1][5][3] = {{{0xA2F2E681L,(-1L),(-1L)},{0xA2F2E681L,(-1L),(-1L)},{0xA2F2E681L,(-1L),(-1L)},{0xA2F2E681L,0xD778B148L,0xD778B148L},{(-1L),0xD778B148L,0xD778B148L}}};
                int32_t l_108 = 0x2BFC98A5L;
                int i, j, k;
                l_109[0][2][2] = ((l_108 |= ((l_107[0][3][2] = (((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(g_18.f0, (l_60[1][0][1] |= ((g_95--) != (safe_mod_func_int64_t_s_s(p_22, (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((l_104 == (l_105 &= 0x28385865AEC415B4LL)) < p_22) , l_106), p_22)), p_22)))))))), 0)) | 18446744073709551613UL), 3)) <= g_79[1][2][1]) <= 0x712F41F9L)) > l_41.f0)) && l_41.f0);
            }
            else
            { 
                struct S0 l_110 = {0UL,0xC105L,0x8E765C77L};
                l_41 = l_110;
                if (g_78)
                    goto lbl_111;
                l_60[0][0][4] ^= g_17;
            }
        }
    }
    else
    { 
        int8_t l_143 = 0x1BL;
        int32_t l_144 = (-2L);
        struct S0 l_145 = {18446744073709551612UL,0x7CE3L,0L};
        for (l_41.f0 = 0; (l_41.f0 <= 1); l_41.f0 += 1)
        { 
            uint16_t l_114 = 0UL;
            int32_t l_134 = 0xDFC78E83L;
            if ((l_114 | (p_22 == (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(l_114, ((((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((!(safe_sub_func_int64_t_s_s((0xB7619C58L == (-7L)), p_22))), p_22)), 0x0A1BL)) <= 0L) == 0UL) | l_114))), p_22)), 65535UL)), 0x74L)))))
            { 
                return p_22;
            }
            else
            { 
                struct S0 l_130 = {1UL,0xE9C9L,0x1C0E1BB5L};
                g_131 = l_130;
                if (p_22)
                    continue;
            }
            l_134 = (safe_rshift_func_int16_t_s_u(l_41.f1, 3));
            l_144 = (((((safe_div_func_int8_t_s_s((((safe_div_func_int32_t_s_s((l_134 && (((0xFA49983FL || (!((g_79[0][3][2] != (g_46--)) | (l_134 ^= (~0xBCBB49EDB2DAA5A9LL))))) != p_22) ^ l_143)), 0x21D915B7L)) , g_18.f1) , 6L), p_22)) < g_95) , p_22) ^ p_22) < 1L);
            for (l_41.f2 = 4; (l_41.f2 >= 1); l_41.f2 -= 1)
            { 
                g_131 = l_145;
                if (p_22)
                    continue;
            }
        }
        l_41 = (g_131 = g_131);
    }
    l_149 = ((p_22 && (((!(((g_78 > p_22) > (l_36 ^= (p_22 > l_41.f0))) ^ l_37[3][1])) <= 0xBC596D85L) == l_106)) || p_22);
    l_35 = g_150[0];
    return g_78;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_79[i][j][k], "g_79[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    transparent_crc(g_131.f1, "g_131.f1", print_hash_value);
    transparent_crc(g_131.f2, "g_131.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_150[i], "g_150[i]", print_hash_value);

    }
    transparent_crc(g_160, "g_160", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
