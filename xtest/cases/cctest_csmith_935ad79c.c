// SPDX-License-Identifier: MIT
// cctest_csmith_935ad79c.c --- cctest case csmith_935ad79c (csmith seed 2472204188)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x38b178d9 */
/* @exp_ticks 0x8b8b */

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

// Options:   -s 2472204188 -o /tmp/csmith_gen_si_exprf/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
};

union U1 {
   int64_t  f0;
};

union U2 {
   int8_t  f0;
};

union U3 {
   int16_t  f0;
};


static union U1 g_20 = {0L};
static struct S0 g_22 = {18446744073709551612UL};
static uint64_t g_50 = 0UL;
static int64_t g_51 = 0L;
static uint16_t g_60 = 0xC6AAL;
static uint32_t g_68[1][1] = {{6UL}};
static uint32_t g_69 = 4294967290UL;
static int16_t g_84[1] = {0L};
static uint16_t g_102 = 0x57ADL;
static int64_t g_128[2] = {0x190EF9F67763B3A3LL,0x190EF9F67763B3A3LL};
static int16_t g_129 = 0x513FL;
static union U2 g_139 = {1L};
static int32_t g_185 = (-9L);
static struct S0 g_187 = {7UL};
static uint16_t g_195 = 6UL;
static uint32_t g_251 = 18446744073709551606UL;



static int32_t  func_1(void);
static const int64_t  func_12(int64_t  p_13, union U3  p_14, int32_t  p_15);
static int8_t  func_18(union U1  p_19);
static int64_t  func_24(uint32_t  p_25, int8_t  p_26, struct S0  p_27);




static int32_t  func_1(void)
{ 
    uint8_t l_2[4] = {0x21L,0x21L,0x21L,0x21L};
    union U3 l_85 = {0xE484L};
    int32_t l_221 = 5L;
    int32_t l_250 = 0xCE4FDF00L;
    uint32_t l_252[1][1];
    struct S0 l_266 = {4UL};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_252[i][j] = 0UL;
    }
    ++l_2[0];
    l_221 = ((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(l_2[2], (~func_12((((safe_rshift_func_uint8_t_u_u((((func_18(g_20) >= (g_84[0] = ((safe_div_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((g_22.f0 < (-1L)), g_22.f0)) , 0xC5L), g_22.f0)) || g_20.f0))) > 0xC79A39DA5D7A2328LL) || (-5L)), g_20.f0)) < l_2[0]) & l_2[0]), l_85, l_2[0])))) && 0xA0534DAAF50BF5E6LL), l_2[2])) ^ 0UL);
    for (l_85.f0 = 0; (l_85.f0 <= 9); l_85.f0 = safe_add_func_int32_t_s_s(l_85.f0, 5))
    { 
        struct S0 l_232 = {0xD48334ABL};
        int32_t l_265 = 1L;
        int32_t l_273 = 0L;
        for (g_50 = (-21); (g_50 >= 6); g_50 = safe_add_func_uint64_t_u_u(g_50, 1))
        { 
            uint32_t l_239[5] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
            int32_t l_240 = 0x770074BBL;
            int i;
            for (g_139.f0 = 1; (g_139.f0 >= 0); g_139.f0 -= 1)
            { 
                int i;
                l_240 = ((l_239[4] = (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(g_128[g_139.f0], (l_232 , (safe_unary_minus_func_int64_t_s((safe_div_func_uint8_t_u_u((((((~(g_129 > (safe_div_func_uint16_t_u_u((0xC212172C683EEC59LL > 0xAAA289D617F3B7B1LL), g_51)))) && (-6L)) == g_69) , g_129) ^ g_128[g_139.f0]), l_221))))))) , 1UL), 5)), 0xB166L))) > g_139.f0);
                l_252[0][0] = (safe_add_func_int8_t_s_s((g_251 = (safe_add_func_uint64_t_u_u((~((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((l_2[0] & ((l_250 | (l_221 , g_129)) != g_69)), g_128[0])) == l_239[4]), 2)) >= 18446744073709551615UL) , g_128[0]) < g_128[1])), l_85.f0))), g_69));
                l_240 = (l_232.f0 > ((0xB1L && g_128[g_139.f0]) == (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((l_265 = (safe_div_func_uint32_t_u_u((g_68[0][0] &= ((safe_rshift_func_uint8_t_u_s((((((safe_div_func_int16_t_s_s((g_128[g_139.f0] | 1UL), l_232.f0)) > 1L) , l_240) , g_128[g_139.f0]) || g_128[g_139.f0]), 1)) & l_239[2])), g_51))), l_239[4])), g_251))));
            }
            for (l_240 = 0; (l_240 <= 4); l_240 += 1)
            { 
                int i;
                g_22 = g_187;
                g_187 = l_266;
                g_185 ^= (safe_lshift_func_uint16_t_u_s(((-1L) != l_239[l_240]), 14));
            }
        }
        for (g_50 = 0; (g_50 == 7); g_50++)
        { 
            uint16_t l_271[1][5] = {{1UL,1UL,1UL,1UL,1UL}};
            int i, j;
            l_265 = (g_185 = ((g_84[0] == (l_266 , l_271[0][4])) != (((~(l_265 || g_84[0])) >= g_251) , g_185)));
        }
        l_273 = ((g_195 || (l_265 = l_232.f0)) , g_139.f0);
    }
    return l_85.f0;
}



