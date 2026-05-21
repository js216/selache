// SPDX-License-Identifier: MIT
// cctest_csmith_07e94033.c --- cctest case csmith_07e94033 (csmith seed 132726835)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5cbb6fe2 */

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

// Options:   -s 132726835 -o /tmp/csmith_gen__1ebpzq3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint64_t  f1;
   int32_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   const uint32_t  f3;
   uint64_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U3 {
   const uint32_t  f0;
   int16_t  f1;
   int32_t  f2;
   int16_t  f3;
};


static uint64_t g_3 = 7UL;
static uint16_t g_15[5] = {0UL,0UL,0UL,0UL,0UL};
static int32_t g_43[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
static union U3 g_46 = {0x772A30FBL};
static int16_t g_54[1] = {0x29B0L};
static uint32_t g_80 = 0x52BC05D4L;
static struct S0 g_95 = {-10L,0x8D9B7878971D2F7ALL,1L};
static uint64_t g_127 = 4UL;
static uint16_t g_142 = 65535UL;



static const int32_t  func_1(void);
static int8_t  func_6(int32_t  p_7, union U3  p_8, uint32_t  p_9);
static struct S0  func_17(uint16_t  p_18);
static union U3  func_19(int32_t  p_20);




static const int32_t  func_1(void)
{ 
    uint32_t l_134 = 0UL;
    uint8_t l_141 = 255UL;
    uint32_t l_143[3];
    int32_t l_162 = 0xF555DEF7L;
    int32_t l_167 = 0L;
    int32_t l_169 = (-1L);
    int32_t l_171 = (-1L);
    int32_t l_176 = 0xD9FAC996L;
    int i;
    for (i = 0; i < 3; i++)
        l_143[i] = 0x3FB78770L;
    if ((safe_unary_minus_func_uint32_t_u(g_3)))
    { 
        struct S1 l_14[4] = {{0xE0D1B713L,1UL,65535UL,8UL,0xBF748DC164F943AFLL,0x806AA1C3L},{0xE0D1B713L,1UL,65535UL,8UL,0xBF748DC164F943AFLL,0x806AA1C3L},{0xE0D1B713L,1UL,65535UL,8UL,0xBF748DC164F943AFLL,0x806AA1C3L},{0xE0D1B713L,1UL,65535UL,8UL,0xBF748DC164F943AFLL,0x806AA1C3L}};
        union U3 l_16 = {1UL};
        int i;
        l_14[2].f0 = (safe_add_func_uint8_t_u_u(((func_6((8UL >= (g_3 > (safe_mod_func_int16_t_s_s(0x2C32L, ((safe_mod_func_int32_t_s_s((((l_14[2] , g_3) != 0xD8F27142B622B607LL) | g_3), g_15[0])) , 0xF7B4L))))), l_16, l_14[2].f1) <= l_134) < g_15[0]), l_134));
        g_43[4] = ((g_95.f2 = l_14[2].f5) && g_43[3]);
        for (g_80 = 0; (g_80 <= 4); g_80 += 1)
        { 
            int64_t l_144[5][5] = {{2L,0x7B8FE932ECC1E89FLL,2L,0x7B8FE932ECC1E89FLL,2L},{0L,0xD173CA9471153854LL,0xD173CA9471153854LL,0L,0L},{0xA213CC13D62D75D4LL,0x7B8FE932ECC1E89FLL,0xA213CC13D62D75D4LL,0x7B8FE932ECC1E89FLL,0xA213CC13D62D75D4LL},{0L,0L,0xD173CA9471153854LL,0xD173CA9471153854LL,0L},{2L,0x7B8FE932ECC1E89FLL,2L,0x7B8FE932ECC1E89FLL,2L}};
            int i, j;
            for (l_16.f2 = 0; (l_16.f2 <= 0); l_16.f2 += 1)
            { 
                int i;
                g_95.f2 &= (l_144[2][1] = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((((g_54[0] = g_43[g_80]) >= (g_15[(l_16.f2 + 3)] ^ ((g_142 |= ((g_46 , 0x202676B60554FBD3LL) == l_141)) < l_143[0]))) | (-2L)) <= 0L), l_143[2])), g_15[(l_16.f2 + 3)])));
            }
        }
    }
    else
    { 
        uint16_t l_145 = 0xAB05L;
        int32_t l_163 = 0x5DD3F592L;
        int32_t l_164 = 0x2CBF24FAL;
        int32_t l_170 = 0x4486B936L;
        int32_t l_177[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_177[i][j] = 5L;
        }
        ++l_145;
        for (l_145 = 0; (l_145 == 27); l_145 = safe_add_func_int32_t_s_s(l_145, 2))
        { 
            int16_t l_152 = (-5L);
            uint16_t l_159 = 0x0D2DL;
            uint8_t l_160 = 0x41L;
            int32_t l_161 = 0xFBB9A9CBL;
            int32_t l_166 = 0x5AA70A8BL;
            int32_t l_172 = (-4L);
            int32_t l_173 = 0xB7113991L;
            int32_t l_175 = (-1L);
            int32_t l_178[4][1] = {{0x8D4ABBEEL},{0L},{0x8D4ABBEEL},{0L}};
            uint8_t l_179 = 8UL;
            int i, j;
            if ((l_161 = ((((safe_add_func_uint32_t_u_u(l_145, l_152)) <= (((safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s((l_160 &= (safe_mod_func_uint8_t_u_u(((-1L) <= l_159), g_3))), l_145)), l_159)) , g_54[0]) > (-1L))) , 0x7AL) , 1L)))
            { 
                int32_t l_165 = 0x3EF36B23L;
                int32_t l_168 = 3L;
                int32_t l_174[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_174[i][j] = (-6L);
                }
                l_162 &= g_46.f3;
                l_179++;
            }
            else
            { 
                uint8_t l_182 = 255UL;
                int32_t l_189 = 0xE19B3A5BL;
                g_95.f2 = (g_43[4] = (l_182 | (safe_add_func_uint8_t_u_u(254UL, (((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint64_t_u_u(l_182, ((g_3 ^= 0x6E1C0719355E81BFLL) <= l_145))) & l_171) != g_46.f3), 6)) | g_46.f3) <= l_189)))));
            }
            return l_160;
        }
    }
    g_95.f2 = 0x8936FAD9L;
    return l_134;
}



