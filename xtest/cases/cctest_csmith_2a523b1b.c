// SPDX-License-Identifier: MIT
// cctest_csmith_2a523b1b.c --- cctest case csmith_2a523b1b (csmith seed 710032155)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x970bb81e */
/* @exp_ticks 0x4bcc */

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

// Options:   -s 710032155 -o /tmp/csmith_gen_vr0j5ejm/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const uint32_t  f0;
   const uint32_t  f1;
   int16_t  f2;
};

union U1 {
   int64_t  f0;
};


static int32_t g_2[5][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
static int32_t g_8 = 8L;
static int32_t g_11 = (-7L);
static uint8_t g_67[2][1][4] = {{{0x74L,0x74L,0x74L,0x74L}},{{0x74L,0x74L,0x74L,0x74L}}};
static int32_t g_69 = 1L;
static int32_t *g_68 = &g_69;
static union U1 g_80 = {0xA82D85846CF466DFLL};
static union U1 * const g_79[4] = {&g_80,&g_80,&g_80,&g_80};
static uint64_t g_97 = 2UL;
static int32_t g_98 = 0xDA1D0942L;
static int32_t g_105 = (-1L);
static uint32_t g_106 = 0x51AFAABEL;
static uint16_t g_111[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
static struct S0 g_138 = {4294967294UL,7UL,0xC78CL};
static uint16_t *g_162 = &g_111[5];
static uint8_t g_180[7][2] = {{0x94L,0xADL},{0x94L,0x94L},{0xADL,0x94L},{0x94L,0xADL},{0xADL,0xADL},{0x8CL,0xADL},{0xADL,0x8CL}};
static uint32_t g_201 = 1UL;
static int32_t ** const g_217 = &g_68;
static struct S0 g_235 = {1UL,0x1C73E297L,0x0D2BL};
static uint16_t g_245 = 6UL;
static int16_t g_250[1][2][3] = {{{2L,2L,2L},{0x61D3L,0x61D3L,0x61D3L}}};
static const int32_t *g_287 = (void*)0;
static struct S0 *g_294 = (void*)0;
static struct S0 **g_293[3][6][4] = {{{(void*)0,&g_294,(void*)0,&g_294},{(void*)0,&g_294,&g_294,(void*)0},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{(void*)0,&g_294,(void*)0,&g_294}},{{(void*)0,&g_294,&g_294,(void*)0},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{(void*)0,&g_294,(void*)0,&g_294},{(void*)0,&g_294,&g_294,(void*)0}},{{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{&g_294,&g_294,&g_294,&g_294},{(void*)0,&g_294,(void*)0,&g_294},{(void*)0,&g_294,&g_294,(void*)0},{&g_294,&g_294,&g_294,&g_294}}};
static int64_t *g_361 = &g_80.f0;
static uint32_t g_374 = 1UL;
static int8_t g_429[2][4][4] = {{{(-8L),0x91L,5L,5L},{0x91L,0x91L,8L,5L},{(-8L),0x91L,5L,5L},{0x91L,0x91L,8L,5L}},{{(-8L),0x91L,5L,5L},{0x91L,0x91L,8L,5L},{(-8L),0x91L,5L,5L},{0x91L,0x91L,8L,5L}}};



static int8_t  func_1(void);
static int16_t  func_20(const union U1  p_21, union U1  p_22);
static const union U1  func_23(int16_t  p_24, uint32_t  p_25, int32_t * p_26);
static int32_t * func_27(int32_t * p_28, int32_t * p_29, const int32_t * p_30, uint8_t  p_31, uint8_t  p_32);
static int32_t * func_33(int32_t * p_34, int32_t * p_35, int32_t * p_36, int32_t * const  p_37);
static int32_t * func_39(int32_t  p_40, uint8_t  p_41);
static uint16_t  func_42(uint64_t  p_43, int8_t  p_44, int32_t * p_45);
static int8_t  func_61(int32_t * p_62, int32_t * p_63, int32_t * p_64);




static int8_t  func_1(void)
{ 
    int32_t *l_46 = (void*)0;
    int32_t l_347 = (-1L);
    int32_t l_362 = 0xB60DEC5EL;
    union U1 l_439 = {-1L};
    uint32_t l_499[6] = {0x7EFD3275L,0x7EFD3275L,0x7EFD3275L,0x7EFD3275L,0x7EFD3275L,0x7EFD3275L};
    uint8_t l_516[1][5] = {{255UL,255UL,255UL,255UL,255UL}};
    int i, j;
    for (g_2[3][0] = (-22); (g_2[3][0] != 29); g_2[3][0]++)
    { 
        uint32_t l_5 = 4294967295UL;
        int32_t *l_14 = &g_2[3][0];
        int32_t l_379 = 0xABB6D332L;
        struct S0 *l_384 = &g_138;
        uint32_t l_392 = 0xE0869C71L;
        int16_t l_403 = 0xE344L;
        struct S0 ***l_497 = &g_293[0][4][0];
        uint64_t l_500 = 0x4ECEBCF6C405E7EDLL;
        if (l_5)
            break;
        if (g_2[2][0])
            break;
        for (l_5 = 8; (l_5 <= 43); ++l_5)
        { 
            uint8_t l_112 = 0x38L;
            int32_t *l_230[3][3][7] = {{{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11}},{{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11}},{{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11}}};
            int8_t l_430 = 0x21L;
            struct S0 **l_454 = &l_384;
            union U1 *l_458 = (void*)0;
            int32_t *l_483 = &g_2[0][1];
            uint16_t l_510 = 8UL;
            const uint32_t l_517 = 0x4BD43C00L;
            int i, j, k;
        }
    }
    return l_439.f0;
}



static int16_t  func_20(const union U1  p_21, union U1  p_22)
{ 
    int8_t l_337 = 0x5BL;
    int32_t l_338 = 0x6A8A0727L;
    struct S0 l_339 = {0UL,18446744073709551615UL,0x0F1CL};
    uint64_t *l_342 = &g_97;
    uint64_t **l_343 = &l_342;
    struct S0 **l_344 = &g_294;
    int32_t *l_345[7][7][3] = {{{(void*)0,&g_2[3][2],(void*)0},{(void*)0,&g_2[3][0],(void*)0},{&g_2[3][0],(void*)0,(void*)0},{(void*)0,&g_2[3][0],&g_105},{&g_105,&g_2[3][2],&g_11},{&g_105,&g_2[4][2],&g_2[3][0]},{&g_2[3][0],&g_105,&g_8}},{{&g_2[2][1],(void*)0,(void*)0},{(void*)0,&g_2[3][0],&g_2[0][2]},{&g_2[3][0],&g_105,&g_11},{&g_105,&g_2[3][0],&g_105},{&g_11,&g_11,&g_69},{&g_69,&g_8,&g_8},{&g_69,&g_8,&g_2[3][0]}},{{&g_69,(void*)0,&g_11},{&g_69,&g_2[3][0],&g_8},{&g_11,&g_2[4][2],&g_2[3][2]},{&g_105,&g_8,(void*)0},{&g_2[3][0],(void*)0,&g_69},{(void*)0,&g_11,&g_2[3][0]},{&g_2[2][1],&g_105,&g_2[3][0]}},{{&g_2[3][0],&g_2[3][0],&g_8},{&g_105,&g_2[0][2],&g_11},{&g_105,&g_69,&g_2[3][0]},{(void*)0,&g_2[3][0],(void*)0},{&g_2[3][0],&g_105,&g_2[3][0]},{(void*)0,(void*)0,&g_11},{&g_105,&g_11,&g_8}},{{&g_69,&g_11,&g_2[3][0]},{&g_2[4][2],(void*)0,&g_2[3][0]},{&g_2[3][1],(void*)0,&g_69},{&g_11,&g_69,(void*)0},{(void*)0,(void*)0,&g_2[3][2]},{&g_2[3][0],&g_69,&g_8},{(void*)0,&g_8,&g_11}},{{&g_2[3][0],&g_105,&g_2[3][0]},{&g_2[3][2],&g_105,&g_8},{(void*)0,&g_8,&g_69},{&g_11,&g_69,&g_105},{&g_105,(void*)0,&g_11},{&g_105,&g_69,&g_2[0][2]},{&g_105,(void*)0,(void*)0}},{{&g_69,(void*)0,&g_8},{&g_2[3][0],&g_11,&g_2[3][0]},{(void*)0,&g_11,&g_11},{&g_8,(void*)0,&g_105},{&g_11,&g_105,(void*)0},{&g_8,&g_2[3][0],(void*)0},{&g_11,&g_69,(void*)0}}};
    int i, j, k;
    g_105 = (safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((p_22.f0 == (safe_div_func_int8_t_s_s((+0xA6D3L), ((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u((((safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((--(*g_162)), (l_338 &= ((safe_lshift_func_int16_t_s_u(g_250[0][0][2], 12)) > l_337)))) <= (l_339 , ((safe_mod_func_int8_t_s_s((((*l_343) = l_342) == &g_97), p_22.f0)) & 0xA981L))), g_98)) , &g_294) != l_344))) >= 1UL) && (*g_162)), l_339.f0)), g_138.f0)), (-5L))), p_21.f0)) | g_250[0][1][2])))), p_22.f0)), (-1L))), 0x5572A2F38F12F4B5LL));
    return g_98;
}