static const int64_t  func_12(int64_t  p_13, union U3  p_14, int32_t  p_15)
{ 
    int32_t l_90 = 0x9F80B5C3L;
    int8_t l_91 = 0x49L;
    int32_t l_99 = 0L;
    int32_t l_100 = 0x29FA49BFL;
    int64_t l_154 = 0xFA01E2AC5FADB94CLL;
    union U2 l_178 = {0x2DL};
    struct S0 l_220 = {1UL};
    if (((safe_mod_func_int64_t_s_s(((((safe_lshift_func_uint16_t_u_u((g_84[0] < (((1L | p_13) != (p_14.f0 , p_14.f0)) > 0UL)), l_90)) == l_90) != g_60) == p_13), p_14.f0)) , l_91))
    { 
        uint16_t l_97[4][3] = {{1UL,0xC100L,1UL},{65529UL,65528UL,0UL},{65529UL,65529UL,65528UL},{1UL,65528UL,65528UL}};
        int32_t l_101 = 0x8DD5D93DL;
        int32_t l_155 = (-2L);
        struct S0 l_157[3][3] = {{{0xB0B04AA5L},{0UL},{0xB0B04AA5L}},{{0xB0B04AA5L},{0UL},{0xB0B04AA5L}},{{0xB0B04AA5L},{0UL},{0xB0B04AA5L}}};
        uint64_t l_161 = 18446744073709551613UL;
        int i, j;
        for (g_22.f0 = 7; (g_22.f0 > 26); ++g_22.f0)
        { 
            const uint32_t l_96 = 0x870F1E56L;
            int32_t l_98[4] = {2L,2L,2L,2L};
            int i;
            for (l_91 = 0; (l_91 <= (-3)); --l_91)
            { 
                return l_96;
            }
            l_97[3][2] = (-7L);
            ++g_102;
        }
lbl_158:
        g_129 &= ((g_50 == (safe_mul_func_uint8_t_u_u(255UL, (((safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((((safe_div_func_int16_t_s_s((g_84[0] = (((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(((l_101 = (safe_unary_minus_func_uint64_t_u((safe_div_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(l_97[2][2], ((safe_mod_func_int8_t_s_s((g_128[0] = p_14.f0), g_102)) , g_102))) , p_13), p_15))))) < p_13), p_14.f0)), 2)) > l_91), 14)) | g_84[0]) && l_97[0][1])), 65532UL)) && 0xD9ACL) <= p_13), l_97[1][2])) , l_100), p_14.f0)) | g_102), p_14.f0)) & l_97[2][0]) | g_51)))) || g_60);
        for (g_51 = 21; (g_51 < (-11)); g_51 = safe_sub_func_int32_t_s_s(g_51, 8))
        { 
            struct S0 l_132 = {0x52AF0D96L};
            int32_t l_140 = 0xEF991E51L;
            g_22 = l_132;
            if ((((safe_sub_func_uint16_t_u_u((l_140 = ((((safe_rshift_func_int8_t_s_u((((((g_50 ^ ((p_14.f0 , ((g_139 , ((((g_69 > p_15) != l_97[3][2]) >= (-5L)) && 0x48E5C974L)) != 0xCF3C38EFL)) | p_14.f0)) > l_132.f0) ^ g_139.f0) ^ p_15) | g_129), l_97[0][0])) != p_15) && p_13) != 0UL)), l_99)) <= l_101) , p_15))
            { 
                l_99 = ((safe_mod_func_uint64_t_u_u(((((+(safe_mul_func_uint8_t_u_u(l_101, (safe_mul_func_uint16_t_u_u((0xE5F25790E88B3BFFLL > p_14.f0), ((safe_div_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((((g_60 != 0UL) == 0L) != 1UL) < g_68[0][0]) != l_154), 0UL)), l_155)), p_14.f0)) == 5L)))))) <= g_128[0]) > 0xE1L) | p_13), g_84[0])) | l_132.f0);
            }
            else
            { 
                struct S0 l_156 = {0UL};
                l_156 = (l_157[2][0] = l_156);
                if (g_139.f0)
                    goto lbl_158;
                if (g_129)
                    goto lbl_158;
            }
            if (((l_90 ^ (((g_84[0] < (safe_mod_func_int64_t_s_s((g_22.f0 <= ((l_161 = 0x7A8F7DD28A493C9ALL) | g_69)), l_154))) >= 2UL) | l_157[2][0].f0)) > 0UL))
            { 
                uint64_t l_162 = 0x6E961C82C1C9F68FLL;
                l_162++;
                return g_128[0];
            }
            else
            { 
                union U1 l_167 = {0xF35947468A156A7BLL};
                l_99 &= (safe_lshift_func_int16_t_s_u(((l_167 , ((l_155 > (g_128[0] , (p_15 <= p_13))) != g_84[0])) ^ l_140), 15));
            }
        }
    }
    else
    { 
        union U1 l_172 = {0xBB19F011E324BC14LL};
        int8_t l_173[5];
        int32_t l_174 = 0L;
        struct S0 l_186 = {3UL};
        int32_t l_193 = 0xD3B482F0L;
        int8_t l_194 = 1L;
        int i;
        for (i = 0; i < 5; i++)
            l_173[i] = 0x28L;
        l_174 = (((l_100 |= (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((p_14 , ((l_172 , ((p_13 & (g_128[1] = ((p_13 >= l_154) < p_14.f0))) || g_69)) & p_14.f0)) <= 0xB97BL), 9L)), g_84[0]))) != g_84[0]) || l_173[1]);
        if ((!(g_185 = (((1L == (l_174 = (((((safe_lshift_func_int8_t_s_u((l_178 , ((-1L) < (safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(g_68[0][0], p_15)), l_154)), g_68[0][0])))), l_173[2])) , g_51) || p_14.f0) >= (-4L)) >= l_173[4]))) < (-10L)) && 0x55685DB3B990F710LL))))
        { 
            g_187 = (g_22 = l_186);
        }
        else
        { 
            uint16_t l_190 = 0xC7CBL;
            int32_t l_191 = 0xA1C3D12EL;
            int32_t l_192 = (-6L);
            if ((safe_add_func_uint8_t_u_u(((0x1FFE2473L ^ (p_13 ^ (p_13 != ((l_190 &= p_14.f0) >= 0xA3L)))) == g_102), g_50)))
            { 
                uint32_t l_204 = 4294967295UL;
                --g_195;
                l_99 = 0x9A96C7A1L;
                l_174 = (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_194 > (p_13 , 0UL)), 14)), l_194)), l_204));
            }
            else
            { 
                int16_t l_219 = 0x632EL;
                l_193 = (safe_div_func_uint16_t_u_u(((((+(!3UL)) , (p_14.f0 , (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((((l_191 > ((safe_sub_func_uint8_t_u_u(l_219, 0x9FL)) | l_90)) >= l_192) < g_69), 2)) >= g_22.f0), p_13)), l_154)), 1)))) > 2UL) != 65531UL), p_15));
            }
        }
        g_187 = l_220;
    }
    return l_99;
}