static int8_t  func_6(int32_t  p_7, union U3  p_8, uint32_t  p_9)
{ 
    uint32_t l_23 = 0xB4E3473EL;
    uint16_t l_35 = 65534UL;
    int32_t l_36 = 0xC62ED5BBL;
    int32_t l_37 = 0x74E37A2EL;
    struct S0 l_131 = {5L,0x55FAF6E0732D5814LL,7L};
    l_131 = func_17((func_19((l_37 &= (safe_lshift_func_int16_t_s_u(((((l_23 >= (safe_unary_minus_func_uint8_t_u((((safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s(0L, (((safe_lshift_func_uint8_t_u_u(g_15[0], 2)) == ((safe_mod_func_int8_t_s_s(((((safe_mul_func_int16_t_s_s((-1L), 0xCB11L)) | l_23) <= 0x0D42L) , g_15[4]), l_35)) >= 0x10L)) ^ 65533UL))), g_15[0])) < p_9) || l_36)))) > 0xF2BAC411L) >= 247UL) && (-1L)), g_3)))) , g_15[0]));
    for (p_8.f3 = (-5); (p_8.f3 > (-13)); p_8.f3--)
    { 
        return g_43[4];
    }
    l_37 |= 0L;
    return l_35;
}



static struct S0  func_17(uint16_t  p_18)
{ 
    uint32_t l_72 = 4294967287UL;
    uint32_t l_79 = 18446744073709551610UL;
    int32_t l_81 = (-8L);
    uint16_t l_90 = 0xC814L;
    struct S0 l_123 = {2L,0x4908F88A645C98B2LL,1L};
lbl_98:
    g_80 |= (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((((l_72 | (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s(g_43[4], (p_18 <= l_72))), 13)), g_46.f3))) == g_15[3]) < 1L) , g_54[0]) , l_72) < 0xB09233419813DA77LL), l_79)), l_72)), 7)), g_15[0])), l_72));
    if (((l_81 = 0xCF873A64L) , g_15[0]))
    { 
        uint8_t l_120 = 1UL;
        if (((1L <= ((l_90 = (safe_add_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_3, (safe_add_func_int16_t_s_s(p_18, (l_81 = 0xDBBFL))))), 0x918AL)) != p_18) && p_18), 0x4B686F2FD6C9D3DALL))) , g_15[4])) & (-1L)))
        { 
            uint8_t l_91 = 248UL;
            struct S0 l_94 = {0xF448C36471EDBFDFLL,18446744073709551615UL,1L};
            l_91--;
            g_95 = l_94;
            for (l_72 = 0; (l_72 <= 24); l_72++)
            { 
                const int16_t l_121 = 0xEED7L;
                if (l_79)
                    break;
                if (p_18)
                    goto lbl_98;
                l_94.f2 = ((1UL < ((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(7L, ((((!((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((-1L), (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((l_120 = (g_54[0] | p_18)), l_121)) != p_18), g_95.f0)), g_43[1])))), 4)), g_95.f0)) && g_15[0]), p_18)), l_91)) , g_54[0])) , g_46.f1) , l_120) ^ p_18))), l_79)) >= l_72)) | l_121);
            }
        }
        else
        { 
            uint32_t l_122 = 1UL;
            l_122 = 0x874A8060L;
            return l_123;
        }
    }
    else
    { 
        int32_t l_124 = 0xFE2B3C89L;
        int32_t l_125 = (-8L);
        int32_t l_126 = 0x8D826447L;
        struct S0 l_130 = {0x28E062575ED6F0B3LL,0x3E231492E8FA5C3DLL,0L};
        ++g_127;
        g_46.f2 = (g_15[1] == 0x0823L);
        l_130 = l_123;
    }
    return l_123;
}