static const union U1  func_23(int16_t  p_24, uint32_t  p_25, int32_t * p_26)
{ 
    uint8_t l_231 = 0xDDL;
    struct S0 *l_233 = &g_138;
    struct S0 **l_232 = &l_233;
    struct S0 *l_234[2][4] = {{&g_138,&g_235,&g_235,&g_138},{&g_235,&g_138,&g_235,&g_235}};
    int32_t l_244 = 0xD0738B98L;
    int32_t l_248 = 0x86032AD6L;
    uint16_t **l_307 = (void*)0;
    uint16_t ***l_306 = &l_307;
    const union U1 l_309 = {0x7AE4C3DE91E5CCB1LL};
    int i, j;
    l_234[1][0] = ((l_231 = 2L) , ((*l_232) = &g_138));
    for (g_201 = 0; (g_201 <= 5); g_201 += 1)
    { 
        int32_t *l_236 = &g_69;
        int32_t *l_237 = &g_69;
        int32_t *l_238 = &g_69;
        int32_t *l_239 = &g_69;
        int32_t *l_240 = (void*)0;
        int32_t l_241[7] = {0xEFA42DB3L,0xEFA42DB3L,1L,0xEFA42DB3L,0xEFA42DB3L,1L,0xEFA42DB3L};
        int32_t *l_242 = (void*)0;
        int32_t *l_243[6] = {(void*)0,&l_241[2],&l_241[2],(void*)0,&l_241[2],&l_241[2]};
        struct S0 *l_289 = &g_235;
        const int16_t *l_305 = &g_235.f2;
        int i;
        g_69 |= (g_111[g_201] >= g_138.f2);
        ++g_245;
        if ((*p_26))
            continue;
        for (p_24 = 0; (p_24 <= 1); p_24 += 1)
        { 
            uint64_t l_252 = 0xBDB3FF2206D238DELL;
            union U1 *l_263[6];
            uint16_t *l_270 = &g_111[2];
            struct S0 *l_288 = &g_138;
            uint8_t *l_300[6][3][7] = {{{&g_67[0][0][2],&g_180[3][1],&l_231,&g_67[0][0][2],&g_180[2][0],&l_231,&g_67[0][0][3]},{&g_180[3][0],&g_180[2][0],&g_180[2][0],&l_231,&g_180[2][0],&l_231,&l_231},{&g_67[0][0][2],&g_180[2][0],&g_180[2][0],&g_180[2][0],&g_180[2][0],&g_180[2][0],&g_180[2][0]}},{{&g_67[0][0][2],&l_231,&g_67[0][0][3],&g_180[2][0],(void*)0,&g_67[0][0][2],&g_180[2][0]},{&l_231,&g_180[3][1],&g_180[3][1],&g_67[0][0][2],&l_231,&g_180[2][0],&g_67[0][0][2]},{&l_231,&l_231,&g_180[0][1],&g_180[2][0],&g_180[3][1],&g_180[2][0],&l_231}},{{&l_231,&g_67[0][0][2],(void*)0,&l_231,(void*)0,&g_67[0][0][2],&l_231},{&g_67[0][0][3],&g_180[3][0],&l_231,(void*)0,&l_231,&g_67[0][0][2],&g_67[0][0][2]},{&g_180[3][0],&l_231,&g_180[2][0],&l_231,&l_231,&g_180[0][1],&g_180[2][0]}},{{&g_180[3][1],&g_67[0][0][2],&l_231,&g_180[3][1],&g_67[0][0][2],&l_231,(void*)0},{&l_231,&g_180[5][1],(void*)0,(void*)0,&g_180[5][1],&l_231,&g_180[2][0]},{&g_180[2][0],&l_231,&g_180[0][1],&l_231,&g_180[3][0],&g_180[0][1],&g_180[3][1]}},{{&g_180[5][1],&g_180[2][0],&g_180[3][1],&l_231,(void*)0,&g_67[0][0][2],&l_231},{&l_231,&l_231,&g_67[0][0][3],&g_67[0][0][2],(void*)0,&g_67[0][0][2],&g_67[0][0][2]},{(void*)0,&g_180[5][1],&g_180[0][1],&g_180[5][1],(void*)0,&g_180[2][0],&g_180[3][0]}},{{&l_231,&g_67[0][0][2],&g_67[0][0][2],&g_180[3][0],(void*)0,&g_180[2][0],&l_231},{&g_67[0][0][3],&l_231,&g_180[2][0],(void*)0,&g_180[3][0],&g_67[0][0][2],&g_67[0][0][2]},{&l_231,&g_180[3][0],&g_180[2][0],(void*)0,&g_180[5][1],&g_180[0][1],&g_180[5][1]}}};
            int64_t *l_304[1];
            uint16_t ****l_308 = &l_306;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_263[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_304[i] = &g_80.f0;
            (*g_217) = p_26;
            for (g_98 = 1; (g_98 >= 0); g_98 -= 1)
            { 
                int8_t l_249 = (-8L);
                int32_t l_251 = 3L;
                int i, j;
                ++l_252;
                for (l_231 = 0; (l_231 <= 1); l_231 += 1)
                { 
                    int i, j;
                    (*l_237) = ((((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_180[(g_98 + 3)][p_24], g_180[(g_98 + 1)][g_98])), (p_24 && (&g_68 == (void*)0)))) != 0L) , l_251) || 0xE2L);
                }
                (*l_237) = ((((safe_sub_func_int16_t_s_s(g_11, (((((safe_sub_func_int16_t_s_s((((void*)0 != l_263[3]) > (~p_24)), ((void*)0 != l_234[p_24][(p_24 + 1)]))) <= 0x9354101DL) != p_25) | p_24) >= 0UL))) , (*l_237)) == 3UL) != (*p_26));
            }
            for (g_138.f2 = 0; (g_138.f2 <= 1); g_138.f2 += 1)
            { 
                uint64_t *l_265[2][7][3] = {{{&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97},{&l_252,&g_97,&l_252},{&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97}},{{&l_252,&g_97,&l_252},{&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97},{&l_252,&g_97,&l_252},{&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97}}};
                union U1 l_280 = {0x7959B7E851782DA5LL};
                struct S0 * const *l_292 = &l_288;
                int i, j, k;
                if ((l_265[1][5][1] == l_265[1][5][1]))
                { 
                    int64_t *l_284 = &l_280.f0;
                    int i, j;
                    (*l_237) |= ((safe_add_func_int32_t_s_s(g_180[(g_201 + 1)][p_24], (safe_sub_func_int8_t_s_s(g_180[(g_201 + 1)][p_24], ((void*)0 == l_270))))) | ((0xEBL < 0x1FL) & (((!(p_24 >= g_245)) > (*g_162)) , 0xFBL)));
                    (*l_238) ^= (((g_111[3] , &g_180[5][1]) == (void*)0) | (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s(((*l_284) = (safe_lshift_func_int16_t_s_s(((l_280 , (((!(((safe_mul_func_int8_t_s_s((g_235 , g_138.f1), ((g_180[(g_201 + 1)][p_24] & l_280.f0) | g_245))) , g_180[(g_201 + 1)][p_24]) != 0xE21BL)) | g_245) >= g_235.f2)) == 0xE2L), p_24))), 0x730C7F6F722B7FBFLL)) ^ g_97), 7)), (-1L))));
                    p_26 = (*g_217);
                }
                else
                { 
                    const int32_t *l_285[6];
                    const int32_t **l_286 = &l_285[3];
                    int32_t l_295[2];
                    const uint8_t *l_301 = &l_231;
                    uint16_t l_302[6][6][5] = {{{0x9CC6L,65531UL,0xEC40L,0x90C5L,0UL},{0x8245L,0x3062L,65532UL,0xDE94L,0x5F42L},{1UL,0x1038L,65531UL,0x90C5L,65529UL},{0xDE94L,0x39B9L,0x39B9L,0xDE94L,0x57ACL},{0xB43AL,0xEC40L,65533UL,0x90C5L,0x3903L},{0x715AL,65535UL,5UL,0xDE94L,0x05ABL}},{{65526UL,65533UL,0x1038L,0x90C5L,65535UL},{1UL,65532UL,65535UL,0xDE94L,65534UL},{0x90C5L,0xD7CCL,0xD7CCL,0x90C5L,5UL},{0x696DL,1UL,0x715AL,0UL,0UL},{0xDE92L,65526UL,1UL,1UL,0x6385L},{0x53A8L,0x715AL,0x696DL,0UL,5UL}},{{0xCEC1L,0xB43AL,65526UL,1UL,0xC7EAL},{0UL,0xDE94L,0xDE94L,0UL,0x1F70L},{1UL,1UL,0x9CC6L,1UL,0xE25CL},{0xE167L,0x8245L,1UL,0UL,0xA287L},{0UL,0x9CC6L,0xB43AL,1UL,0UL},{0xC964L,0x696DL,0x8245L,0UL,0x61ADL}},{{1UL,0x90C5L,0x90C5L,1UL,0x3F1DL},{1UL,1UL,0x715AL,0UL,0UL},{0xDE92L,65526UL,1UL,1UL,0x6385L},{0x53A8L,0x715AL,0x696DL,0UL,5UL},{0xCEC1L,0xB43AL,65526UL,1UL,0xC7EAL},{0UL,0xDE94L,0xDE94L,0UL,0x1F70L}},{{1UL,1UL,0x9CC6L,1UL,0xE25CL},{0xE167L,0x8245L,1UL,0UL,0xA287L},{0UL,0x9CC6L,0xB43AL,1UL,0UL},{0xC964L,0x696DL,0x8245L,0UL,0x61ADL},{1UL,0x90C5L,0x90C5L,1UL,0x3F1DL},{1UL,1UL,0x715AL,0UL,0UL}},{{0xDE92L,65526UL,1UL,1UL,0x6385L},{0x53A8L,0x715AL,0x696DL,0UL,5UL},{0xCEC1L,0xB43AL,65526UL,1UL,0xC7EAL},{0UL,0xDE94L,0xDE94L,0UL,0x1F70L},{1UL,1UL,0x9CC6L,1UL,0xE25CL},{0xE167L,0x8245L,1UL,0UL,0xA287L}}};
                    int16_t *l_303 = &g_235.f2;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_285[i] = &g_2[4][2];
                    for (i = 0; i < 2; i++)
                        l_295[i] = 9L;
                    g_287 = ((*l_286) = l_285[2]);
                    l_295[0] |= ((((((void*)0 != (*g_217)) != 65529UL) > ((l_288 != l_289) <= ((*l_236) = (safe_mul_func_int8_t_s_s(1L, (l_292 == g_293[0][4][0])))))) , 6UL) == 65529UL);
                    if ((*g_68))
                        continue;
                    l_244 &= ((safe_sub_func_int32_t_s_s((((*l_303) = (((safe_sub_func_int16_t_s_s((l_300[4][1][4] == (p_24 , l_301)), (l_280 , p_25))) != ((((p_24 , ((p_24 , p_25) && p_24)) && l_248) == 1UL) == p_24)) && l_302[5][1][1])) , (-1L)), 1UL)) && 255UL);
                }
                if ((**g_217))
                    break;
            }
            l_248 = (((g_80.f0 = p_25) , ((void*)0 != l_305)) < (-1L));
            (*l_308) = l_306;
        }
    }
    return l_309;
}