static int8_t  func_18(union U1  p_19)
{ 
    uint16_t l_21[2][5] = {{0xE34EL,0UL,0xE34EL,0xE34EL,0xE34EL},{0UL,0x13E1L,0UL,0xE34EL,0xE34EL}};
    struct S0 l_23 = {0UL};
    uint32_t l_36 = 0x131DDA87L;
    int32_t l_67 = 0xEA0FEFE6L;
    uint16_t l_70 = 0x1708L;
    uint8_t l_79[3][5] = {{1UL,0x31L,1UL,0x31L,1UL},{251UL,251UL,251UL,251UL,251UL},{1UL,0x31L,1UL,0x31L,1UL}};
    int i, j;
    for (p_19.f0 = 1; (p_19.f0 >= 0); p_19.f0 -= 1)
    { 
        int32_t l_37 = 1L;
        struct S0 l_38 = {0UL};
        int32_t l_52[4][1] = {{0x90CE61FAL},{2L},{0x90CE61FAL},{2L}};
        int i, j;
        l_23 = g_22;
        l_52[2][0] ^= (func_24(g_20.f0, (((safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_22.f0 != (((g_20.f0 < ((((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_23.f0 == l_36), (-1L))), l_37)) < g_20.f0) && p_19.f0) , l_37)) ^ g_22.f0) & g_20.f0)), (-3L))), l_37)) >= g_22.f0) >= p_19.f0), l_38) && 0xDC9A81FFDE63B691LL);
        if (g_20.f0)
        { 
            uint8_t l_59 = 255UL;
            int32_t l_63 = 0x68CDE333L;
            g_69 = (safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((p_19.f0 ^ (l_59 = (++g_50))), (l_63 &= (--g_60)))) , (~((g_68[0][0] = (safe_lshift_func_uint8_t_u_u((((l_67 = ((0UL | (18446744073709551607UL & 0x5372A7181CA8FD5FLL)) , l_37)) , 0L) <= g_50), g_22.f0))) || g_51))), l_52[1][0]));
            if (l_37)
                continue;
        }
        else
        { 
            for (g_50 = 0; (g_50 <= 1); g_50 += 1)
            { 
                int i, j;
                l_52[2][0] &= l_21[g_50][(g_50 + 2)];
                ++l_70;
            }
        }
    }
    l_67 |= ((p_19.f0 || p_19.f0) == (safe_lshift_func_uint16_t_u_u(p_19.f0, (safe_mod_func_uint16_t_u_u((g_60 = (safe_sub_func_uint16_t_u_u((6L == l_23.f0), g_60))), p_19.f0)))));
    return l_79[0][3];
}



static int64_t  func_24(uint32_t  p_25, int8_t  p_26, struct S0  p_27)
{ 
    int8_t l_45 = (-10L);
    g_51 |= (safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s(0x39B398EFL, (safe_sub_func_int32_t_s_s(l_45, (safe_sub_func_uint8_t_u_u(((g_50 = (l_45 & (safe_rshift_func_int16_t_s_s(l_45, l_45)))) >= l_45), l_45)))))) >= l_45), g_20.f0));
    return l_45;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20.f0, "g_20.f0", print_hash_value);
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_68[i][j], "g_68[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);

    }
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_128[i], "g_128[i]", print_hash_value);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_187.f0, "g_187.f0", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
