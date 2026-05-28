// SPDX-License-Identifier: MIT
// cctest_csmith_fe4ca6fc.c --- cctest case csmith_fe4ca6fc (csmith seed 4266436348)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x391566ac */
/* @exp_ticks 0x3e51 */

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

// Options:   -s 4266436348 -o /tmp/csmith_gen_lo601bx2/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int8_t  f0;
   uint16_t  f1;
   int16_t  f2;
};

struct S1 {
   int8_t  f0;
};

union U2 {
   uint32_t  f0;
};


static union U2 g_8 = {18446744073709551611UL};
static uint16_t g_11[3][5] = {{1UL,0x91B6L,0x91B6L,1UL,4UL},{1UL,0x6038L,0x7642L,0x7642L,0x6038L},{4UL,0x91B6L,0x7642L,0x8EB9L,0x8EB9L}};
static int64_t g_15 = 1L;
static uint8_t g_21 = 251UL;
static uint32_t g_29 = 0x8D8131DDL;
static uint32_t g_72 = 0x3CDC1821L;
static struct S1 g_91[2][5][2] = {{{{0x60L},{0x60L}},{{0x60L},{0x60L}},{{0x60L},{0x60L}},{{0x60L},{0x60L}},{{0x60L},{0x60L}}},{{{0x60L},{0x60L}},{{0x60L},{0x60L}},{{0x60L},{0x60L}},{{0x60L},{0x60L}},{{0x60L},{0x60L}}}};
static int8_t g_94 = 0xB8L;
static int16_t g_95 = 0x9BDAL;
static int32_t g_96 = 0L;
static uint32_t g_97 = 5UL;
static int64_t g_118 = (-10L);
static int64_t g_137 = 1L;
static int8_t g_159 = 0x35L;
static int16_t g_171 = 0x7B03L;
static uint16_t g_173 = 0x93B6L;
static uint32_t g_177 = 4294967295UL;
static int32_t g_178 = (-10L);
static uint32_t g_179 = 0xFBA0E2E6L;
static int8_t g_182 = 5L;



static int16_t  func_1(void);
static int16_t  func_2(uint32_t  p_3, union U2  p_4, uint64_t  p_5, int64_t  p_6);
static struct S0  func_22(uint32_t  p_23);
static int16_t  func_32(uint64_t  p_33, struct S0  p_34, const uint32_t  p_35, int32_t  p_36, int64_t  p_37);




static int16_t  func_1(void)
{ 
    uint32_t l_7 = 6UL;
    int32_t l_14 = 0xF5D870A3L;
    uint64_t l_20[3];
    int32_t l_24 = 7L;
    int i;
    for (i = 0; i < 3; i++)
        l_20[i] = 0x6974EDF0EBF90350LL;
    g_15 &= ((l_14 = func_2(l_7, g_8, g_8.f0, g_8.f0)) , g_11[1][3]);
    l_14 = (safe_rshift_func_int8_t_s_s(((g_8.f0 >= ((safe_lshift_func_int16_t_s_s(l_20[0], (g_21 = 0xB384L))) == ((func_22(((l_24 |= ((l_20[0] & l_14) || 0UL)) , g_11[1][3])) , l_20[0]) != 1UL))) | l_14), 0));
    return g_179;
}



static int16_t  func_2(uint32_t  p_3, union U2  p_4, uint64_t  p_5, int64_t  p_6)
{ 
    int32_t l_9 = (-7L);
    int32_t l_10 = 0x3D42374BL;
    g_11[1][3]--;
    return p_6;
}



static struct S0  func_22(uint32_t  p_23)
{ 
    int64_t l_25 = (-1L);
    int32_t l_26 = (-10L);
    int32_t l_27 = 6L;
    int16_t l_28[4] = {0L,0L,0L,0L};
    int32_t l_54 = 1L;
    struct S0 l_55 = {0L,1UL,0L};
    int i;
    --g_29;
    g_182 ^= (func_32((l_54 &= (safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((((((((safe_sub_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(0x8F50L, (((safe_mod_func_uint8_t_u_u((p_23 & (safe_sub_func_uint8_t_u_u(p_23, ((safe_div_func_uint16_t_u_u(p_23, 0x62EAL)) <= l_27)))), 0xBDL)) > (-7L)) >= 0UL))) == 0x91L), g_29)) ^ 0xCE61FA7BB34E4A53LL) , l_27) , g_15) , l_28[0]) || 0x0D4AL) > l_26), 10)), p_23)), g_29))), l_55, g_11[1][3], p_23, p_23) && g_159);
    return l_55;
}