static int32_t * func_27(int32_t * p_28, int32_t * p_29, const int32_t * p_30, uint8_t  p_31, uint8_t  p_32)
{ 
    return p_29;
}



static int32_t * func_33(int32_t * p_34, int32_t * p_35, int32_t * p_36, int32_t * const  p_37)
{ 
    const uint32_t l_152 = 1UL;
    int32_t l_175 = (-3L);
    struct S0 *l_195 = &g_138;
    struct S0 **l_194 = &l_195;
    struct S0 ** const *l_193 = &l_194;
    int32_t *l_196 = &l_175;
    int32_t *l_197 = &g_69;
    int32_t *l_198 = &l_175;
    int32_t *l_199 = &g_105;
    int32_t *l_200 = (void*)0;
    if (g_8)
    { 
        struct S0 *l_149 = &g_138;
        struct S0 **l_148 = &l_149;
        (*l_148) = (void*)0;
    }
    else
    { 
        const uint8_t l_157 = 0x4CL;
        int32_t l_191 = 0x3F2DFE02L;
        int32_t **l_192 = &g_68;
        for (g_105 = 0; (g_105 > (-6)); g_105 = safe_sub_func_int16_t_s_s(g_105, 5))
        { 
            int32_t *l_153 = &g_69;
            uint16_t *l_161 = (void*)0;
            uint16_t **l_160[2][7] = {{&l_161,&l_161,&l_161,&l_161,&l_161,&l_161,&l_161},{&l_161,&l_161,&l_161,&l_161,&l_161,&l_161,&l_161}};
            int32_t l_165 = 0xCCA4C161L;
            uint8_t *l_172 = &g_67[0][0][2];
            uint64_t *l_176 = (void*)0;
            uint64_t *l_177 = &g_97;
            int64_t *l_181[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_181[i] = &g_80.f0;
            (*l_153) = l_152;
            l_165 |= (safe_mul_func_int16_t_s_s((~((l_152 , (-1L)) != ((l_157 != (l_152 || (g_67[0][0][3] = (safe_lshift_func_int16_t_s_s(((g_162 = &g_111[2]) != (void*)0), 8))))) & ((safe_mod_func_int16_t_s_s(0x83CBL, l_157)) ^ (*l_153))))), g_80.f0));
            l_191 ^= ((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_172)++), (g_180[2][0] = (((*l_177)--) > 18446744073709551609UL)))), (l_175 = ((void*)0 != &g_69)))), ((((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s((((safe_lshift_func_int8_t_s_u(g_138.f1, (safe_sub_func_int8_t_s_s(0x11L, (safe_mul_func_uint8_t_u_u(((((((*l_153) < g_105) != 0x3AAE15D1L) >= (*g_162)) ^ g_69) >= (*l_153)), l_152)))))) , 5UL) & (*l_153)))) != l_157), 251UL)) != l_157) | 0x7276L) <= g_111[5]))) <= (*l_153));
        }
        (*l_192) = &l_175;
    }
    l_193 = l_193;
    g_201++;
    for (g_98 = (-18); (g_98 != (-19)); g_98--)
    { 
        int64_t l_226 = (-8L);
        int32_t l_227 = 0xEB891180L;
        l_227 |= ((safe_mod_func_uint16_t_u_u(((*g_162) = ((safe_lshift_func_int8_t_s_u((+((safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(((0UL || (safe_lshift_func_uint16_t_u_s(1UL, (((((void*)0 != g_217) ^ (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((*l_198), g_201)), (((safe_mul_func_uint16_t_u_u((0x9760L || (-1L)), l_226)) == (*l_198)) < (*p_37)))) == 0xEEL), l_226))) == 0L) == g_98)))) <= g_180[5][0]), 15)) != (*l_199)) & 0x9DD4L), (*l_197))) | (*l_198))), g_2[3][0])) && g_97)), l_226)) ^ l_226);
        (*g_217) = p_34;
        for (g_69 = 27; (g_69 > (-2)); g_69--)
        { 
            for (g_80.f0 = 0; g_80.f0 < 6; g_80.f0 += 1)
            {
                g_111[g_80.f0] = 0x247FL;
            }
        }
    }
    return p_35;
}