static union U3  func_19(int32_t  p_20)
{ 
    uint8_t l_47 = 8UL;
    int32_t l_61[3][1];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_61[i][j] = (-2L);
    }
    for (g_3 = 0; (g_3 <= 14); g_3++)
    { 
        const uint16_t l_42 = 0xE569L;
        for (p_20 = 0; (p_20 != (-17)); p_20--)
        { 
            if (l_42)
                break;
            for (g_43[4] = 0; (g_43[4] < (-10)); g_43[4]--)
            { 
                return g_46;
            }
            g_54[0] |= ((l_47 || 0xA4A91A3D0676DFA5LL) & (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s(l_42, g_3)) == p_20), l_42)), g_15[0])));
        }
    }
    for (g_46.f2 = (-15); (g_46.f2 < (-17)); g_46.f2 = safe_sub_func_int8_t_s_s(g_46.f2, 9))
    { 
        g_43[4] = (safe_rshift_func_uint8_t_u_u(4UL, 7));
    }
    for (g_46.f1 = 0; (g_46.f1 == 6); g_46.f1 = safe_add_func_uint8_t_u_u(g_46.f1, 2))
    { 
        l_61[0][0] ^= (p_20 ^ 0x2E49L);
    }
    return g_46;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);

    }
    transparent_crc(g_46.f1, "g_46.f1", print_hash_value);
    transparent_crc(g_46.f3, "g_46.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_54[i], "g_54[i]", print_hash_value);

    }
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_95.f1, "g_95.f1", print_hash_value);
    transparent_crc(g_95.f2, "g_95.f2", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