static int16_t  func_32(uint64_t  p_33, struct S0  p_34, const uint32_t  p_35, int32_t  p_36, int64_t  p_37)
{ 
    uint8_t l_68[4][5];
    uint32_t l_89 = 0x26A5A418L;
    struct S1 l_92 = {0xBBL};
    int32_t l_93[2][2][1];
    uint32_t l_102 = 7UL;
    int32_t l_145 = 0x9A48E5C9L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_68[i][j] = 255UL;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_93[i][j][k] = 1L;
        }
    }
    for (g_15 = 2; (g_15 >= 0); g_15 -= 1)
    { 
        int64_t l_67 = 0x21FD00955DF93C58LL;
        int32_t l_69[3][2];
        int32_t l_70 = 0L;
        uint8_t l_71 = 0x5EL;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_69[i][j] = 0x610AA4AEL;
        }
        for (p_33 = 0; (p_33 <= 2); p_33 += 1)
        { 
            int8_t l_60 = 0x8FL;
            int32_t l_90 = 1L;
            if ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((p_34.f2 = l_60) || (l_70 ^= (safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((l_69[0][0] = (safe_mul_func_int8_t_s_s(l_67, l_68[3][0]))) <= g_8.f0), g_11[1][3])), p_33)))), 3)), l_71)))
            { 
                uint16_t l_75 = 1UL;
                l_75 = (((l_68[3][0] || 7L) && (p_34 , (++g_72))) | 0x95BD6605L);
            }
            else
            { 
                return p_34.f0;
            }
            if (l_71)
                break;
            for (p_37 = 2; (p_37 >= 0); p_37 -= 1)
            { 
                int32_t l_80 = 0xA9A78915L;
                int i, j;
                l_90 &= (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_80 = p_35), (l_89 ^= (safe_rshift_func_uint8_t_u_s(((safe_div_func_int16_t_s_s((((g_11[p_37][p_33] = (safe_mul_func_uint8_t_u_u(g_8.f0, (safe_sub_func_int32_t_s_s(l_60, l_60))))) >= p_34.f0) < p_34.f2), 0xD74EL)) > 0x46FCCBB28B9DDA26LL), l_70))))), l_60));
                l_92 = g_91[0][0][0];
            }
        }
        --g_97;
        return p_34.f2;
    }
    for (l_89 = 0; (l_89 == 34); l_89++)
    { 
        uint32_t l_117 = 0x18AB8759L;
        const struct S1 l_121 = {0x75L};
        int32_t l_138 = 0x6114BB34L;
        int32_t l_146 = (-9L);
        ++l_102;
        if ((((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_34.f1, (safe_mul_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u(((g_118 = l_117) >= ((p_34.f2 |= g_29) <= p_37)), p_33)) >= 0L) | 0UL), 6UL)))) > 0x2EL), 8)), g_91[0][0][0].f0)), l_117)) & 0x9D4FCBE7L) != 0x7AL))
        { 
            uint64_t l_136 = 0xEB5AB84A4DC89BD5LL;
            l_93[0][0][0] = (safe_mul_func_int16_t_s_s((l_121 , (safe_sub_func_uint32_t_u_u(((g_137 ^= (safe_lshift_func_int8_t_s_u((((((((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(g_15, (safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(l_117, (-1L))) || g_11[1][3]), g_94)))), p_37)) && p_33) != l_121.f0), p_33)) != 0x3579F7DC92B24513LL) & 0x1E7325C604081ECFLL) != 0xD808B432A052AF0DLL) < l_136) < g_11[1][3]) != 8L), 4))) >= p_36), 0UL))), p_33));
            l_93[1][0][0] = (l_138 &= l_117);
            l_146 = ((g_94 <= (safe_mod_func_uint64_t_u_u(18446744073709551615UL, (safe_lshift_func_uint8_t_u_s((l_138 |= l_93[0][0][0]), 0))))) >= (safe_lshift_func_int16_t_s_s(((l_145 &= 1L) ^ l_121.f0), 5)));
        }
        else
        { 
            int64_t l_150 = 0x2ED91146291C4591LL;
            struct S1 l_151[3][3][4] = {{{{0x05L},{0x05L},{-1L},{0L}},{{-1L},{0x2DL},{-1L},{-1L}},{{0L},{-1L},{-1L},{0L}}},{{{-1L},{-1L},{0x2DL},{-1L}},{{-1L},{0x05L},{0x2DL},{0x2DL}},{{-1L},{-1L},{-1L},{0x2DL}}},{{{0L},{0x05L},{0L},{-1L}},{{0L},{-1L},{-1L},{0L}},{{-1L},{-1L},{0x2DL},{-1L}}}};
            int i, j, k;
            for (g_137 = 29; (g_137 >= (-6)); --g_137)
            { 
                uint16_t l_149 = 65535UL;
                l_149 = 8L;
                l_150 = p_33;
            }
            l_92 = l_151[0][1][0];
        }
        if (p_36)
        { 
            int32_t l_156 = 0x89475B27L;
            struct S0 l_165 = {0x4EL,65527UL,0xF57FL};
            int32_t l_170 = 0x95485A9BL;
            int32_t l_172 = (-3L);
            g_159 = (((0x0AF2EBD0L | ((safe_lshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((l_68[2][4] != l_156), ((safe_mul_func_uint16_t_u_u(0x4C05L, g_8.f0)) && g_15))) || g_91[0][0][0].f0), 5)) && l_121.f0)) >= p_35) != 1UL);
            if (g_96)
            { 
                uint8_t l_160 = 248UL;
                --l_160;
                l_170 = (safe_add_func_uint32_t_u_u((l_165 , ((safe_mod_func_uint64_t_u_u(0x8345FCB09B1B028DLL, (1L && (safe_div_func_int32_t_s_s(l_165.f1, p_33))))) && p_36)), p_34.f1));
                ++g_173;
            }
            else
            { 
                g_177 = (!g_173);
                return l_146;
            }
        }
        else
        { 
            g_179--;
            return p_36;
        }
    }
    return p_34.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_91[i][j][k].f0, "g_91[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