static int32_t * func_39(int32_t  p_40, uint8_t  p_41)
{ 
    int32_t l_125 = (-4L);
    int32_t *l_126[5][3];
    int32_t **l_127[7] = {&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68};
    uint8_t l_129 = 0x81L;
    union U1 **l_139 = (void*)0;
    int32_t l_140 = 0xB0424951L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_126[i][j] = (void*)0;
    }
    p_40 ^= ((g_68 = (((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(g_97, (g_111[4] ^= (g_11 == p_41)))) == ((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((g_8 ^ p_41) < ((g_105 < l_125) <= p_41)), 7)) ^ l_125), 4UL)) && 0x4C3CCEA890DCF643LL)) | 1L), l_125)), g_80.f0)) != l_125) , l_126[2][1])) == (void*)0);
    if (g_8)
        goto lbl_128;
lbl_128:
    p_40 = p_40;
    l_129--;
    p_40 = (safe_lshift_func_int16_t_s_s((((safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(p_40, (&g_67[0][0][2] == (void*)0))), (((((g_138 , l_139) != l_139) , 9L) <= g_11) <= l_140))) ^ g_106) && p_40), g_69));
    for (g_69 = 21; (g_69 != (-19)); g_69 = safe_sub_func_int32_t_s_s(g_69, 5))
    { 
        uint16_t l_145 = 65535UL;
        g_105 = (safe_lshift_func_uint8_t_u_u(p_40, 5));
        p_40 = l_145;
        for (l_129 = 0; (l_129 > 10); l_129++)
        { 
            return &g_2[3][0];
        }
    }
    return &g_69;
}



static uint16_t  func_42(uint64_t  p_43, int8_t  p_44, int32_t * p_45)
{ 
    uint16_t l_57 = 0x4FCDL;
    uint8_t *l_76 = &g_67[0][0][1];
    int32_t *l_100 = &g_69;
    int32_t *l_101 = (void*)0;
    int32_t *l_102 = (void*)0;
    int32_t l_103 = 0L;
    int32_t *l_104[6][1][1] = {{{&l_103}},{{&g_69}},{{&l_103}},{{&g_69}},{{&l_103}},{{&g_69}}};
    int8_t l_109 = 0x40L;
    int i, j, k;
    for (p_44 = (-23); (p_44 != 13); p_44 = safe_add_func_int16_t_s_s(p_44, 4))
    { 
        int32_t *l_58[3];
        int32_t l_70 = 0x2EF61160L;
        int i;
        for (i = 0; i < 3; i++)
            l_58[i] = &g_11;
        for (p_43 = 0; (p_43 <= 56); p_43++)
        { 
            uint8_t *l_66 = &g_67[0][0][2];
            int32_t l_71 = 6L;
            int32_t l_99[3];
            int i;
            for (i = 0; i < 3; i++)
                l_99[i] = 0x4B7FD3A1L;
            l_71 = (safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((!(((~l_57) | (l_58[0] == (g_68 = ((((*l_66) = (safe_mul_func_int16_t_s_s((p_43 == 0xF9L), (0x5FL & func_61(p_45, l_58[0], &g_2[3][0]))))) & p_44) , p_45)))) <= 0x1DL)), g_69)) , l_70), p_44));
            g_69 = p_44;
            if ((safe_add_func_int16_t_s_s(0x521FL, (safe_lshift_func_uint8_t_u_u(g_2[1][3], ((l_76 == ((safe_rshift_func_int16_t_s_u((0xECL <= 0L), 2)) , &g_67[0][0][2])) , 0xBCL))))))
            { 
                union U1 *l_82 = &g_80;
                union U1 **l_81 = &l_82;
                int32_t **l_83 = (void*)0;
                int32_t **l_85[3][6][1] = {{{&l_58[0]},{&g_68},{&l_58[0]},{&g_68},{&g_68},{&l_58[0]}},{{&g_68},{&l_58[0]},{&g_68},{&g_68},{&l_58[0]},{&g_68}},{{&l_58[0]},{&g_68},{&g_68},{&l_58[0]},{&g_68},{&l_58[0]}}};
                uint64_t *l_96[2][6][7] = {{{&g_97,&g_97,&g_97,(void*)0,&g_97,(void*)0,&g_97},{(void*)0,&g_97,&g_97,&g_97,(void*)0,&g_97,&g_97},{&g_97,(void*)0,&g_97,(void*)0,&g_97,&g_97,&g_97},{&g_97,(void*)0,&g_97,&g_97,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97,&g_97,(void*)0,&g_97},{&g_97,&g_97,&g_97,&g_97,(void*)0,&g_97,&g_97}},{{&g_97,&g_97,&g_97,&g_97,&g_97,&g_97,&g_97},{(void*)0,&g_97,&g_97,&g_97,(void*)0,(void*)0,&g_97},{(void*)0,&g_97,(void*)0,(void*)0,&g_97,&g_97,&g_97},{&g_97,&g_97,&g_97,&g_97,(void*)0,&g_97,&g_97},{&g_97,(void*)0,&g_97,&g_97,&g_97,&g_97,&g_97},{(void*)0,(void*)0,&g_97,&g_97,&g_97,(void*)0,&g_97}}};
                int i, j, k;
                (*l_81) = g_79[0];
                g_68 = p_45;
                g_69 = ((~(l_58[2] != (g_68 = (void*)0))) || (safe_mul_func_int8_t_s_s((4294967289UL ^ (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((l_71 = ((((0xF9CD946680AE02F1LL == (safe_sub_func_uint64_t_u_u(1UL, ((((&g_79[0] == (void*)0) , 0L) , l_71) > (-7L))))) , (void*)0) == &g_67[0][0][2]) != p_44)), g_98)), l_57)) <= l_99[2]), p_44))), g_80.f0)));
            }
            else
            { 
                return p_43;
            }
        }
    }
    ++g_106;
    return l_109;
}



static int8_t  func_61(int32_t * p_62, int32_t * p_63, int32_t * p_64)
{ 
    uint32_t l_65[1][1][2];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_65[i][j][k] = 6UL;
        }
    }
    return l_65[0][0][1];
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
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_67[i][j][k], "g_67[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_111[i], "g_111[i]", print_hash_value);

    }
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_138.f1, "g_138.f1", print_hash_value);
    transparent_crc(g_138.f2, "g_138.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_180[i][j], "g_180[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_235.f0, "g_235.f0", print_hash_value);
    transparent_crc(g_235.f1, "g_235.f1", print_hash_value);
    transparent_crc(g_235.f2, "g_235.f2", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_250[i][j][k], "g_250[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_374, "g_374", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_429[i][j][k], "g_429[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
